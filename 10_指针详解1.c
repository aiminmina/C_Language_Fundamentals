#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz); 
//}

//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef" ��һ�������ַ���
//	//*p = 'W';
//	printf("%s\n", p);
//
//	//printf("%c\n", *p);
//	//printf("%s\n", p);
//
//	return 0;
//}


//www.stackoverflow.com
//Segmentation fault - �δ���
//segmentfault.com  


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "acbdef";
//	const char* p1 = "abcdef";
//	const char* p2 = "abcdef";
//
//	if (p1 == p2)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//
//	//if (arr1 == arr2)
//	//{
//	//	printf("hehe\n");
//	//}
//	//else
//	//{
//	//	printf("haha\n");
//	//}
//
//	return 0;
//}





//ָ������ �����飬�������ָ���

//int main()
//{
//	int arr[10] = {0};//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a, &b, &c, &d};
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1, 2, 3, 4, 5 };
//	int arr2[] = { 2, 3, 4, 5, 6 };
//	int arr3[] = { 3, 4, 5, 6, 7 };
//
//	int* parr[] = { arr1, arr2, arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}






//����ָ��- ָ��
//
//
//int main()
//{
//	//int *p = NULL; //p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
//	//char* pc = NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	               //����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	//int arr[10] = {0};
//	//arr- ��Ԫ�ص�ַ
//	//&arr[0] -��Ԫ�صĵ�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int (*p)[10] = &arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}






//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//
//	//int (*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa == arr
//	//}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}
//	*/
//	return 0;
//}





//�������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

////������ָ�����ʽ
//void print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			//printf("%d ", *(p[i] + j));
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//
//	//print1(arr, 3, 5);//arr - ������ - ������������Ԫ�ص�ַ
//	print2(arr, 3, 5);//
//	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int i = 0;
//	//int* p = arr;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", p[i]);
//	//	printf("%d ", *(p + i));
//	//	printf("%d ", *(arr + i));
//	//	printf("%d ", arr[i]);//arr[i] == *(arr+i) == *(p+i) == p[i]
//	//}
//	return 0;
//}





//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//
//	//ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�� - ָ������
//	//int *p3; // ����ָ�� - ָ�����ε�ָ��
//	//char* p4;//�ַ�ָ�� - ָ���ַ���
//	int arr2[5];//����
//	int (*pa)[5] = &arr2;//ȡ������ĵ�ַ,pa����һ������ָ��
//
//	int(* parr3[10])[5];
//	return 0;
//}





//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
//void test2(int arr[3][])//err
//{}

//void test3(int* arr) //err
//{}

//void test4(int **arr) //err
//{}
//
//void test5(int (*arr)[5])
//{}
//
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	//test(arr);//��ά���鴫��
//	//test1(arr);
//	//test2(arr);
//	//test3(arr);
//	//test4(arr);
//	test5(arr);
//
//	return 0;
//}





//void test1(int* p)
//{
//}
//
//void test2(char*p)
//{}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);//ok
//	test1(p1);//ok
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);//ok
//	test2(pc);//ok
//	return 0;
//}
//
//void test(int **p)
//{}
//
//int main()
//{
//	int *ptr;
//	int** pp = &ptr;
//	test(&ptr);
//	test(pp);
//	int* arr[10];//
//	test(arr);//ָ������Ҳ����
//
//	return 0;
//}





//����ָ�� - ��ָ�������ָ��
//����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��
//
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
//
//	//int arr[10] = { 0 };
//	//int (*p)[10] = &arr;
//
//	//arr;
//	//printf("%d\n", Add(a, b));
//
//	//&������ �� ������ ���Ǻ����ĵ�ַ
//	/*
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	*/
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3));//5
//
//	return 0;
//}





//void Print(char*str)
//{
//	printf("%s\n", str);
//}
//
//int main()
//{
//	int a;
//	int * pa;
//	void (*p)(char*) = Print;
//
//	(*p)("hello bit");
//	p("hello bit");
//	p("hello world");
//	return 0;
//}





// signal��һ����������
// signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int������������void
// signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//
//void(* signal(int, void(*)(int)) )(int);
//
////��
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);
//
//typedef unsigned int uint;






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
//
//	int(*pa)(int, int) = Add;
//	printf("%d\n", pa(2, 3));
//	printf("%d\n", Add(2, 3));
//
//	//printf("%d\n", *pa(2, 3));//err
//
//	printf("%d\n", (*pa)(2, 3));
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}

//int main()
//{
//	//ָ������
//	//int* arr[5];//
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ - ����ָ�������
//	int (*pa)(int, int) = Add;//Sub/Mul/Div
//
//	int(*parr[4])(int, int) = {Add, Sub, Mul, Div};//����ָ�������
//	
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//
//	return 0;
//}