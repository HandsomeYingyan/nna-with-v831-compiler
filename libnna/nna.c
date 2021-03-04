/* This file has been generated by the Hex-Rays decompiler.
   Copyright (c) 2007-2017 Hex-Rays <info@hex-rays.com>

   Detected compiler: GNU C++
*/

#include <defs.h>


//-------------------------------------------------------------------------
// Function declarations

int nna_get_nna_status(void);
int nna_get_rom_status(void);
int nna_clean_interrupt();
int __fastcall nna_clean_producer(unsigned int a1);
int __fastcall nna_conv_set_producer(int a1, int a2);
int nna_conv_get_producer(void);
int __fastcall nna_conv_enable(int a1, int a2);
int __fastcall nna_sdp_set_producer(int a1, int a2);
int nna_sdp_get_producer(void);
int __fastcall nna_sdp_enable(int a1, int a2);
int __fastcall nna_pdp_set_producer(int a1, int a2);
int __fastcall nna_pdp_enable(unsigned int a1, int a2);
int __fastcall nna_cdp_set_producer(int a1, int a2);
int nna_cdp_get_producer();
int __fastcall nna_cdp_enable(int a1, int a2);
int nna_dump_pointer(void);
int nna_dump_status(void);
int __fastcall nna_rom_wait_done(int a1, int a2);
int __fastcall nna_wait_done(int a1, int a2);
signed int __fastcall nna_wait_event_done(int a1, int a2, int a3);
int __fastcall nna_hd_tail(unsigned int a1, unsigned int a2, unsigned int a3);
int __fastcall nna_ypr(unsigned int a1, unsigned int a2, int a3);
int __fastcall nna_hd_mini(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, int a6);
int __fastcall nna_init(unsigned int a1);
int nna_close();
int __fastcall nna_test_reg(int result);
int __fastcall nna_bdmacpy(unsigned int a1, unsigned int a2, int a3);
int __fastcall nna_nms(unsigned int a1, unsigned int a2, int a3, int a4, int a5);
signed int nna_get_lib_version(void);
signed int nna_get_hw_version(void);
int __fastcall nna_mean_cfg(int a1, int a2, int a3, int a4);
int __fastcall nna_fd1(unsigned int a1, unsigned int a2, int a3, int a4);
int __fastcall nna_fd2(unsigned int a1, unsigned int a2, int a3);
int __fastcall nna_fd3(unsigned int a1, unsigned int a2, int a3);
int __fastcall nna_lsc_layer_run(unsigned int a1, unsigned int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int __fastcall nna_hd_ab(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4);
int __fastcall nna_hd(unsigned int a1, unsigned int a2);
int __fastcall nna_hd_wh(unsigned int a1, unsigned int a2, int a3, int a4);
int __fastcall nna_setup_reset_handler(int result);
int __fastcall nna_setup_resize_handler(int result);
int __fastcall nna_setup_wait_event_handler(int result);
int nna_resize();
int __fastcall nna_reset(int a1, int a2);
int __fastcall nna_hd_ddr_rom(unsigned int a1, unsigned int a2);
int __fastcall nna_fd1_big(unsigned int a1, unsigned int a2, int a3);
// _DWORD __cdecl xregr(unsigned int); idb
// _DWORD __cdecl xregw(unsigned int, unsigned int); idb
// int printf(const char *format, ...);
// int usleep(__useconds_t useconds);
// _DWORD __cdecl nna_swish_cfg(int); idb
// _DWORD __cdecl nna_fd_set_minface(int); idb
// _DWORD __cdecl nna_fd_set_factor(int); idb
// _DWORD __cdecl nna_fd_set_threshold(int *, int *); idb
// _DWORD __cdecl nna_fd_set_runonly(int); idb
// _DWORD __cdecl nna_fd_set_ceil_width(int); idb
// _DWORD __cdecl nna_hd_set_size(int, int); idb
// _DWORD __cdecl nna_hd_set_threshold(int, int); idb
// _DWORD __cdecl xreg_open(unsigned int); idb
// _DWORD xreg_close(void); idb
// _DWORD __cdecl xreg_wait(unsigned int, unsigned int, unsigned int); idb
// int __fastcall nna_conv_act(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// int __fastcall nna_conv_act_eltwise(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak
// int __fastcall nna_conv_act_pool(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD); weak

//-------------------------------------------------------------------------
// Data declarations

int event_mask; // weak
int event_timeout_us; // weak
int event_value; // weak
int nna_reset_handler; // weak
int nna_resize_handler; // weak
int nna_wait_event_handler; // weak
_DWORD wt_bs_ew[63] =
{
  11634,
  3264,
  0,
  0,
  0,
  1,
  9,
  128,
  0,
  25,
  192,
  0,
  97,
  256,
  0,
  113,
  384,
  1,
  545,
  576,
  0,
  581,
  672,
  0,
  743,
  768,
  0,
  779,
  960,
  1,
  1643,
  1216,
  0,
  1707,
  1344,
  0,
  1995,
  1472,
  0,
  2059,
  1728,
  1,
  3787,
  2112,
  0,
  3931,
  2304,
  0,
  4579,
  2496,
  0,
  4723,
  2880,
  0,
  5107,
  3392,
  0,
  9715,
  3904,
  0,
  9759,
  3920,
  0
}; // idb


//----- (00000004) --------------------------------------------------------
int nna_get_nna_status(void)
{
  return xregr(0x100Cu);
}

//----- (00000018) --------------------------------------------------------
int nna_get_rom_status(void)
{
  return xregr(0x1010u);
}

//----- (0000002C) --------------------------------------------------------
int nna_clean_interrupt()
{
  return xregw(0x100Cu, 0xFFFFFFFF);
}

//----- (00000044) --------------------------------------------------------
int __fastcall nna_clean_producer(unsigned int a1)
{
  unsigned int v1; // r4
  unsigned int v2; // r1

  v1 = a1;
  v2 = xregr(a1) >> 16;
  return xregw(v1, v2);
}

//----- (0000006C) --------------------------------------------------------
int __fastcall nna_conv_set_producer(int a1, int a2)
{
  nna_clean_producer(0x7004u);
  nna_clean_producer(0x5004u);
  nna_clean_producer(0x6004u);
  nna_clean_producer(0x4004u);
  return nna_clean_producer(0x3004u);
}

//----- (000000A8) --------------------------------------------------------
int nna_conv_get_producer(void)
{
  return (unsigned __int16)xregr(0x4004u);
}

//----- (000000C8) --------------------------------------------------------
int __fastcall nna_conv_enable(int a1, int a2)
{
  int v2; // r4

  v2 = a1;
  while ( !xregr(0x300Cu) )
    ;
  if ( v2 == 1 )
    xregw(0x30D4u, 1u);
  xregw(0x7008u, 1u);
  xregw(0x5008u, 1u);
  xregw(0x6008u, 1u);
  xregw(0x4008u, 1u);
  return xregw(0x3010u, 1u);
}

//----- (00000140) --------------------------------------------------------
int __fastcall nna_sdp_set_producer(int a1, int a2)
{
  nna_clean_producer(0x9004u);
  return nna_clean_producer(0x8004u);
}

//----- (00000164) --------------------------------------------------------
int nna_sdp_get_producer(void)
{
  return (unsigned __int16)xregr(0x9004u);
}

//----- (00000184) --------------------------------------------------------
int __fastcall nna_sdp_enable(int a1, int a2)
{
  int v2; // r4

  v2 = a2;
  if ( a1 == 1 )
    xregw(0x90DCu, 0xFu);
  if ( v2 )
    xregw(0x8008u, 1u);
  return xregw(0x9038u, 1u);
}

//----- (000001D0) --------------------------------------------------------
int __fastcall nna_pdp_set_producer(int a1, int a2)
{
  nna_clean_producer(0xB004u);
  return nna_clean_producer(0xA004u);
}

//----- (000001F4) --------------------------------------------------------
int __fastcall nna_pdp_enable(unsigned int a1, int a2)
{
  int v2; // r4

  v2 = a2;
  if ( a1 == 1 )
    xregw(0xB094u, 1u);
  if ( v2 )
    xregw(0xA008u, 1u);
  return xregw(0xB008u, 1u);
}

//----- (00000240) --------------------------------------------------------
int __fastcall nna_cdp_set_producer(int a1, int a2)
{
  nna_clean_producer(0xD004u);
  return nna_clean_producer(0xC004u);
}

//----- (00000264) --------------------------------------------------------
int nna_cdp_get_producer()
{
  return (unsigned __int16)xregr(0xB004u);
}

//----- (00000294) --------------------------------------------------------
int __fastcall nna_cdp_enable(int a1, int a2)
{
  if ( a1 == 1 )
    xregw(0xD09Cu, 3u);
  xregw(0xC008u, 1u);
  return xregw(0xD048u, 1u);
}

//----- (000002D4) --------------------------------------------------------
int nna_dump_pointer(void)
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  int v3; // r7
  int v4; // r8
  int v5; // r9
  int v6; // r10
  int v7; // r11
  int v8; // r0

  v0 = xregr(0x7004u);
  v1 = xregr(0x5004u);
  v2 = xregr(0x6004u);
  v3 = xregr(0x4004u);
  v4 = xregr(0x3004u);
  v5 = xregr(0x9004u);
  v6 = xregr(0x8004u);
  v7 = xregr(0xB004u);
  v8 = xregr(0xA004u);
  return printf(
           "\n"
           "# nna_dump_pointer\n"
           " NNA_CACC_S_POINTER_0     :%08X\n"
           " NNA_CMAC_A_S_POINTER_0   :%08X\n"
           " NNA_CMAC_B_S_POINTER_0   :%08X\n"
           " NNA_CSC_S_POINTER_0      :%08X\n"
           " NNA_CDMA_S_POINTER_0     :%08X\n"
           " NNA_SDP_S_POINTER_0      :%08X\n"
           " NNA_SDP_RDMA_S_POINTER_0 :%08X\n"
           " NNA_PDP_S_POINTER_0      :%08X\n"
           " NNA_PDP_RDMA_S_POINTER_0 :%08X",
           v0,
           v1,
           v2,
           v3,
           v4,
           v5,
           v6,
           v7,
           v8);
}

