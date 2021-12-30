#include "remote.h"
#include "delay.h"

TIM_HandleTypeDef TIM5_Handler;      //定时器5句柄

//遥控器接收状态
//[7]:收到了引导码标志
//[6]:得到了一个按键的所有信息
//[5]:保留
//[4]:标记上升沿是否已经被捕获
//[3:0]:溢出计时器
u8 	RmtSta=0;
u16 Dval;		//下降沿时计数器的值
u32 RmtRec=0;	//红外接收到的数据
u8  RmtCnt=0;	//按键按下的次数
