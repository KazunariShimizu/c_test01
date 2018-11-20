#include <stdio.h>
int main()
{
    char name[3][10] = {"Ichiro","Jiro","Saburo"};
    int i;
    for(i=0;i<3;i++)
    {
        printf("私の名前は%sです。\n",name[i]);
    }
}