//----- (00000380) --------------------------------------------------------
int nna_dump_status(void)
{
  int v0; // r4
  int v1; // r5
  int v2; // r6
  int v3; // r7
  int v4; // r8
  int v5; // r9
  int v6; // r10
  int v7; // r11
  int v8; // r0

  v0 = xregr(0x100Cu);
  v1 = xregr(0x4000u);
  v2 = xregr(0x5000u);
  v3 = xregr(0x6000u);
  v4 = xregr(0x7000u);
  v5 = xregr(0x9000u);
  v6 = xregr(0x8000u);
  v7 = xregr(0xB000u);
  v8 = xregr(0xA000u);
  return printf(
           "\n"
           "# nna_dump_status\n"
           " NNA_GLB_S_INTR_STATUS_0 :%08X\n"
           " NNA_CSC_S_STATUS_0      :%08X\n"
           " NNA_CMAC_A_S_STATUS_0   :%08X\n"
           " NNA_CMAC_B_S_STATUS_0   :%08X\n"
           " NNA_CACC_S_STATUS_0     :%08X\n"
           " NNA_SDP_D_STATUS_0      :%08X\n"
           " NNA_SDP_RDMA_S_STATUS_0 :%08X\n"
           " NNA_PDP_S_STATUS_0      :%08X\n"
           " NNA_PDP_RDMA_S_STATUS_0 :%08X",
           v0,
           v1,
           v2,
           v3,
           v4,
           v5,
           v6,
           v7,
           v8);
}

