#include<stdio.h>
int main()
{
    char b[5] = "play";
    printf("b[0]の値は%cです。\n",b[0]);
    printf("b[0]のアドレスは%pです。\n",&b[0]);
    printf("bの値は%pです。\n",b);
    printf("*bの値は%cです。\n",*b);
    printf("b+1の値は%pです。\n",b+1);
    printf("*(b+1)の値は%cです。\n",*(b+1));
    return 0;
}