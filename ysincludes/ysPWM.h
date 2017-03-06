/******************************************************************************
| includes
|--------------------------------------------------------------------------------------------*/
#include "DSP2833x_Device.h"     // DSP2833x Headerfile Include File
#include "DSP2833x_Examples.h"   // DSP2833x Examples Include File

/******************************************************************************
| defines
|--------------------------------------------------------------------------------------------*/
#define DABperiod				7143  // 21KHz��Ӧʱ������TBCLK = SYSCLKOUT
#define Flegperiod				21429  // 7KHz��Ӧʱ������TBCLK = SYSCLKOUT
//#define DABperiod				5000  // 3.33KHz��Ӧʱ������TBCLK = SYSCLKOUT
//#define Flegperiod				15000  // 10KHz��Ӧʱ������TBCLK = SYSCLKOUT
#define prediv				0  // Ԥ��Ƶ
#define DeadZone			220   // ����1us

/******************************************************************************
| variables
|--------------------------------------------------------------------------------------------*/
extern Uint16 PhaSft;

/******************************************************************************
| local functions prototypes
|--------------------------------------------------------------------------------------------*/
void InitPWM(void);