//----- (0000042C) --------------------------------------------------------
int __fastcall nna_rom_wait_done(int a1, int a2)
{
  int v2; // r7
  int v3; // r5
  int v4; // r0
  int v5; // r4
  int result; // r0
  int v7; // r6
  int v8; // [sp+4h] [bp-1Ch]

  v8 = a2;
  v2 = a1;
  v3 = a2;
  event_mask = a1;
  event_value = a2;
  event_timeout_us = 200000;
  v4 = xregw(0x1004u, 0);
  v5 = nna_wait_event_handler;
  if ( nna_wait_event_handler )
  {
    ((void (__fastcall *)(int))nna_wait_event_handler)(v4);
    nna_clean_interrupt();
    result = 0;
  }
  else
  {
    while ( 1 )
    {
      ++v5;
      result = xregr(0x1010u);
      v7 = result;
      if ( (v2 & result) == v3 )
        break;
      usleep(0x14u);
      if ( v5 == 899 )
      {
        printf("\n# NNA ROM wait timeout status:%08X expect:%08X loop:%d us:%d", v7, v3, 899, 17980, v8);
        nna_dump_status();
        return nna_dump_pointer();
      }
    }
  }
  return result;
}
// 199C: using guessed type int event_mask;
// 19A0: using guessed type int event_timeout_us;
// 19A4: using guessed type int event_value;
// 19B0: using guessed type int nna_wait_event_handler;

