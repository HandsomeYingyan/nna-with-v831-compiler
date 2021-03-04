#ifndef __DATA_MANAGER_H__
#define __DATA_MANAGER_H__

#include <string>
#include <utils/Mutex.h>
#include <pthread.h>
#include <sys/time.h>
#include <queue>
#include "device_model/storage_manager.h"
#include "dd_serv/dd_common.h"
#include <map>

using namespace EyeseeLinux;

#define MAX_KEY_LEN 32
#define MAX_DATANAME_LEN 32

typedef enum
{
	SHOOT_TYPE = 0,
	ABNORMAL_TYPE,
	GPS_TYPE,
	ALL_TYPE
}cmd_t;

typedef enum
{
	ACTION_DATA = 0,
	FACE_DATA,
	FILE_DATA,
	GPS_DATA,
	USER_DATA,
}DataType;

typedef struct _ACTION_INFO_
{
	int driving_mode;	//�г�ģʽ	 0��˽�ҳ�ģʽ	 1: ˳�糵ģʽ
	int after_camera_state; // ��¼����ͷ����״̬	  0 �ر�   1����
	int before_camera_state; //ǰ������ͷ����״̬	  0 �ر�   1����
	int microphone_state;//¼��״̬		  0 �ر�   1����
	int timestamp;	//ʱ���
}ACTION_INFO;

typedef struct _FACE_INFO_
{
	int age;   //����
	int sex;   //�Ա�
	char face_pig_name;	// ������ͼ����
	int seat_location; // 1:˾�� 2���˿�
	char md5[64]; //ʶ��ͼƬMD5
}FACE_INFO;

typedef struct _ALL_FACE_INFO_
{
	std::string order_id;
	std::string timestamp;
	std::vector<FACE_INFO> face_list;
}ALL_FACE_INFO;

typedef struct _FILE_INFO_
{
	int file_type; // �ļ�����	 0��ͼƬ   1����Ƶ
	char file_name[64];	//�ļ�����
	int file_size; //�ļ���С
	char file_path[64]; //�ļ�·��
	int creat_time; // ����ʱ��
	int shoot_type; // 0 : ��������ͷ�������ļ�  1��ǰ������ͷ�������ļ�
	char orderId[64];
}FILE_INFO;

typedef struct _GPS_INFO_
{
	char longitude[64];	// ����
	char latitude[64];    //γ��
	float altitude;   // ����
	char car_speed[64];	 // ����   ��λ��m/s
	int net_state;	//����״̬	 0:4G 1��3G  2��2G	3��WiFi 4��������
	char timestamp[64];	//ʱ���
}GPS_INFO;

//1469148274,GSENSOR,0.005615,-0.89917,9.89917
typedef struct _USER_INFO_
{
	int driver_id;	// ����id
	char imei[64];	   // �豸imei
	char svn[64];	   //  �豸svn
	char sim_serial[64];   //SIM�����к�
	char license_plate[64];	// ����
	int timestamp;	//ʱ���
}USER_INFO;

typedef std::map<std::string, FILE_INFO> FileMap;

class DataManager
{
public:
	DataManager();
	~DataManager();

public:
	static DataManager* GetInstance(void);

	int WriteActionBinData(ACTION_INFO p_actionInfo);

	int WriteFaceBinData(ALL_FACE_INFO p_faceInfo);

	int WriteGpsBinData(GPS_INFO p_gpsInfo);

	int WriteUserBinData(USER_INFO p_userData);

	/*
	*����: int upLoadCompressLogFile(string &p_FileName, string &p_Key)
	*����: ��ȡѹ����־
	*����:  
	*	p_FileName: ���ѹ�����ļ��� ���
	*   p_Key: ���ѹ�����ļ�����Կ ���
	*����ֵ:
	*   0:�ɹ�
	*   -1:ʧ��
	*�޸�: ����2018/6/11
	*/
	int upLoadCompressLogFile(std::string &p_FileName, std::string &p_Key);

	/*
	*����: int upLoadFileLog(string &p_FileName, string &p_Key)
	*����: ��ȡ�ļ��б�
	*����:	
	*	p_FileName: ����ļ��б� ���
	*	p_Key: ����ļ��б�ļ�����Կ ���
	*����ֵ:
	*	0:�ɹ�
	*	-1:ʧ��
	*�޸�: ����2018/6/11
	*/
	int upLoadFileLog(std::string &p_FileName, std::string &p_Key);
	int setUploadFileList();
	int setUploadLogList(const TrafficDataMsg *trafficMsg);
	int syncData(int p_FileID);
	int setQueryInfo(std::string p_startTime, std::string p_stopTime);
	/*
	*����: int setQueryRollOrderId(std::string p_OrderId)
	*����: ������Ҫ��ѯ�Ķ����ţ���ѯ���ͨ���첽����
	*����: 
	*	p_OrderId:	������
	*����ֵ:
	*	0:�ɹ�
	*	-1:ʧ��
	*�޸�: ����2018/7/17
	*/
	int setQueryRollOrderId(std::string p_OrderId);

	int ClearMap();
	int pushToFileMap(FILE_INFO p_FileInfo);
	int popFromFileMap(FILE_INFO p_FileInfo);
	int dumpFileMap();
private:
	int WriteActionData(std::vector<ACTION_INFO> p_actionInfo);
	int WriteFaceData(std::vector<ALL_FACE_INFO> p_faceInfo);
	int WriteFileData(FileMap p_FileMap);
	int WriteGpsData(std::vector<GPS_INFO> p_gpsInfo);
	int WriteUserData(std::vector<USER_INFO> p_userData);

	static void GenEncCompressFile();
	static int PaserCmdTypeOperation(const TrafficDataMsg *trafficMsg, DataManager *Dm);
	static void GenEncCompressFile_Notify(const TrafficDataMsg *trafficMsg, DataManager *Dm, bool Is_sucess);
	
	int getFileMd5(const std::string p_FileName, std::string & p_Md5);
	static void *CompressFileThread(void *context);
	static void *GPSDataToFileThread(void *context);
	static void *GetTrafficCmdThread(void *context);
private:
	time_t m_creat_time;
	bool m_ThreadExit;
	pthread_t ComPressThreadId;
	pthread_t GPSDataOpThreadId;
	pthread_t GetTrafficCmdThreadId;
	Mutex m_mutex;
	StorageManager *mStorage;
	bool m_UploadFile, m_uploadLog;
	bool m_querybyorder_flag;
	std::string m_fileKey, m_logKey;
	std::string m_logName, m_fileListName;
	int m_startTime, m_stopTime;
	std::string m_OrderId;
	FileMap m_FileMap;
};

#endif
