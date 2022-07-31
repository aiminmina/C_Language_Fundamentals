#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//递归的两个必要条件
//存在限制条件，当满足这个限制条件的时候，递归便不再继续
//每次递归调用之后越来越接近这个限制条件

//最简单的递归
// int main()
// {
// 	printf("ahah\n");   
// 	main();              //stack overflow - 栈溢出
// 	return 0;
// }




//输入1234 输出 1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num); //1234
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	return 0;
//}




#include<string.h>

//编写函数不允许创建临时变量，求字符串的长度

//函数的方法
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归的方法

//把大事化小
//my_strlen("bit");
//1+my_strlen("it");
//1+1+my_strlen("t");
//1+1+1+my_strlen("")
//1+1+1+0=3

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);  //求字符串长度
//	//printf("%d\n", len);
//
//	//模拟实现了一个strlen函数
//	int len = my_strlen(arr);  //arr是数组，数组传参，传过去的不是整个数组，而是第一个元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}




//递归与迭代

//求n的阶乘(不考虑溢出)

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i < n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}

//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac2(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);//循环的方式
//	printf("%d\n", ret);
//	return 0;
//}




//求第n个斐波那切数(不考虑溢出)
//1 1 2 3 5 8 13 21 34 55 ...

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)  //测试第三个斐波那切数的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD - 测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}




//有问题的
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//
//int main()
//{
//	test(1);
//	return 0;
//}




//汉诺塔问题
//青蛙跳台阶问题