//----- (00000520) --------------------------------------------------------
int __fastcall nna_wait_done(int a1, int a2)
{
  int v2; // r5
  int v3; // r6
  int v4; // r0
  int v5; // r4
  int result; // r0
  int v7; // r7

  v2 = a1;
  v3 = a2;
  event_mask = a1;
  event_value = a2;
  event_timeout_us = 400000;
  v4 = xregw(0x1004u, 0);
  v5 = nna_wait_event_handler;
  if ( nna_wait_event_handler )
  {
    ((void (__fastcall *)(int))nna_wait_event_handler)(v4);
    nna_clean_interrupt();
    result = 0;
  }
  else
  {
    xregr(0x100Cu);
    while ( 1 )
    {
      ++v5;
      v7 = xregr(0x100Cu);
      if ( (v2 & v7) == v3 )
        break;
      usleep(0x28u);
      if ( v5 == 899 )
      {
        printf("\n# NNA wait timeout status:%08X mask:%08X loop:%d us:%d", v7, v2, v3, 899, 35960);
        break;
      }
    }
    result = xregw(0x100Cu, 0xFFFFFFFF);
  }
  return result;
}
// 199C: using guessed type int event_mask;
// 19A0: using guessed type int event_timeout_us;
// 19A4: using guessed type int event_value;
// 19B0: using guessed type int nna_wait_event_handler;

//----- (00000624) --------------------------------------------------------
signed int __fastcall nna_wait_event_done(int a1, int a2, int a3)
{
  int v3; // r7
  unsigned int v4; // r6
  int v5; // r4
  int v6; // r9
  int v8; // [sp+4h] [bp-24h]
  int v9; // [sp+8h] [bp-20h]

  v8 = a2;
  v9 = a3;
  v4 = 4112;
  v5 = 0;
  if ( event_mask != -1 )
    v4 = 4108;
  v6 = event_timeout_us / 20 - 1;
  while ( 1 )
  {
    if ( v5 == v6 )
    {
      printf(
        "\n# NNA ROM wait timeout status:%08X event_value:%08X loop:%d us:%d",
        v3,
        event_value,
        v5,
        20 * v5,
        v8,
        v9);
      return -1;
    }
    ++v5;
    v3 = xregr(v4);
    if ( (event_mask & v3) == event_value )
      break;
    usleep(0x14u);
  }
  return 0;
}
// 199C: using guessed type int event_mask;
// 19A0: using guessed type int event_timeout_us;
// 19A4: using guessed type int event_value;

//----- (00000710) --------------------------------------------------------
int __fastcall nna_hd_tail(unsigned int a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r5
  unsigned int v5; // r6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  xregw(0x1004u, 0xFFFFFFFC);
  xregw(0x100Cu, 0xFFFFFFFF);
  xregw(0x1014u, 0x30000u);
  xregw(0x1018u, 0xE0003u);
  xregw(0x101Cu, v5);
  xregw(0x1020u, v4);
  xregw(0x1024u, v3);
  xregw(0x1030u, 0x280048u);
  xregw(0x1034u, 0x64u);
  xregw(0x1038u, 0x221u);
  xregw(0x103Cu, 0x240u);
  xregw(0x1040u, 0);
  xregw(0x1010u, 1u);
  xregw(0xD048u, 0);
  xregw(0xC008u, 0);
  xregw(0xB008u, 0);
  xregw(0xA008u, 0);
  xregw(0x9038u, 0);
  xregw(0x8008u, 0);
  xregw(0x7008u, 0);
  xregw(0x5008u, 0);
  xregw(0x6008u, 0);
  xregw(0x4008u, 0);
  xregw(0x3010u, 0);
  return nna_rom_wait_done(-1, 0);
}

