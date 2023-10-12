#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围
int main()
{
	printf("hehe\n");
	int a = 10;
	printf("a = %d\n",a);
	return 0;
}