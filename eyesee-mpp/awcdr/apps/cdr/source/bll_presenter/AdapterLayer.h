
/*
*��Ȩ����:����
*�ļ�����:AdapterLayer.h
*������:����
*��������:2018-5-11
*�ļ�����:���ļ���Ҫת���ε�ƽ̨��������ָ������
*��ʷ��¼:��
*/

#ifndef __ADAPTERLAYER_H__
#define __ADAPTERLAYER_H__

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include "dd_serv/dd_common.h"
#include "../source/device_model/system/factory_writesn.h"

class AdapterLayer
{
	public:
		AdapterLayer();
		~AdapterLayer();

        /*
		*name: int setTfMounted(int p_Status)
		*description: set tf card mounted flag
		*return:
		*   0:success
		*/
        int setTfMounted(int p_Status);

        /*
		*name: int getTfMounted(void)
		*description: get tf card mounted flag
		*return:
		*   1: mounted
        *   0: not mounted
		*/
        int getTfMounted(void);

	public:
		static AdapterLayer * GetInstance();
		void getDeviceInfo(Device_info &p_DevInfo);
        /*
		*����: int getDeviceInfo(RemoteDeviceStatusInfo &p_DevInfo)
		*����: ��ȡ�豸״̬��Ϣ
		*����: p_DevInfo 
		*	�豸��Ϣ��� ���
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int getDeviceInfo(RemoteDeviceStatusInfo &p_DevInfo);

		/*
		*����: int getUnnormalDeviceInfo(RemoteDeviceAbnormalInfo &p_DevInfo)
		*����: ��ȡ�豸�쳣ʱ���豸״̬��Ϣ
		*����: p_DevInfo 
		*	�豸�쳣ʱ���豸��Ϣ��� ���
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int getUnnormalDeviceInfo(RemoteDeviceAbnormalInfo &p_DevInfo);

		/*
		*����: int setRollingOrder(const string p_OrderId, int p_Status)
		*����: ����˳�糵ָ��
		*����:  
		*	p_OrderId: ˳�糵������ ����
		*   p_Status: ��������(0)/������ʼ(1)
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int setRollingOrder(const std::string p_OrderId, int p_Status);

		/*
		*����: int getRollingOrderId(string &p_OrderId)
		*����: ��ȡ˳�糵������
		*����:  
		*	p_OrderId: ˳�糵������ ���
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int getRollingOrderId(std::string &p_OrderId);

        int getRollingOrderIdByName(const std::string &p_FileName, std::string &p_OrderId);

		/*
		*����: int setDevAttr(int p_FrontRecResolutionIndex, int p_BackRecResolutionIndex, int p_gSensorValue)
		*����: �����豸����
		*����: 
		*	p_FrontRecResolutionIndex: ǰ�ñ���ͷ�ֱ���
		*	p_BackRecResolutionIndex: ��������ͷ�ֱ���
		*   p_gSensorValue: gsensor������ֵ 0:�� 1:�� 2:�� 3:��
		*	�豸������Ϣ ����
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int setDevAttr(int p_FrontRecResolutionIndex,int p_BackRecResolutionIndex, int p_gSensorValue);

		/*
		*����: int setDevAttrEx(int p_gSensorValue)
		*����: �����豸gsensor����
		*����: 
		*   p_gSensorValue: gsensor������ֵ 0:�� 1:�� 2:�� 3:��
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int setDevAttrEx(int p_gSensorValue);

		/*
		*����: int setShootAttr(int p_FrontCamEnable, int p_BackCamEnable, int p_AudioType)
		*����: ������������
		*����: 
		*	p_FrontCamEnable: ǰ������ͷ����(0) /�ر�(1)/
		*	p_BackCamEnable:  ��������ͷ����(0) /�ر�(1)
		*   p_AudioType: ��(0)/��(1)/����¼��(2)
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int setShootAttr(int p_FrontCamEnable, int p_BackCamEnable, int p_AudioType);

		/*
		*����: int setSlientPhoto(int p_RecordType, const string p_picName)
		*����: ���þ�Ĭ��������
		*����: 
		*	p_RecordType: ��������ͷ����(0)/ǰ������ͷ����(1)
		*   p_picName: ��Ƭ����
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int setSlientPhoto(int p_RecordType, const std::string p_picName);

		/*
		*����: int getSlientPic(FilePushInfo &p_Pic)
		*����: ��ȡ��Ĭ���յĽ��
		*����: 
		*	p_Pic: �����Ϣ
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int getSlientPic(FilePushInfo &p_Pic);

		/*
		*����: int getRecordFile(FilePushInfo &p_fileInfo)
		*����: ��ȡ�ļ���Ϣ
		*����: 
		*	p_fileInfo: �ļ���Ϣ�ṹ��
		*����ֵ:
		*   0:�ɹ�
		*   1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int getRecordFile(FilePushInfo &p_fileInfo);

		/*
		*����: int setTriggerFaceOneTime()
		*����: ���ô�������ʶ��( ֻ����һ��)
		*����: ��
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int setTriggerFaceOneTime(int frame_cnt);

		/*
		*����: int getFaceDetectResult(FilePushInfo *p_fileInfo)
		*����: ��ȡ���������
		*����:
		*	p_fileInfo ����������ṹ�� ���
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int getFaceDetectResult(FilePushInfo *p_fileInfo);

		/*
		*����: int setTriggerRecord(int p_CamSelect, int p_AudioSelect, int p_CamResolution, int p_RecTime, const string p_FileName)
		*����: ���ô���С��Ƶ����
		*����: 
		*	p_CamSelect: ��·����ͷ����(0)/ǰ·����ͷ����(1)
		*   p_RecTime: ¼��ʱ��
		*   p_FileName: ¼���ļ�����
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int setTriggerRecord(int p_CamSelect, int p_AudioSelect, int p_CamResolution, int p_RecTime, const std::string p_FileName);

		/*
		*����: int setLockFileByTime(const string p_StartTime, const string p_StopTime, const string p_LockTime, int p_CamId)
		*����: ����ָ��ʱ���������ļ�������������������ʱ��
		*����: 
		*	p_StartTime: ��ʼʱ��
		*   p_StopTime: ����ʱ��
		*   p_LockTime: ����ʱ��
		*   p_CamId: cameraѡ��,0��ǰ·��1�Ǻ�·
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int setLockFileByTime(const std::string p_StartTime, const std::string p_StopTime, const std::string p_LockTime, int p_CamId = 1);

		/*
		*����: int setLockFileByTimeEx(const string p_StartTime, const string p_StopTime, const string p_LockTime, int p_CamId,std::string p_OrderId)
		*����: ����ָ��ʱ���������ļ�������������������ʱ��
		*����: 
		*	p_StartTime: ��ʼʱ��
		*   p_StopTime: ����ʱ��
		*   p_LockTime: ����ʱ��
		*   p_CamId: cameraѡ��,0��ǰ·��1�Ǻ�·
		*   p_OrderId: ������
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int setLockFileByTimeEx(const std::string p_StartTime, const std::string p_StopTime, const std::string p_LockTime, int p_CamId = 1, std::string p_OrderId="");

		/*
		*����: int getLockFileByTimeResult(std::vector<LockFileInfo> &p_fileLockInfo)
		*����: ��ȡ�����ļ����
		*����:
		*	p_fileLockInfo ���
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int getLockFileByTimeResult(std::vector<LockFileInfo> &p_fileLockInfo);


		/*
		*����: int setUnLockFileByTime(const string p_StartTime, const string p_StopTime, int p_CamId)
		*����: ����ָ��ʱ���������ļ�
		*����: 
		*	p_StartTime: ��ʼʱ��
		*   p_StopTime: ����ʱ��
		*   p_CamId: cameraѡ��,0��ǰ·��1�Ǻ�·
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int setUnLockFileByTime(const std::string p_StartTime, const std::string p_StopTime, int p_CamId = 1);

		/*
		*����: int setUnLockFileByTimeEx(const string p_StartTime, const string p_StopTime, int p_CamId, std::string p_OrderId)
		*����: ����ָ��ʱ���������ļ�
		*����: 
		*	p_StartTime: ��ʼʱ��
		*   p_StopTime: ����ʱ��
		*   p_CamId: cameraѡ��,0��ǰ·��1�Ǻ�·
		*   p_OrderId: ������
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int setUnLockFileByTimeEx(const std::string p_StartTime, const std::string p_StopTime, int p_CamId = 1, std::string p_OrderId="");

		/*
		*����: int getUnLockFileByTimeResult(std::vector<LockFileInfo> &p_fileUnLockInfo)
		*����: ��ȡ�����ļ����
		*����:
		*	p_fileUnLockInfo  ���
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int getUnLockFileByTimeResult(std::vector<LockFileInfo> &p_fileUnLockInfo);

		/*
		*����: int getLockFileBynameResult(LockFileInfo &p_fileLockInfo)
		*����: ��ȡ�����ļ������Ϣ
		*����: 
		*	p_fileLockInfo: �����ļ���Ϣ
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/11
		*/
		int getLockFileBynameResult(LockFileInfo &p_fileLockInfo);