//----- (00000864) --------------------------------------------------------
int __fastcall nna_ypr(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r6
  int v5; // r5
  unsigned int v6; // r1
  unsigned int v7; // r4

  v3 = a1;
  v4 = a2;
  v5 = a3;
  xregw(0x1004u, 0xFFFFFFFC);
  xregw(0x100Cu, 0xFFFFFFFF);
  nna_swish_cfg(25);
  xregw(0xB004u, 0);
  xregw(0xB038u, 0x5555u);
  xregw(0xB03Cu, 0x5555u);
  xregw(0xB004u, 1u);
  xregw(0xB038u, 0x5555u);
  xregw(0xB03Cu, 0x5555u);
  xregw(0x1018u, 4u);
  xregw(0x1020u, v4);
  v6 = v3;
  v7 = v3 + (v5 << 8);
  xregw(0x1024u, v6);
  xregw(0x101Cu, v7);
  xregw(0x102Cu, v7 + 4096);
  xregw(0x1014u, v5 - 1);
  xregw(0x1028u, 0x640u);
  xregw(0x1010u, 1u);
  return nna_rom_wait_done(-1, 0);
}

//----- (0000095C) --------------------------------------------------------
int __fastcall nna_hd_mini(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  unsigned int v6; // r6

  v6 = a1;
  xregw(0x1020u, a2);
  xregw(0x1024u, v6);
  xregw(0x1048u, a6 | 0xA0000);
  xregw(0x104Cu, a5);
  xregw(0x1010u, 1u);
  nna_rom_wait_done(-1, 0);
  return xregr(0x1050u);
}

//----- (000009C8) --------------------------------------------------------
int __fastcall nna_init(unsigned int a1)
{
  unsigned int v1; // r6
  int v3; // [sp+0h] [bp-28h]
  int v4; // [sp+4h] [bp-24h]
  int v5; // [sp+8h] [bp-20h]
  int v6; // [sp+Ch] [bp-1Ch]
  int v7; // [sp+10h] [bp-18h]
  int v8; // [sp+14h] [bp-14h]

  v1 = a1;
  v3 = 90;
  v4 = 70;
  v5 = 70;
  v6 = 50;
  v7 = 70;
  v8 = 70;
  nna_fd_set_minface(96);
  nna_fd_set_factor(79);
  nna_fd_set_threshold(&v3, &v6);
  nna_fd_set_runonly(-1);
  nna_fd_set_ceil_width(1);
  nna_hd_set_size(288, 160);
  nna_hd_set_threshold(70, 10);
  xreg_open(v1);
  return 0;
}

//----- (00000A5C) --------------------------------------------------------
int nna_close()
{
  xreg_close();
  return 0;
}

//----- (00000A78) --------------------------------------------------------
int __fastcall nna_test_reg(int result)
{
  int v1; // r4

  v1 = result;
  while ( v1 )
  {
    --v1;
    result = xregw(0x3030u, 0);
  }
  return result;
}

//----- (00000AA8) --------------------------------------------------------
int __fastcall nna_bdmacpy(unsigned int a1, unsigned int a2, int a3)
{
  int v3; // r4
  unsigned int v4; // r5
  unsigned int v5; // r6
  int v6; // r1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  printf("\n# +++nna_bdmacpy %x<--%x  size:%d", a1, a2, a3);
  xregw(0x10000u, v5);
  xregw(0x10008u, v4);
  v6 = v3 + 7;
  if ( v3 >= 0 )
    v6 = v3;
  xregw(0x10010u, (v6 >> 3) - 1);
  xregw(0x10014u, 3u);
  xregw(0x10030u, 1u);
  xregw(0x10034u, 1u);
  xreg_wait(0x100Cu, 0x40u, 0x40u);
  xregw(0x100Cu, 0xFFFFFFFF);
  return printf("\n# ---nna_bdmacpy %x<--%x  size:%d", v4, v5, v3);
}

