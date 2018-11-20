#include <stdio.h>
int add_point(int[]);

int main()
{
    int all_point;
    int point[3] = { 10 , 20 , 50};
    all_point = add_point(point);
    printf("現在のポイントは%dポイントです\n",all_point);
    return 0;
}
int add_point(int p[])
{
    int i,sum=0;
    for(i=0;i<3;i++){
        sum += p[i];
    }
    return sum;
}