		/*
		*����: int setLockFileByTime(const string p_FileName, const string p_LockTime, int p_CamId)
		*����: ����ָ���ļ�������������������ʱ��
		*����: 
		*	p_FileName: �����ļ����ļ���
		*   p_LockTime: ����ʱ��
		*   p_CamId: cameraѡ��,0��ǰ·��1�Ǻ�·
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int setLockFileByName(const std::string p_FileName, const std::string p_LockTime, int p_CamId=1);


		/*
		*����: int getunLockFileBynameResult(LockFileInfo &p_fileLockInfo)
		*����: ��ȡ�������ļ������Ϣ
		*����: 
		*	p_fileLockInfo: �����ļ���Ϣ
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/11
		*/
		int getunLockFileBynameResult(LockFileInfo &p_fileLockInfo);

		/*
		*����: int  setUnLockFileByName(const string p_FileName, int p_CamId)
		*����: ָ���ļ�����
		*����: 
		*	p_FileName: �����ļ����ļ���
		*   p_CamId: cameraѡ��,0��ǰ·��1�Ǻ�·
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int setUnLockFileByName(const std::string p_FileName, int p_CamId);

		/*
		*����: int setRecordAudio(const string p_FileName, int p_RecTime)
		*����: ���õ���¼��
		*����: 
		*	p_FileName: ¼���ļ��� ����
		*   p_RecTime:  ¼��ʱ��
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int setRecordAudio(const std::string p_FileName, int p_RecTime);

		/*
		*����: int getRecordAudioResult(FilePushInfo &p_fileInfo)
		*����: ��ȡ��������Ƶ�ļ����
		*����:
		*	p_fileInfo ��Ƶ�ļ���� ���
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int getRecordAudioResult(FilePushInfo &p_fileInfo);

		/*
		*����: int formatSdCard()
		*����: ��ʽ��SD��
		*����: ��
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/11
		*/
		int formatSdCard();