//----- (00000B88) --------------------------------------------------------
int __fastcall nna_nms(unsigned int a1, unsigned int a2, int a3, int a4, int a5)
{
  int v5; // r4
  unsigned int v6; // r10
  unsigned int v7; // r5
  int v8; // r11
  int v9; // r1
  int v10; // r4
  int v11; // r1

  v5 = a3;
  v6 = a1;
  v7 = a2;
  v8 = a4;
  xreg_wait(0x300Cu, 1u, 1u);
  xregw(0x10000u, v7);
  xregw(0x10008u, 0);
  v9 = v5 + 31;
  if ( v5 + 31 < 0 )
    v9 = v5 + 62;
  xregw(0x10010u, (v9 & 0xFFFFFFE0) - 1);
  xregw(0x10014u, 1u);
  xregw(0x10030u, 1u);
  xregw(0x10034u, 1u);
  xreg_wait(0x100Cu, 0x40u, 0x40u);
  xregw(0x100Cu, 0xFFFFFFFF);
  xregw(0x1044u, v8);
  xregw(0x1048u, a5 | 0x640000);
  xregw(0x104Cu, v5);
  xregw(0x1040u, 1u);
  xreg_wait(0x1040u, 1u, 0);
  v10 = xregr(0x1050u);
  xregw(0x10000u, 0);
  xregw(0x10008u, v6);
  v11 = v10 + 31;
  if ( v10 + 31 < 0 )
    v11 = v10 + 62;
  xregw(0x10010u, (v11 & 0xFFFFFFE0) - 1);
  xregw(0x10014u, 2u);
  xregw(0x10030u, 1u);
  xregw(0x10034u, 1u);
  xreg_wait(0x100Cu, 0x40u, 0x40u);
  xregw(0x100Cu, 0xFFFFFFFF);
  return v10;
}

//----- (00000D18) --------------------------------------------------------
signed int nna_get_lib_version(void)
{
  return 65539;
}

//----- (00000D30) --------------------------------------------------------
signed int nna_get_hw_version(void)
{
  return -87162867;
}

//----- (00000D48) --------------------------------------------------------
int __fastcall nna_mean_cfg(int a1, int a2, int a3, int a4)
{
  unsigned __int16 v4; // r4
  int v5; // r5

  v4 = a1;
  v5 = a2;
  xregw(0x3098u, 1u);
  xregw(0x309Cu, v4 | (v5 << 16));
  xregw(0x30A4u, 1u);
  return xregw(0x30ACu, 1u);
}

//----- (00000D98) --------------------------------------------------------
int __fastcall nna_fd1(unsigned int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r6
  unsigned int v5; // r7
  int v6; // r4
  int v7; // r5

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  xregw(0x3004u, 0);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x3004u, 1u);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x1004u, 0x3F03E0u);
  xregw(0x100Cu, 0xFFFFFFFF);
  xregw(0x1014u, 0x10000u);
  xregw(0x1018u, 0);
  xregw(0x1020u, v5);
  xregw(0x1024u, v4);
  xregw(0x1028u, 0);
  xregw(0x1030u, v6 | (v7 << 16));
  xregw(0x1010u, 1u);
  return nna_rom_wait_done(-1, 0);
}

//----- (00000E78) --------------------------------------------------------
int __fastcall nna_fd2(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r5
  int v5; // r6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  xregw(0x3004u, 0);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x3004u, 1u);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x1004u, 0x3F03E0u);
  xregw(0x100Cu, 0xFFFFFFFF);
  xregw(0x1014u, v5);
  xregw(0x1018u, 1u);
  xregw(0x1020u, v4);
  xregw(0x1024u, v3);
  xregw(0x1028u, 0x240u);
  xregw(0x1010u, 1u);
  return nna_rom_wait_done(-1, 0);
}

//----- (00000F48) --------------------------------------------------------
int __fastcall nna_fd3(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r4
  unsigned int v4; // r5
  int v5; // r6

  v3 = a1;
  v4 = a2;
  v5 = a3;
  xregw(0x3004u, 0);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x3004u, 1u);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x1004u, 0x3F03E0u);
  xregw(0x100Cu, 0xFFFFFFFF);
  xregw(0x1014u, v5);
  xregw(0x1018u, 2u);
  xregw(0x1020u, v4);
  xregw(0x1024u, v3);
  xregw(0x1028u, 0x900u);
  xregw(0x1010u, 1u);
  return nna_rom_wait_done(-1, 0);
}

