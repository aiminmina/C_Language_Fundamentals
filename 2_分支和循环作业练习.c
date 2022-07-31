#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//3个数从大到小输出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);  //scanf中添加什么符号 填的时候要加什么符号
//	//算法实现
//	//a放最大值，b次之，c放最小值
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}


//100以内被3整除的数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//求两个数的最大公约数
//辗转相除法
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//				//判断year是否为闰年
//				//1.能被4整除并且不能被100整除的是闰年
//				//2.能被400整除是闰年
//				if (year % 4 == 0 && year % 100 != 0)
//				{
//					printf("%d ", year);
//					count++;
//				}
//				else if (year % 400 == 0)
//				{
//					printf("%d ", year);
//					count++;
//				}
//			}
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);  //\n为换行
//	return 0;
//}


//100-200之间的素数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断的规则
//		//1.试除法
//		//产生2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(double(i)); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(double(i)))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - 开平方的数学库函数
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(double(i)); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(double(i)))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//<素数求解的n种境界>



//1到100出现了多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//分数求和
//1/1-1/2+1/3-1/4+1/5......+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//求10个数的最大值
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];  //最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	for (i = 1 ; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);  //%2d - 打印两位不够用空格补齐 %-2d - 左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}


//二分查找:
//编写代码在一个整型有序数组中查找具体的某个数
//要求:找到了就打野数字所在的下标，找不到则输出:找不到。
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);  //计算元素个数
//	int left = 0;  //左下标
//	int right = sz - 1;  //右下标
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//猜数字游戏
//1.电脑生成一个随机数
//2.猜数字
//void menu()
//{
//	printf("**********************\n");
//	printf("**  1.play  0.exit  **\n");
//	printf("**********************\n");
//}
//
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
////RAND_MAX  //0-32767
//
//void game()
//{
//	//1.生成一个随机数
//	int ret = 0;
//	int guess = 0;
//	//拿时间戳来设置随机数的生成起始点
//	//时间戳 - 当前计算机的时间-计算机的起始时间(1970.1.1.0:0:0) = （xxxx）秒
//	//time_t time(time_t *timer)
//	//time_t
//	
//	ret = rand()%100+1;  //生成1-100之间随机数
//	//printf("%d\n ", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你,猜对了\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//			printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();  //猜数字游戏
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//goto语句  
//int main()
//{
//	printf("hello,world\n");
//	goto again;
//	printf("你好\n");
//again:
//	printf("haha\n");
//	return 0;
//}

#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");
//again:
//	printf("请注意，你的电脑再一分钟内关机，如果输入:我是吴彦祖，就取消关机\n请输入:");
//	scanf("%s", input);
//	if (strcmp(input, "我是吴彦祖") == 0)
//	{
//		printf("取消成功\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑再一分钟内关机，如果输入:我是吴彦祖，就取消关机\n请输入:");
//		scanf("%s", input);
//		if (strcmp(input, "我是吴彦祖") == 0)
//		{
//			printf("取消成功\n");
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}