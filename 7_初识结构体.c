#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����һ��ѧ��
//struct �ṹ��ؼ��� Stu -�������ǩ struct Stu - �ṹ������
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//} s1, s2, s3;  //s1, s2, s3 ������ȫ�ֵĽṹ�����

//typedef struct Stu  //����������
//{
//	//��Ա����
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //Stu������
//
//int main()
//{
//	struct Stu s1 = { "����", 18, "234567890", "����" };  //�����ṹ�����  �ֲ�����
//	Stu s2 = { "����", 20, "123456789", "��" };
//
//	return 0;
//}




//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "helloworld\n";
//	struct T t = { "haha", {100,'w',"hello ",3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}




//typedef struct Stu  //����������
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "����", 40, "1234567890", "��" };
//	//��ӡ�ṹ������
//	//Print1 �� Print2 �ĸ����ã�
//
//	Print1(s);
//	Print2(&s);
//	return 0;
//}




//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = 0;
//	ret = Add(a, b);
//	
//	return 0;
//}

//����:����ջ֡�Ĵ���������


//���ݽṹ:
//---�������ݽṹ
//˳���
//����
//ջ
//����
//---�������ݽṹ
//������
//---ͼ