//----- (00001018) --------------------------------------------------------
int __fastcall nna_lsc_layer_run(unsigned int a1, unsigned int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r11
  unsigned int v11; // r7
  unsigned int v12; // r8
  unsigned int v13; // r9

  v10 = a4;
  v11 = a1;
  v12 = a2;
  v13 = a3;
  if ( a9 )
  {
    xregw(0x3004u, 0);
    nna_mean_cfg(a10, 0, 0, 0);
    xregw(0x3004u, 1u);
    nna_mean_cfg(a10, 0, 0, 0);
  }
  if ( a5 )
  {
    xregw(0x1014u, 0x30000u);
    xregw(0x1018u, v10 | (wt_bs_ew[3 * a5 + 1] << 16));
    xregw(0x1030u, a7 | (a8 << 16));
    xregw(0x1034u, 20 * (a5 - 1));
    xregw(0x1038u, wt_bs_ew[3 * a5]);
    xregw(0x103Cu, wt_bs_ew[3 * a5 + 1]);
    if ( wt_bs_ew[3 * a5 + 2] )
      xregw(0x101Cu, v13);
  }
  xregw(0x1020u, v12);
  return xregw(0x1024u, v11);
}

//----- (0000115C) --------------------------------------------------------
int __fastcall nna_hd_ab(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r6
  unsigned int v6; // r7
  unsigned int v7; // r4

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  xregw(0x3004u, 0);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x3004u, 1u);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x101Cu, v6);
  xregw(0x1020u, v5);
  xregw(0x1024u, v4);
  xregw(0x1028u, v7);
  xregw(0x1010u, 1u);
  return nna_rom_wait_done(-1, 0);
}

//----- (00001208) --------------------------------------------------------
int __fastcall nna_hd(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r5

  v2 = a1;
  v3 = a2;
  printf("\n#nna_hd: out_addr,in_addr", a1, a2);
  xregw(0x3004u, 0);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x3004u, 1u);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x1004u, 0x3F03E0u);
  xregw(0x100Cu, 0xFFFFFFFF);
  xregw(0x1014u, 0);
  xregw(0x101Cu, v2);
  xregw(0x1018u, 3u);
  xregw(0x1020u, v3);
  xregw(0x1024u, v2);
  xregw(0x1010u, 1u);
  return nna_rom_wait_done(-1, 0);
}

//----- (000012EC) --------------------------------------------------------
int __fastcall nna_hd_wh(unsigned int a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r6
  unsigned __int16 v6; // r4
  int v7; // r7

  v4 = a1;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  xregw(0x3004u, 0);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x3004u, 1u);
  nna_mean_cfg(128, 0, 0, 0);
  xregw(0x1004u, 0x3F03E0u);
  xregw(0x100Cu, 0xFFFFFFFF);
  xregw(0x1014u, 0x10000u);
  xregw(0x1030u, v6 | (v7 << 16));
  xregw(0x101Cu, v4);
  xregw(0x1018u, 3u);
  xregw(0x1020u, v5);
  xregw(0x1024u, v4);
  xregw(0x1010u, 1u);
  return nna_rom_wait_done(-1, 0);
}

//----- (000013D0) --------------------------------------------------------
int __fastcall nna_setup_reset_handler(int result)
{
  nna_reset_handler = result;
  return result;
}
// 19A8: using guessed type int nna_reset_handler;

//----- (000013FC) --------------------------------------------------------
int __fastcall nna_setup_resize_handler(int result)
{
  nna_resize_handler = result;
  return result;
}
// 19AC: using guessed type int nna_resize_handler;

//----- (00001428) --------------------------------------------------------
int __fastcall nna_setup_wait_event_handler(int result)
{
  nna_wait_event_handler = result;
  return result;
}
// 19B0: using guessed type int nna_wait_event_handler;

