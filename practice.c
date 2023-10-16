#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//指针
//int main()
//{
//	int a = 10; //a在内存中要分配空间的 -4个字节
//	printf("%p\n", &a);//%p 专门用来打印地址的
//
//	int* pa = &a;//pa是用来存放地址的，在C语言中叫做指针变量
//	//* 说明 pa是指针变量
//	//int 说明pa执行的对象是int类型的
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//指针就是地址
//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;
//
//	*pa = 20;//*解引用操作 |*pa就是通过pa里面的地址，找到a
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//	//指针大小在32位平台是4个字节，64位平台是8个字节
//}



//结构体
//结构体可以让C语言创建新的类型

//创建一个学生	
//struct Stu
//{
//	char name[10];//成员变量
//	int age;
//	double score;
//};
//
////创建一本书
//struct Book
//{
//	char name[10];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = { "张三", 20, 95.5 };//结构体的创建和初始化
//	printf("姓名：%s 年龄：%d 分数：%lf", s.name, s.age, s.score);//结构体变量.成员变量
//
//	struct Stu * ps = &s;
//	printf("姓名：%s 年龄：%d 分数：%lf", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("姓名：%s 年龄：%d 分数：%lf", ps->name, ps->age, ps->score);
//										  //结构体指针->成员变量名
//	return 0;
//}