#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//���������������
//�ֲ������������򣺾��Ǳ������ڵľֲ���Χ
//ȫ�ֱ�������������������

//extern int l_mys; //��������
//int main(){
//	 printf("%d\n", l_mys);
//	{
//	int a = 2;
//     printf("a=%d\n", a);
//	 }//�ֲ�
//	return 0;
//}

//��������
//�������������ڣ������Ĵ���������֮���ʱ���
//
//�ֲ��������������ڣ�
//ȫ�ֱ������������ڣ������������������
// 
// //
//int main()
//{
//	{//�ֲ�������ʼ
//		int a = 10;
//		printf("%d\n", a);
//	}//�ֲ���������
//	return 0;
//}

//����

//#define MAX 10000
//int main()
//{
	/*1.���泣����
		3.14 
		10
		'a'
		"abcde"*/

	//2.const���εĳ�����
	//const int num = 10; //num�����ǳ����� - ���г����ԣ����ܱ��ı�����ԣ�
	//num = 20;
	

	//3. #define����ı�ʶ������
	// MAX = 100;//����д��
	/*int n = MAX; 
	printf("n=%d\n", n);*/
//}



//ö�ٳ���
//enum Sex
//{
//	//����ö�����͵ı�����δ������ȡֵ
//	//ö�ٳ���
//	MALE = 6,//����ֵ
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//4. ö�ٳ���
//	// ����һһ�оٵĳ���
//
//	enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}


//�ַ�������һ���ַ�("asdad")
//�ַ����ڽ�β��λ��������һ��\0���ַ�
//\0���ַ����Ľ�����־
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
//	printf("%s\n", "��");
//	printf("%s\n", "\"");
//	printf("c:\\test\\test.c");
//	printf("\a\a\a");
//	return 0;
//}  

//int main()
//{
//	//\ddd ��ʾ1~3��8�������֡�--130��X��
//	printf("%c\n", '\130');
//	//\xdd dd��ʾ2��16�������֡� --x30 0
//	printf("%c\n", '\x30');//30��16����Ϊ48 ��ӦASCII��ֵΪ�ַ�'0'
//	return 0;
//}
// 


//��֧
//int main() 
//{
//	int kd;
//	printf("�����ҵ��ù�����\n");
//	printf("������0��1:");
//	scanf("%d", &kd);
//	if (kd = 1)
//	{
//		printf("�õ���offer");
//	}
//	else
//	{
//		printf("�ؼ��ֵ�");
//	}
//	return 0;
//}




//whileѭ��ʵ��
//int main()
//{
//	int i = 1;
//	printf("���ѧϰing\n");
//	while (i < 300)
//	{
//		printf("��ֵ�%d��\n",i);
//		i++;//i=i+1
//	}
//	if (i = 300)
//	{
//		printf("�����ϰ壡");
//	}
//	return 0;
//}

//����
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


//����
//int main()
//{
//	//10������1-10������
//	//���������±������ʵ�
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i;
//	for (i = 0; i < 10; i++)
//	{
//		printf("��������ֵ����Ϊarr[%d] = %d \n", i,arr[i]);
//	}
//	char ch[5] = { 'a','b','c' };
//	return 0;
//}


//������
//����������: + - * / %
//��λ������:����
int main()
{
	//int a = 9 % 2;//%ȡģ���ࣩ
	//int a = 2;
	//int b = a << 1;//���Ʋ���--�ƶ�����2����λ
	//printf("%d", b);


	//λ������
	//&(��λ��) |����λ��  ^����λ���
	/*a = a + 3; a = a - 3;
	a += 3;    a -= 3;*/

	//sizeof��һ�������� ���Ǻ���
	//�������ͻ�����Ĵ�С
	int a = 10;
	printf("%d\n", sizeof a );
	printf("%d\n", sizeof (char) );
	return 0;
}