#include<stdio.h>

int main(void){
	int a = 0,b = 0,i = 1,j = 1;
	a = i++;
	b = ++j;
	
	printf("a=%d,b=%d",a,b);
	return 0;
}

