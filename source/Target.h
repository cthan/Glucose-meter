//___________________________________________________________________
//___________________________________________________________________
//  Copyright : 2015 BY HOLTEK SEMICONDUCTOR INC
//  File Name : Target.h
// Description: Ŀ�˰��O��,��Ҫ��IO
//Targer Board:
//   MCU      : HT45F6x
//   Author   : ChenTing
//   Date     : 2015/06/26
//___________________________________________________________________
//___________________________________________________________________
#ifndef TARGET_H
#define TARGET_H
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ IO @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//                           @--------------PAFS---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name |  PAFS7 | PAFS6  | PAFS5  |   -    |   -    |   -    |   -    |   -    |
// |______________________________________________________________________________
// | POR  |   0    |   0    |   0    |   -    |   -    |   -    |   -    |   -    |
// |_______________________________________________________________________________
// BIT 7  PAFS7:���_PA7�����x��
// 			0:  I/O
//			1:  OP2N(HT45F65) OP2N/INT1(HT4566/HT45F67)
// BIT 6  PAFS6:���_PA6�����x��
// 			0:  I/O
//			1:  OP2O(HT45F65)  VG/INT0(HT4566/HT45F67)
// BIT 5  PAFS5:���_PA5�����x��
// 			0:  I/O
//			1:  OP1N(HT45F65)  δʹ��(HT45F66/HT45F67)
// BIT 4~0  δʹ��:�x�� 0
#define PAFS_Default	0B01000000	//INT0
//                           @--------------PBFS---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name | PBFS7  | PBFS6  | PBFS5  | PBFS4  | PBFS3  | PBFS2  | PBFS1  | PBFS0  |
// |______________________________________________________________________________
// | POR  |   0    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7  PBFS7:���_PB7�����x��
// 			0:  I/O
//			1:  SYSCKO(HT45F65)   ADVRL(HT45F66/HT45F67)
// BIT 6  PBFS6:���_PB6�����x��
// 			0:  I/O
//			1:  AUD(HT45F65)	  ADVRH(HT45F66/HT45F67)
// BIT 5  PBFS5:���_PB5�����x��
// 			0:  I/O
//			1:  ADVRL(HT45F65)	  AN3(HT45F66/HT45F67)
// BIT 4  PBFS4:���_PB4�����x��
// 			0:  I/O
//			1:  ADVRH(HT45F65)	  AN2(HT45F66/HT45F67)
// BIT 3  PBFS3:���_PB3�����x��
// 			0:  I/O
//			1:  AN3(HT45F65)	  AN1(HT45F66/HT45F67)
// BIT 2  PBFS2:���_PB2�����x��
// 			0:  I/O
//			1:  AN2(HT45F65)	  AN0(HT45F66/HT45F67)
// BIT 1  PBFS1:���_PB1�����x��
// 			0:  I/O
//			1:  AN1(HT45F65)	  OP1N(HT45F66/HT45F67)
// BIT 0  PBFS0:���_PB0�����x��
// 			0:  I/O
//			1:  AN0(HT45F65)	  OP2O(HT45F66/HT45F67)
#define PBFS_Default	0B00000000
//                           @--------------PCFS---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name |   -    |   -    |   -    | PCFS4  | PCFS3  | PCFS2  | PCFS1  | PCFS0  |
// |______________________________________________________________________________
// | POR  |   -    |   -    |   -    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7~6  δ���x:�x��0
// BIT 5  PCFS5:���_PC5�����x��
// 			0:  I/O
//			1:  δʹ��(HT45F65)			AUD(HT45F66/HT45F67)
// BIT 4  PCFS4:���_PC4�����x��
// 			0:  I/O
//			1:  VG(HT45F65)				�����x헶�(HT45F66/HT45F67)
// BIT 3  PCFS3:���_PC3�����x��
// 			0:  I/O
//			1:  TX(HT45F65)				�����x헶�(HT45F66/HT45F67)
// BIT 2  PCFS2:���_PC2�����x��
// 			0:  I/O
//			1:  RX(HT45F65)				�����x헶�(HT45F66/HT45F67)
// BIT 1  PCFS1:���_PC1�����x��
// 			0:  I/O
//			1:  SDO1(HT45F65)			�����x헶�(HT45F66/HT45F67)
// BIT 0  PCFS0:���_PC0�����x��
// 			0:  I/O
//			1:  SDI1(HT45F65)			�����x헶�(HT45F66/HT45F67)
#define PCFS_Default 	0B00000000
//                           @--------------PDFS0 for HT45F65---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name |   -    | PDFS4  | PDFS3  | PDFS22 | PDFS21 | PDFS12 | PDFS11 | PDFS0  |
// |______________________________________________________________________________
// | POR  |   -    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7  δ���x,�x�� 0
// 			0:  1.05V
//			1:  1.25V
// BIT 6  PDFS4:���_PD4�����x��
// 			0:  I/O
//			1:  SEG4
// BIT 5  PDFS3:���_PD3�����x��
// 			0:  I/O
//			1:  SEG3
// BIT 4~3  PDFS22~PDFS21:���_PD2�����x��
// 			00:  I/O
//			01:  SEG2
// BIT 2~1  PDFS12~PDFS11:���_PD1�����x��
// 			00:  I/O
//			01:  SEG1
// BIT 0  PDFS00:���_PD0�����x��
// 			0:  I/O
//			1:  SEG0
#define PDFS0_Default 	0B00000000
//                           @--------------PDFS1 for HT45F65---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name |   -    |   -    |   -    | PDFS7  | PDFS62 | PDFS61 | PDFS52 | PDFS51 |
// |______________________________________________________________________________
// | POR  |   -    |   -    |   -    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7~5  δ���x,�x��0
// BIT 4  PDFS7:���_PD7�����x��
// 			0:  I/O
//			1:  SEG7
// BIT 3~2  PDFS62~PDFS61:���_PD6
// 			00:  I/O
//			01:  SEG6
// BIT 1~0  PDFS52~PDFS51:���_PD5
// 			00:  I/O
//			01:  SEG5
#define PDFS1_Default 	0B00000000
//                           @--------------PDFS for HT45F66/HT45F67---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name | PDFS7  | PDFS6  | PDFS5  | PDFS4  | PDFS3  | PDFS2  | PDFS1  | PDFS0  |
// |______________________________________________________________________________
// | POR  |   0    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7  PDFS7:���_PD7
// 			0:  I/O
//			1:  ���⹦��(SEG7/TCK1)
// BIT 6  PDFS6:���_PD6
// 			0:  I/O
//			1:  ���⹦��(SEG6/TP1B_2)
// BIT 5  PDFS5:���_PD5
// 			0:  I/O
//			1:  ���⹦��(SEG5/TP1B_1)
// BIT 4  PDFS4:���_PD4�����x��
// 			0:  I/O
//			1:  ���⹦��(SEG4/TP1B_0)
// BIT 3  PDFS3�����_PD3
// 			0:  I/O
//			1:  ���⹦��(SEG3/TP1A)
// BIT 2  PDFS2:���_PD2
// 			0:  I/O
//			1:  ���⹦��(SEG2/TCK0)
// BIT 1  PDFS1:���_PD1����
// 			0:  I/O
//			1:  ���⹦��(SEG1/TP0_1)
// BIT 0  PDFS0:���_PD0�����x��
// 			0:  I/O
//			1:  ���⹦��(SEG0/TP0_0)
#define PDFS_Default 	0B00000000
//                           @--------------PEFS0 for HT45F65---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name |   -    | PEFS32 | PEFS31 | PEFS2  | PEFS12 | PEFS11 | PEFS02 | PEFS01 |
// |______________________________________________________________________________
// | POR  |   -    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7  δ���x,�x�� 0
// BIT 6~5  PEFS32~PEFS31:���_PE3�����x��
// 			0:  I/O
//			1:  SEG11
//			����ֵ:TP1_0/TP1_1
// BIT 4  PEFS2:���_PE2�����x��
// 			0:  I/O
//			1:  SEG10
// BIT 3~2  PEFS12~PEFS11:���_PE1�����x��
// 			00:  I/O
//			01:  SEG9
//			����ֵ:TP0_0/TP0_1
// BIT 1~0  PEFS02~PEFS01:���_PE0�����x��
// 			00:  I/O
//			01:  SEG8
#define PEFS0_Default 	0B00000000
//                           @--------------PEFS1 for HT45F65---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name |   -    |   -    |   -    | PEFS7  | PEFS6  | PEFS52 | PEFS51 | PEFS4  |
// |______________________________________________________________________________
// | POR  |   -    |   -    |   -    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7~5  δ���x,�x��0
// BIT 4  PEFS7:���_PE7�����x��
// 			0:  I/O
//			1:  SEG15
// BIT 3  PEFS62~PEFS61:���_PE6
// 			00:  I/O
//			01:  SEG14
// BIT 2~1  PEFS52~PEFS51:���_PE5
// 			00:  I/O
//			01:  SEG13
//			����ֵ:TP2_0/TP2_1
// BIT 0  PEFS4:���_PE4�����x��
//			0: I/O
//			1: SEG12
#define PEFS1_Default 	0B00000000
//                           @--------------PEFS for HT45F66/HT45F67---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name | PEFS7  | PEFS6  | PEFS5  | PEFS4  | PEFS3  | PEFS2  | PEFS1  | PEFS0  |
// |______________________________________________________________________________
// | POR  |   0    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7  PEFS7:���_PE7
// 			0:  I/O
//			1:  SEG15
// BIT 6  PEFS6:���_PE6
// 			0:  I/O
//			1:  SEG14
// BIT 5  PEFS5:���_PE5
// 			0:  I/O
//			1:  ���⹦��(SEG13/TCK3)
// BIT 4  PEFS4:���_PE4�����x��
// 			0:  I/O
//			1:  ���⹦��(SEG12/TP3_1)
// BIT 3  PEFS3�����_PE3
// 			0:  I/O
//			1:  ���⹦��(SEG11/TP3_0)
// BIT 2  PEFS2:���_PE2
// 			0:  I/O
//			1:  ���⹦��(SEG10/TCK2)
// BIT 1  PEFS1:���_PE1����
// 			0:  I/O
//			1:  ���⹦��(SEG9/TP2_1)
// BIT 0  PEFS0:���_PE0�����x��
// 			0:  I/O
//			1:  ���⹦��(SEG8/TP2_0)
#define PEFS_Default 	0B00000000
//                           @--------------PFFS for HT45F66/HT45F67---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name | PFFS7  | PFFS6  | PFFS5  | PFFS4  | PFFS3  | PFFS2  | PFFS1  | PFFS0  |
// |______________________________________________________________________________
// | POR  |   0    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7  PFFS7:PF7
// 			0:  I/O
//			1:  SEG23
// BIT 6  PFFS6:PF6
// 			0:  I/O
//			1:  SEG22
// BIT 5  PFFS5��PF5
// 			0:  I/O
//			1:  SEG21
// BIT 4  PFFS4:PF4
// 			0:  I/O
//			1:  SEG20
// BIT 3  PFFS3:PF3
// 			0:  I/O
//			1:  SEG19
// BIT 2  PFFS2:PF2
// 			0:  I/O
//			1:  SEG18
// BIT 1  PFFS1:PF1
// 			0:  I/O
//			1:  SEG17
// BIT 0  PFFS0:PF0
// 			0:  I/O
//			1:  SEG16
#define PFFS_Default	0B00000000
//                           @--------------PGFS for HT45F66/HT45F67---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name |   -    |   -    | PGFS5  | PGFS4  | PGFS3  | PGFS2  | PGFS1  | PGFS0  |
// |______________________________________________________________________________
// | POR  |   0    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7~6  δ���x,�x��0
// BIT 5  PGFS5��PG5
// 			0:  I/O
//			1:  SEG29
// BIT 4  PGFS4:PG4
// 			0:  I/O
//			1:  SEG28
// BIT 3  PGFS3:PG3
// 			0:  I/O
//			1:  SEG27
// BIT 2  PGFS2:PG2
// 			0:  I/O
//			1:  SEG26
// BIT 1  PGFS1:PG1
// 			0:  I/O
//			1:  SEG25
// BIT 0  PGFS0:PG0
// 			0:  I/O
//			1:  SEG24
#define PGFS_Default	0B00000000
//                           @--------------PHFS for HT45F66/HT45F67---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name |   -    |   -    |   -    |   -    |    -   |   -    |   -    | PHFS0  |
// |______________________________________________________________________________
// | POR  |   -    |   -    |   -    |   -    |   -    |   -    |   -    |   0    |
// |_______________________________________________________________________________
// BIT 7~1  δ���x,�x�� 0
// BIT 0  PHFS0:���_PH0
// 			0:  I/O
//			1:  SYSCKO
#define PHFS_Default    0B00000000
//                           @--------------SFS0 for HT45F66/HT45F67---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name | SFS07  | SFS06  | SFS05  | SFS04  | SFS03  | SFS02  | SFS01  | SFS00  |
// |______________________________________________________________________________
// | POR  |   0    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7  SFS07:PD7���⹦���x��
// 			0:  SEG7
//			1:  TCK1(ݔ��)
//          ��PD7�O����ͨI/Oݔ��ģʽ(PDC7=1&PDFS7=0),���h����TM1�Է����յ��e�`�r�Դ
// BIT 6  SFS06:PD6���⹦���x��
// 			0:  SEG6
//			1:  TP1B_2
// BIT 5  SFS05��PD5���⹦���x��
// 			0:  SEG5
//			1:  TP1B_1
// BIT 4  SFS04:PD4���⹦���x��
// 			0:  SEG4
//			1:  TP1B_0
// BIT 3  SFS03:PD3���⹦���x��
// 			0:  SEG3
//			1:  TP1A
// BIT 2  SFS02:PD2���⹦���x��
// 			0:  SEG2
//			1:  TCK0(ݔ��)
//          ��PD2�O����ͨI/Oݔ��ģʽ(PDC2=1&PDFS2=0),���h����TM0�Է����յ��e�`�r�Դ
// BIT 1  SFS01:PD1���⹦���x��
// 			0:  SEG1
//			1:  TP0_1
// BIT 0  SFS00:PD0���⹦���x��
// 			0:  SEG0
//			1:  TP0_0
#define SFS0_Default 0B00000000
//                           @--------------SFS1 for HT45F66/HT45F67---------------@
//  ______________________________________________________________________________
// | Bit  |  Bit7  |  Bit6  |  Bit5  |  Bit4  |  Bit3  |  Bit2  |  Bit1  |  Bit0  |
//  ______________________________________________________________________________
// | Name | SFS17  | SFS16  | SFS15  | SFS14  | SFS13  | SFS12  | SFS11  | SFS10  |
// |______________________________________________________________________________
// | POR  |   0    |   0    |   0    |   0    |   0    |   0    |   0    |   0    |
// |_______________________________________________________________________________
// BIT 7  SFS17:PA7���⹦���x��
// 			0:  OP2N
//			1:  INIT1(PA7��I/O�r,���h����INT1�Է�ֹ�����e�`�ĕr�Դ)
// BIT 6  SFS16:PA6���⹦���x��
// 			0:  VG
//			1:  INT0(PA6��I/O�r,���h����INT0�Է�ֹ�����e�`�ĕr�Դ)
// BIT 5  SFS15:PE5���⹦���x��
// 			0:  SEG13
//			1:  TCK3(ݔ��)
// BIT 4  SFS14:PE4���⹦���x��
// 			0:  SEG12
//			1:  TP3_1
// BIT 3  SFS13:PE3���⹦���x��
// 			0:  SEG11
//			1:  TP3_0
// BIT 2  SFS12:PE2���⹦���x��
// 			0:  SEG10
//			1:  TCK2(ݔ��)
// BIT 1  SFS11:PE1���⹦���x��
// 			0:  SEG9
//			1:  TP2_1
// BIT 0  SEG10:PE0���⹦���x��
// 			0:  SEG8
//			1:  TP2_0
#define SFS1_Default 0B00000000


#endif