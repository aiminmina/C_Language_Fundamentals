#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ����
//	MALE = 2,
//	FEMALE,
//	SECRET = 8
//};

//enum Color
//{
//	RED,  //RED������
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//
//	//enum Sex s = MALE;
//
//	//enum Color c = 2;  //���Ϊö�������ұ�Ϊint���� err
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);  //0 1 2
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);  //0 1 2
//	return 0;
//}





//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;  //����
//	printf("%d", sizeof(s));
//	return 0;
//}






//c���Ե�Դ���� --> ���� --> ���� --> ��ִ�г���
// ö�ٱ�#define����
//#define RED 0  //RED�Ƿ���
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	int color = RED;
//	return 0;
//}





//���� - ������ - ������(����ͬһ��ռ�)
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", (int)sizeof(u));
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	
//	return 0;
//}





//int check_sys()
//{
//	int a = 1;
//	//����1��ʾС��
//	//����0��ʾ���
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union  //����
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//����1��ʾС��
//	//����0��ʾ���
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//		printf("���\n");
//
//	//int a = 0x11223344;
//	//	//�͵�ַ-------------------->�ߵ�ַ
//	//....[][][][][11][22][33][44][][][][][][][]...  ����ֽ���洢ģʽ
//	//....[][][][][44][33][22][11][][][][][][][]...  С���ֽ���洢ģʽ
//	//����һ�����ݣ������ڴ��еĴ�ŵ��ֽ�˳��
//	//��С���ֽ�������
//}




//�������С�ļ���
//union Un
//{
//	int a;  //4
//	char arr[5];  //5
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));  //8
//	return 0;
//}