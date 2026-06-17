#include<8052.h>
#include<pause.h>

#define SMG_q P1_0	//定义数码管阳级控制脚（千位）
#define SMG_b P1_1	//定义数码管阳级控制脚（百位）
#define SMG_s P1_2	//定义数码管阳级控制脚（十位）
#define SMG_g P1_3	//定义数码管阳级控制脚（个位）
/*unsigned char table[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0xff}; 
unsigned int j;*/

extern unsigned char table[];
extern unsigned int j;


void display_short(int num_1, int num_2, int num_3, int num_4);
void display_long(int num_1, int num_2, int num_3, int num_4);