		/*
		*����: int setDrivingData()
		*����: ���ô����г����ݴ��
		*����:
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/6/27
		*/
		int setDrivingData(const TrafficDataMsg *log);

		/*
		*����: int getDrivingDataResult(FilePushInfo &p_fileInfo)
		*����: ��ȡ��Ҫ�ϴ����г�����
		*����:
		*	p_fileInfo �г������ļ� ���
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int getDrivingDataResult(FilePushInfo &p_fileInfo);


		/*
		*����: int getBasicHWinfo(RemoteBasicHWinfo *p_HWinfo)
		*����: ��ȡ�����ĳ�����Ϣ
		*����:
		*	p_HWinfo ������Ϣ�ṹ�� ���
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int getBasicHWinfo(RemoteBasicHWinfo *p_HWinfo);

		/*
		*����: int getFileKey(const string p_FileName, string &p_key)
		*����: ��ȡָ���ļ��ļ�����Կ
		*����:
		*	p_FileName: �ļ��� ����
		*   p_key:��Կ ���
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int getFileKey(const std::string p_FileName, std::string &p_key);

		/*
		*����: int pushDevStatusInfo(RemoteDeviceStatusInfo *p_devInfo)
		*����: ����push�豸״̬��Ϣ��DDƽ̨
		*����:
		*	p_devInfo: �豸״̬��Ϣ ���
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int pushDevStatusInfo(RemoteDeviceStatusInfo *p_devInfo);

		/*
		*����: int DevAbnormalInfo(RemoteDeviceAbnormalInfo *p_devInfo)
		*����: ����push�豸�쳣״̬��Ϣ��DDƽ̨
		*����:
		*	p_devInfo: �ļ��� ����
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/17
		*/
		int DevAbnormalInfo(RemoteDeviceAbnormalInfo *p_devInfo);

