#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//�������� - C���Ե���������
//char��short��int��long��float��double
//���Ӷ��� ��������
//�Զ�������:�ṹ�塢ö�١�������


//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ������������ѧ������(����)
//����ѧ��:���� - ����+�绰+�Ա�+����
//struct Stu                    // --      �ṹ���ǩ
//{
//	char name[20];  //����
//	char tele[12];  //�绰       --      ��Ա����
//	char sex[10];  //�Ա�
//	int age;
//}s4,s5,s6;      //ȫ�ֱ���
//
//struct Stu s3;  //ȫ�ֱ���
//
//int main()
//{
//	//�����Ľṹ�����
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}




//�����ṹ������
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;   //�ṹ��ָ��
//
//int main()
//{
//	//psa = &sa;  //err  ���������������������������ȫ��ͬ����������
//	return 0;
//}




//�ṹ���������
//struct Node
//{
//	int data;  //4  ������
//	//struct Node n;  //err
//	struct Node* next;  //4/8  ָ����
//};
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}





//�ṹ��������
//typedef struct Node
//{
//	int data;  
//	struct Node* next;  
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}




//�ṹ������Ķ���ͳ�ʼ��
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };  //��ʼ��
//	struct S s = { 'c',{55.6,30},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight, s.st.age);
//	return 0;
//}




//�ṹ���ڴ���� (�ص㡢����)
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", (int)sizeof(s1));  //12
//	struct S2 s2 = { 0 };
//	printf("%d\n", (int)sizeof(s2));  //8
//	return 0;
//}




//�޸�Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}





#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof();  //��
//	printf("%d\n", (int)offsetof(struct S, c));
//	printf("%d\n", (int)offsetof(struct S, i));
//	printf("%d\n", (int)offsetof(struct S, d));
//	return 0;
//}




//�ṹ�崫��
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////��ֵ
//Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
////��ַ (����)
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	//s.a = 100;
//	//s.c='w';
//	//s.d = '3.14';
//	//printf("%d\n", s.a);
//}