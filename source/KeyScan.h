//___________________________________________________________________
//___________________________________________________________________
//  Copyright : 2015 BY HOLTEK SEMICONDUCTOR INC
//  File Name : KeyScan.h
// Description: 按鍵掃描程序
//Targer Board: 
//   MCU      : HT45F6x
//   Author   : ChenTing
//   Date     : 2015/06/30
//   Version  : V00
//   History  :
//___________________________________________________________________
//___________________________________________________________________
#ifndef _KEY_SCAN_H
#define _KEY_SCAN_H

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 共用函數 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
void fun_KeyScan();
void fun_KeyTask();
void fun_KeyInit();
void fun_JackCheck();
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 變量聲明 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
extern volatile __byte_type 	gu8v_FlagKey; 			// 按鍵Bit標誌位
extern volatile unsigned char 	gu8v_KeyRelease;
extern volatile unsigned char 	gu8v_KeyTrigger;
extern volatile unsigned char 	gu8v_KeyPress;
extern volatile unsigned char  	gu8v_KeyShortPress;

#define gbv_KeyPress			gu8v_FlagKey.bits.b1		// 有鍵按下標誌位,進入按鍵Debounce
#define gbv_KeyLongPress		gu8v_FlagKey.bits.b2		// 有鍵按下標誌位,進入按鍵Debounce

//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ 預處理  @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
// 按鍵IO選擇
#define KeyPort  			_pb
#define KeyPortIO			_pbc
#define KeyPortIO_Default   0b00111000 // 取Pb5
// 定義了按鍵未按下時候的狀態
#define KeyNoPush			0b00111000
//對應按鍵按下時候的取反狀態
#define KeyTx				0b00100000  // pb5
#define KEYSCANCYCLE		7.8
#define LOOGPRESS			1000/KEYSCANCYCLE
#define SHORTPRESS			100/KEYSCANCYCLE


#endif



