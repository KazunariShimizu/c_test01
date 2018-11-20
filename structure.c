#include <stdio.h>
int main()
{
    typedef struct{
        char subject[10];
        int  score;
        char result;
    }TEST;
    TEST kamoku,*p;
    p=&kamoku;
    /*メンバの代入例*/
    strcpy(p->subject,"English");
    p->score = 85;
    p->result = 'A';
    /*出力例*/
    printf("科目名：%s",p->subject);
    printf("点数：%d 評価：%c\n",p->score,p->result);
    return 0;
}