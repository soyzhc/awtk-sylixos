/*********************************************************************************************************
**
**                                    �й�������Դ��֯
**
**                                   Ƕ��ʽʵʱ����ϵͳ
**
**                                       SylixOS(TM)
**
**                               Copyright  All Rights Reserved
**
**--------------�ļ���Ϣ--------------------------------------------------------------------------------
**
** ��   ��   ��: mipsCacheR4k.h
**
** ��   ��   ��: Jiao.JinXing (������)
**
** �ļ���������: 2015 �� 12 �� 01 ��
**
** ��        ��: MIPS R4K ��ϵ���� CACHE ����.
*********************************************************************************************************/

#ifndef __ARCH_MIPSCACHER4K_H
#define __ARCH_MIPSCACHER4K_H

VOID  mipsCacheR4kInit(LW_CACHE_OP *pcacheop,
                       CACHE_MODE   uiInstruction,
                       CACHE_MODE   uiData,
                       CPCHAR       pcMachineName);
VOID  mipsCacheR4kReset(CPCHAR  pcMachineName);

#endif                                                                  /*  __ARCH_MIPSCACHER4K_H       */
/*********************************************************************************************************
  END
*********************************************************************************************************/