#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ָ��
//int main()
//{
//	int a = 10; //a���ڴ���Ҫ����ռ�� -4���ֽ�
//	printf("%p\n", &a);//%p ר��������ӡ��ַ��
//
//	int* pa = &a;//pa��������ŵ�ַ�ģ���C�����н���ָ�����
//	//* ˵�� pa��ָ�����
//	//int ˵��paִ�еĶ�����int���͵�
//
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//ָ����ǵ�ַ
//int main()
//{
//	int a = 10;
//	
//	int* pa = &a;
//
//	*pa = 20;//*�����ò��� |*pa����ͨ��pa����ĵ�ַ���ҵ�a
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
//	//ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�
//}



//�ṹ��
//�ṹ�������C���Դ����µ�����

//����һ��ѧ��	
//struct Stu
//{
//	char name[10];//��Ա����
//	int age;
//	double score;
//};
//
////����һ����
//struct Book
//{
//	char name[10];
//	float price;
//	char id[30];
//};
//int main()
//{
//	struct Stu s = { "����", 20, 95.5 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("������%s ���䣺%d ������%lf", s.name, s.age, s.score);//�ṹ�����.��Ա����
//
//	struct Stu * ps = &s;
//	printf("������%s ���䣺%d ������%lf", (*ps).name, (*ps).age, (*ps).score);
//
//	printf("������%s ���䣺%d ������%lf", ps->name, ps->age, ps->score);
//										  //�ṹ��ָ��->��Ա������
//	return 0;
//}