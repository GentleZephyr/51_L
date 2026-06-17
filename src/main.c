#include<8052.h>
#include<pause.h>
#include<display.h>

void main(void)
{
    int j;
    int temp[]={0,5,9,8,0,5,9,9,0,6,0,0,0,6,0,1};
    int* ptr1=temp;
    int num[sizeof(temp) / sizeof(temp[0])];
    for(j=0;j<sizeof(temp) / sizeof(temp[0]);j++)
    {
        num[j]=temp[sizeof(temp) / sizeof(temp[0])-1-j];
    }
    int* ptr=num;//得到正确的显示数组

    while(1)
    {
        int i=1;
        for (j=1;j<=sizeof(temp) / sizeof(temp[0]);j++)
        {
            int num_1=*ptr;//如果找个记录体i呢，
            int num_2=(i>1)?*(ptr-1):10;
            int num_3=(i>2)?*(ptr-2):10;
            int num_4=(i>3)?*(ptr-3):10;
            //printf("num_1=%d %d %d %d\n",num_1,num_2,num_3,num_4);
            //稳定的延时显示函数（较下面的if更短一点）
            display_short(num_1,num_2,num_3,num_4);
            if (i%4==0)
            {
                display_long(num_1,num_2,num_3,num_4);
                /*printf("停\n");*/
                /*本质上这里还是个延时嘛，而且是停一段时间那种（时间较长）*/
            }
            i++;
            ptr=ptr+1;
        }
        ptr=num;//回到初始位置
        i=1;
    }
}