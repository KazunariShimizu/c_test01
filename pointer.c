#include<stdio.h>
int main()
{
        int num;
        int *pnum;
        num = 3;
        pnum = &num
        printf("numの値は%dです。\n",num);
        printf("numのアドレスは%pです。\n",&num);
        printf("pnumの値は%pです。\n",pnum);
        printf("*pnumの値は%dです。",*pnum);

        return 0;
        
}