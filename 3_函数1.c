#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//http://www.cplusplus.com/reference/
//https://zh.cppreference.com/w/%E9%A6%96%E9%A1%B5  //zhΪ���İ� enΪӢ�İ�


//�⺯��

#include<string.h>

//int main()
//{
//	char arr1[] = "ahah";
//	char arr2[20] = "hehe";
//	//               ahah\0hehe  \0�ǽ�����־���Ժ��治��ӡ
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	//strcpy - string copy -�ַ�������
//	//strlen - string length - �ַ�������
//	return 0;
//}


//memset
//memory - �ڴ� set -����

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//�Զ��庯��

//int get_max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	max = get_max(100, 200);
//	printf("max=%d\n", max);
//	return 0;
//}


//��ʵ�δ����βε�ʱ���β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�

//�����������
//void Swap1(int x,int y)  //void  ��ʾû�з���ֵ  x y Ϊ�β�
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//
//void Swap2(int* pa,int *pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d b=%d\n", a, b);
//	//����Swap1���� - ��ֵ����
//	//Swap1(a, b);  //���󷽷�  a b Ϊʵ��
//	
//	//����Swap2���� - ��ַ����
//	Swap2(&a, &b);  //��ȷ����
//
//	printf("a=%d b=%d\n", a, b);  
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;  //paָ�����
//	*pa = 20;  //�����ò���
//	printf("%d\n",a)
//	return 0;
//}




//��ϰ:

#include<math.h>

//	//��ӡ100-200֮�������
//����������1��������������0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(double(n)); j++)
//	if (n % j == 0)
//		return 0;
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//1000��2000������
//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)
//		{
//			count++;
//			printf("%d ", year);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//���ֲ���
//				//������arr��һ��ָ��
//int binary_search(int arr[],int k, int sz)
//{
//	//�㷨��ʵ��
//	
//	int left = 0;
//	int right = sz-1;
//
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid]>k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d ", sz);
//						  //���ݹ�ȥ��������arr��Ԫ�ص�����
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±���:%d\n", ret);
//	}
//	return 0;
//}


//void Add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	Add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}




//��ʽ����
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));
//	return 0;
//}


//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));  //4321
//	return 0;
//}





//#include "8_14.h"
//
//int main()
//{
//	int a = 10;;
//	int b = 20;
//	int sum = 0;
//	sum = my_add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}