		/*
		*����: int removeSlientPic(int p_CamId)
		*����: ɾ����Ĭ�����ͼƬ
		*����: 
		*   p_CamId:  ����ͷID 0:ǰ�� 1:����
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/25
		*/
		int removeSlientPic(int p_CamId=1);

		/*
		*����: int removeSlientRecordFile(int p_CamId)
		*����: ɾ����Ĭ�������Ƶ
		*����: 
		*   p_CamId:  ����ͷID 0:ǰ�� 1:����
		*����ֵ:
		*	0:�ɹ�
		*	1:ʧ��
		*�޸�: ����2018/5/25
		*/
		int removeSlientRecordFile(int p_CamId=1);

		/*
		*����: int setFileList(std::string p_startTime="", std::string p_stopTime="")
		*����: ��������ļ��б��������ɷ��ʹ�����֪ͨ��Ȼ���ٵ���getFileList��ȡ������ļ���Ϣ
		*����: 
		*	p_startTime:��ʼʱ��
		*   p_stopTime:����ʱ��
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/7
		*/
		int setFileList(std::string p_startTime="0", std::string p_stopTime="0");

		/*
		*����: int getFileList(FilePushInfo &p_fileInfoVec)
		*����: ��ȡ�ļ��б�
		*����:
		*   p_fileInfoVec:  �ļ��б���Ϣ
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/7
		*/
		int getFileList(FilePushInfo &p_fileInfoVec);

        bool is_base64(unsigned char c);
		/*
		*����: std::string base64_decode(std::string const& encoded_string)
		*����: base64 decode
		*����: 
		*   encoded_string: the decode string
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/8/3
		*/
        std::string base64_decode(std::string const& encoded_string);

		/*
		*����: int setUserInfo(std::string p_UserName, std::string p_Password)
		*����: ���ð󶨵��û���������
		*����: 
		*   p_UserName:  �û���
		*   p_Password:  ����
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/7
		*/
		int setUserInfo(std::string p_UserName, std::string p_Password);
		
		/*
		*����: int getUserInfo(std::string &p_UserName, std::string p_Password)
		*����: ��ȡ�󶨵��û���������
		*����: 
		*   p_UserName:  �û���
		*   p_Password:  ����
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/7
		*/
		int getUserInfo(std::string &p_UserName, std::string &p_Password);

		/*
		*����: int setProductInfo(std::string p_item, std::string p_val)
		*����: ����������Ϣ
		*����: 
		*   p_item:  ����
		*   p_val:  ֵ
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/27
		*/
		int setProductInfo(std::string p_item, std::string p_val);
		int setProductInfo(std::string p_item, std::string p_val, int iSave);
		int saveProductInfo();

		/*
		*����: int getProductInfo(std::string p_item, std::string &p_val)
		*����: ��ȡ������Ϣֵ
		*����: 
		*   p_item:  ����
		*   p_val:  ֵ
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/27
		*/
		int getProductInfo(std::string p_item, std::string &p_val);
		int getProductInfofromflash(std::string p_item, std::string &p_val);

		/*
		*����: int clearProductInfo()
		*����: ���flash
		*����: 
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/27
		*/