//----- (00001454) --------------------------------------------------------
int nna_resize()
{
  int result; // r0

  if ( nna_resize_handler )
    result = ((int (*)(void))nna_resize_handler)();
  else
    result = printf("\n# NULL nna_resize");
  return result;
}
// 19AC: using guessed type int nna_resize_handler;

//----- (000014A8) --------------------------------------------------------
int __fastcall nna_reset(int a1, int a2)
{
  int result; // r0

  if ( nna_reset_handler )
    result = ((int (__fastcall *)(int, int, int (*)(void)))nna_reset_handler)(a1, a2, nna_get_rom_status);
  else
    result = printf("\n# NULL nna_reset", a2, nna_get_rom_status);
  return result;
}
// 19A8: using guessed type int nna_reset_handler;

//----- (000014EC) --------------------------------------------------------
int __fastcall nna_hd_ddr_rom(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r7
  unsigned int v3; // r8
  unsigned int v4; // r10
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r1

  v2 = a1;
  v3 = a1 + 0x100000;
  v4 = a2;
  nna_reset(a1, a2);
  v5 = nna_conv_act(v3, v4, 28018, 3264, 20, 0, 1, 128, 288, 160, 1, 32, 3, 1, 2, 1, 2, 2, 1677839);
  nna_reset(v5, v6);
  v7 = nna_conv_act(v2, v3, 28027, 3392, 19, 0, 0, 0, 144, 80, 32, 16, 1, 1, 1, 0, 2, 2, 1677839);
  nna_reset(v7, v8);
  v9 = nna_conv_act(v2 + 0x80000, v2, 28043, 3456, 20, 0, 0, 0, 144, 80, 16, 16, 3, 1, 1, 1, 2, 2, 1677839);
  nna_reset(v9, v10);
  v11 = nna_conv_act_eltwise(
          v2,
          v2 + 0x80000,
          v3,
          28115,
          3520,
          18,
          0,
          0,
          0,
          144,
          80,
          16,
          32,
          1,
          1,
          1,
          0,
          2,
          2,
          1677839,
          1,
          1,
          1);
  nna_reset(v11, v12);
  v13 = nna_conv_act(v3, v2, 28131, 3648, 19, 0, 0, 0, 144, 80, 32, 48, 3, 1, 2, 1, 2, 2, 1677839);
  nna_reset(v13, v14);
  return nna_hd_tail(v2, v3, v3);
}
// 1E94: using guessed type int __fastcall nna_conv_act(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1E98: using guessed type int __fastcall nna_conv_act_eltwise(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

//----- (00001744) --------------------------------------------------------
int __fastcall nna_fd1_big(unsigned int a1, unsigned int a2, int a3)
{
  unsigned int v3; // r7
  int v4; // ST54_4
  unsigned int v5; // r8
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = nna_reset(a1, a2);
  nna_reset(v6, v7);
  v8 = nna_conv_act_pool(v3, v5, 0x4000, 1, 22, 0, 1, 127, 288, 162, 1, 8, 3, 1, 1, 0, 2, 2, 838927, 1, 2, 2, 0);
  nna_reset(v8, v9);
  v10 = nna_conv_act(v3 + 0x80000, v3, 16387, 32, 19, 0, 0, 0, 143, 79, 8, 16, 3, 1, 1, 0, 2, 2, 838927);
  nna_reset(v10, v11);
  v12 = nna_conv_act(v3 + 0x100000, v3 + 0x80000, 16423, 96, 20, 0, 0, 0, 141, 77, 16, 16, 3, 1, 1, 0, 2, 2, 838927);
  nna_reset(v12, v13);
  v14 = nna_conv_act(v3, v3 + 0x100000, 16495, 160, 7, 0, 0, 0, 139, 75, 16, 2, 1, 1, 1, 0, 2, 0, 0);
  nna_reset(v14, v15);
  v16 = nna_conv_act(v4 + v3, v3 + 0x100000, 16496, 192, 4, 0, 0, 0, 139, 75, 16, 4, 1, 1, 1, 0, 2, 0, 0);
  return nna_reset(v16, v17);
}
// 1E94: using guessed type int __fastcall nna_conv_act(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 1E9C: using guessed type int __fastcall nna_conv_act_pool(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD);

// ALL OK, 45 function(s) have been successfully decompiled