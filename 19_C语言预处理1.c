#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//Ԥ�������

//int main()
//{
//	//printf("%s\n", __FILE__);  //��������Դ�ļ�������+����·��
//	//printf("%d\n", __LINE__);  //�������ڵ��к�
//	//printf("%s\n", __DATE__);  //����
//	//printf("%s\n", __TIME__);  //ʱ��
//
//	//д��־
//	int i = 0;
//	int arr[10] = { 0 };
//	FILE* pf = fopen("log.txt", "w");
//	for(i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//		fprintf(pf, "file:%s line:%d date:%s time:%s i=%d\n",
//			__FILE__, __LINE__, __DATE__, __TIME__, i);
//		printf("%s\n", __FUNCTION__);  //����������
//	}
//	fclose(pf);
//	pf = NULL;
//	for(i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//VC�������У�LINUX����
//int main()
//{
//	printf("%d\n", __STDC__);
//	return 0;
//}

//95% - VS
//99% - gcc




//Ԥ����ָ��
//#define  //�����ʶ�� �����
//#include
//#pragma  //#pragma pack(4)
//#if
//#endif
//#ifdef
//#line

//�����ʶ��
//#define MAX 100  //�������;
//#define STR "hehe"
//
//#define reg register
//
//#define do_forever for(;;)
//int main()
//{
//	//int max = MAX;
//	//printf("%d\n", max);
//	//printf("%s\n", STR);
//
//	//reg int a;
//	//register int a;
//
//	do_forever;
//	return 0;
//}


//#define�����
//�겻�ܳ��ֵݹ�
//�ַ������������ݲ���������
//#define SQUARE1(X) X*X
//#define SQUARE2(Y)(Y)*(Y)
//int main()
//{
//	int ret1 = SQUARE1(5);  //5*5
//	
//	int ret2 = SQUARE1(5 + 1);  //11  5+1*5+1
//	int ret3 = SQUARE2(5 + 1);  //36  (5+1)*(5+1)
//
//	printf("ret = %d\n", ret3);
//}

//#define �滻����
//#define MAX 5
//#define DOUBLE(X) ((X)+(X))
//#define DOUBLE2(Y) Y+Y
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE2(a);
//	printf("%d\n", ret);  //55  10*5+5
//
//	int ret2 = 10 * DOUBLE(MAX);  //MAX���ȱ��滻
//	printf("%d\n", ret2);  //100  10*((5)+(5))
//	return 0;
//}





//#   ��һ����Ĳ���ֱ�Ӳ��뵽�ַ�����
//void printf(int a)
//{
//	printr("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("the value of a is %d\n", a);
//	printf(a);
//	printf(b);
//	return 0;
//}

//#define PRINT(X) printf("the value of " #X " is %d\n",X)
//int main()
//{
//	//printf("hello world\n");
//	//printf("hello" "world\n");
//	//printf("hel" "lo" "world\n");
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of " "a" " is %d\n", a);
//	PRINT(b);
//	//printf("the value of " "b" " is %d\n", a);
//	return 0;
//}


//##  ���԰�λ�������ߵķ��źϳ�һ������ ����궨��ӷ�����ı�Ƭ�δ�����ʶ��
//#define CAT(X,Y) X##Y
//int main()
//{
//	int year21 = 2021;
//	//printf("%d\n", year21);
//	printf("%d\n", CAT(year, 21));
//	//printf("%d\n", year##21);  => printf("%d\n", year21);
//	return 0;
//}




//�������õĺ����
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max = MAX((a++) > (b++) ? (a++) : (b++))
//	printf("%d\n", max);  //12
//	printf("%d\n", a);  //11
//	printf("%d\n", b);  //13
//
//	return 0;
//}





//��ͺ����ĶԱ� - ����ǧ��

////����
//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//
//float Max2(int x, int y)
//{
//	return x > y ? x : y;
//}
////��
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//�����ڵ��õ�ʱ����к������úͷ��صĿ���
//
//	float max = Max2(c, d);
//	printf("%d\n", max);
//	//Ԥ����׶ξ�������滻
//	//û�к����ĵ��úͷ��صĿ���
//	max = MAX(c, d);
//	//max = MAX((c) > (d) ? (c) : (d));
//	printf("%d\n", max);
//	 
//	//int max = Max(a, b);
//	//printf("%d\n", max);
//	//max = MAX(a, b);
//	//printf("%d\n", max);
//
//	return 0;
//}



//����Դ����ͺ���������
//#define SIZEOF(type) sizeof(type)
//
//int main()
//{
//	int ret = SIZEOF(int);
//	//int ret = sizeof(int);
//	printf("%d\n",ret);
//	return 0;
//}



//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}





//#undef�����Ƴ�һ���궨��
// 
//#define MAX 100
//
//int main()
//{
//	printf("MAX = %d\n", MAX);
//#undef MAX
//	printf("MAX = %d\n", MAX);
//	return 0;
//}




//��������ָ��
//#define DEBUG
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 3  //����Ϊ�� ִ��  0Ϊ�� ��ִ��
//		printf("%d ", arr[i]);
//#endif+
//	}
//
//	return 0;
//}


//int main()
//{
//#if 1==2
//	printf("haha\n");
//#elif 2==1
//	printf("hehe\n");
//#else
//	printf("heihei\n");
//#endif
//
//	return 0;
//}



//#define DEBUG 0
//int main()
//{
////#if defined(DEBUG)
////	printf("hehe\n");
////#endif
//	//�������
////#ifdef DEBUG
////	printf("hehe\n");
////#endif
//	//���¶���
////#if !defined(DEBUG)
////	printf("hehe\n");
////#endif
//
////#ifndef DEBUG
////	printf("hehe\n");
////#endif
//	
//	return 0;
//}




//#include " .h"  //�����ļ�
//#include < .h>  //���ļ�






//�ٶ�������
//#include<stddef.h>
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&((struct_name*)0)->member_name
////                                        (int)&((struc S*)0)->c1
//
//int main()
//{
//	//struct S s;
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//	return 0;
//}