		int getFactoryInfo(std::string p_item, std::string &p_val);

		
		int clearProductInfo();

		/*
		*����: int removeFile(const std::string p_FileName)
		*����: �����ݿ���ɾ��ָ���ļ�
		*����: 
		*   p_FileName:  ָ���ļ���
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/19
		*/
		int removeFile(const std::string p_FileName);

		/*
		*����: setRecordFileName(const std::string p_FileName)
		*����: �����ļ�������
		*����: 
		*   p_FileName:  ָ���ļ���
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/22
		*/
        int setRecordFileName(const std::string p_FileName);

		/*
		*����: int getLockFileList(std::vector<LockFileInfo> &p_lockfileList, int p_CamId=1)
		*����: ���洢�ռ䲻��ʱ��ͨ���˽ӿڣ���ȡ����ɾ���������ļ��б�
		*����: 
		*   p_lockfileList:�����ļ��б�
		*   p_CamId: ��Ҫ����������ͷID�� 0:ǰ�� 1:����
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/27
		*/
		int getLockFileList(std::vector<LockFileInfo> &p_lockfileList, int p_CamId=1);
		/*
		*����: int setBindFlagInfo(std::string p_BindFlag)
		*����: ���ð󶨱���
		*����: 
		*   p_BindFlag:�󶨱�־
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/27
		*/
		int setBindFlagInfo(std::string p_BindFlag);
		/*
		*����: int getBindFlagInfo(std::string &p_BindFlag)
		*����: ���ð󶨱���
		*����: 
		*   p_BindFlag:�󶨱�־
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/6/27
		*/

		int getBindFlagInfo(std::string &p_BindFlag);

		int notifyMessage(EventReportMsg event);

		/*
		*����: int getFileList(std::vector<FilePushInfo> &p_fileInfoVec, std::string p_orderId)
		*����: ���ݶ����ţ���ȡ�ļ��б�
		*����: 
		*   p_fileInfoVec:  �ļ��б���Ϣ
		*   p_orderId: ������
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/7/13
		*/
		int getFileListByRollOrder(std::vector<FilePushInfo> &p_fileInfoVec, std::string p_orderId);

		/*
		*����: int setQueryRollOrderId(std::string p_OrderId)
		*����: ������Ҫ��ѯ�Ķ����ţ���ѯ���ͨ���첽���ͣ����ͨ��getFileListByRollOrder��ȡ
		*����: 
		*	p_OrderId:	������
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/7/13
		*/
		int setQueryRollOrderId(std::string p_OrderId);
		//Զ�̻��Ѻ�ָ̨��ִ��������ñ�־
		int SetRemoteActionDone(int value);

		/*
		*����: int getDeleteFileList(std::vector<FilePushInfo> &p_fileInfoVec, int p_CamId)
		*����: ��ȡ����ɾ�����ļ��б�
		*����: 
		*	p_fileInfoVec:	ɾ�����ļ��б�
		*   p_CamId: ��Ҫ����������ͷID�� 0:ǰ�� 1:����
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/8/14
		*/
		int getDeleteFileList(std::vector<LockFileInfo> &p_fileInfoVec, int p_CamId);

        /*
         * Function name    : SaveUpgradeInfo
         * Description      : save upgrade info to secure flash second part
         * Argument         : info : the json string to save
         */
        int SaveUpgradeInfo(std::string info);

        /*
         * Function name    : LoadUpgradeInfo
         * Description      : load upgrade info from secure flash second part
         * Argument         : info : the json string to load
         */
        int LoadUpgradeInfo(std::string &info);

	private:

		/*
		*����: int getCameraResolution(int p_CamId, std::string &p_Resolution)
		*����: ��ȡ�ֱ���
		*����:
		*	p_CamId:	camdId
		*   p_Resolution: �ֱ���
		*����ֵ:
		*	0:�ɹ�
		*	-1:ʧ��
		*�޸�: ����2018/8/1
		*/
		int getCameraResolution(int p_CamId, std::string &p_Resolution);

};

#endif
