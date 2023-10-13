#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//作用域和生命周期
//局部变量的作用域：就是变量所在的局部范围
//全局变量的作用域：整个工程

//extern int l_mys; //函数声明
//int main(){
//	 printf("%d\n", l_mys);
//	{
//	int a = 2;
//     printf("a=%d\n", a);
//	 }//局部
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//
//局部变量的生命周期：
//全局变量的生命周期：整个程序的生命周期
// 
// //
//int main()
//{
//	{//局部生命开始
//		int a = 10;
//		printf("%d\n", a);
//	}//局部生命结束
//	return 0;
//}

//常量

//#define MAX 10000
//int main()
//{
	/*1.字面常量：
		3.14 
		10
		'a'
		"abcde"*/

	//2.const修饰的常变量
	//const int num = 10; //num变量是常变量 - 具有常属性（不能被改变的属性）
	//num = 20;
	

	//3. #define定义的标识符常量
	// MAX = 100;//错误写法
	/*int n = MAX; 
	printf("n=%d\n", n);*/
//}



//枚举常量
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE = 6,//赋初值
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//4. 枚举常量
//	// 可以一一列举的常量
//
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}


//字符串就是一串字符("asdad")
//字符串在结尾的位置隐藏了一个\0的字符
//\0是字符串的结束标志
//int main()
//{
//	//char arr[] = "hello";
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c','\0'};
//	
//	/*printf("%s\n", arr1);
//	printf("%s\n", arr2);*/
//
//	return 0;
//}


//int main()
//{
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "‘");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a");
//	return 0;
//}  

//int main()
//{
//	//\ddd 表示1~3个8进制数字。--130（X）
//	printf("%c\n", '\130');
//	//\xdd dd表示2个16进制数字。 --x30 0
//	printf("%c\n", '\x30');//30的16进制为48 对应ASCII码值为字符'0'
//	return 0;
//}
// 


//分支
//int main() 
//{
//	int kd;
//	printf("你想找到好工作吗？\n");
//	printf("请输入0或1:");
//	scanf("%d", &kd);
//	if (kd = 1)
//	{
//		printf("拿到好offer");
//	}
//	else
//	{
//		printf("回家种地");
//	}
//	return 0;
//}




//while循环实例
//int main()
//{
//	int i = 1;
//	printf("坚持学习ing\n");
//	while (i < 300)
//	{
//		printf("坚持第%d天\n",i);
//		i++;//i=i+1
//	}
//	if (i = 300)
//	{
//		printf("当上老板！");
//	}
//	return 0;
//}

//函数
// int Add(int x, int y)
//{
//	int z;
//	return z = x + y; 
//}
//int main()
//{
//	int a, b;
//	int sum;
//	scanf("%d%d", &a, &b);
//	sum = Add(a, b);
//	printf("sum=%d", sum);
//}


//数组
//int main()
//{
//	//10个整形1-10存起来
//	//数组是用下标来访问的
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("这个数组的值依次为arr[%d] = %d \n", i,arr[i]);
//	}
//	char ch[5] = { 'a','b','c' };
//	return 0;
//}


//操作符
//算术操作符: + - * / %
//移位操作符:》《
int main()
{
	//int a = 9 % 2;//%取模（余）
	//int a = 2;
	//int b = a << 1;//左移操作--移动的是2进制位
	//printf("%d", b);


	//位操作符
	//&(按位与) |（按位或）  ^（按位异或）
	/*a = a + 3; a = a - 3;
	a += 3;    a -= 3;*/

	//sizeof是一个操作符 不是函数
	//计算类型或变量的大小
	int a = 10;
	printf("%d\n", sizeof a );
	printf("%d\n", sizeof (char) );
	return 0;
}