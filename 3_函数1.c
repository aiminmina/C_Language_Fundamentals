#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//http://www.cplusplus.com/reference/
//https://zh.cppreference.com/w/%E9%A6%96%E9%A1%B5  //zh为中文版 en为英文版


//库函数

#include<string.h>

//int main()
//{
//	char arr1[] = "ahah";
//	char arr2[20] = "hehe";
//	//               ahah\0hehe  \0是结束标志所以后面不打印
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	//strcpy - string copy -字符串拷贝
//	//strlen - string length - 字符串长度
//	return 0;
//}


//memset
//memory - 内存 set -设置

//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}




//自定义函数

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


//当实参传给形参的时候，形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的

//不能完成任务
//void Swap1(int x,int y)  //void  表示没有返回值  x y 为形参
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
//	//调用Swap1函数 - 传值调用
//	//Swap1(a, b);  //错误方法  a b 为实参
//	
//	//调用Swap2函数 - 传址调用
//	Swap2(&a, &b);  //正确方法
//
//	printf("a=%d b=%d\n", a, b);  
//	return 0;
//}


//int main()
//{
//	int a = 10;
//	int* pa = &a;  //pa指针变量
//	*pa = 20;  //解引用操作
//	printf("%d\n",a)
//	return 0;
//}




//练习:

#include<math.h>

//	//打印100-200之间的素数
//是素数返回1，不是素数返回0
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
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}


//1000到2000的闰年
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


//二分查找
//				//本质上arr是一个指针
//int binary_search(int arr[],int k, int sz)
//{
//	//算法的实现
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
//						  //传递过去的是数组arr首元素的数组
//	int ret = binary_search(arr, k, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了,下标是:%d\n", ret);
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




//链式访问
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