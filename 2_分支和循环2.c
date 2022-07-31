#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(){
//	int i = 0;  //初始化
//	while (i < 10)  //判断
//	{
//		i++;  //调整 
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d\n", i);
//		//...
//	}
//	return 0;
//}


//for循环
//int main()
//{
//	int i = 0;
//	//  初始化   判断   调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d\n", i);
//	}
//	return 0;
//}




//for循环控制变量的一些建议:
//1.不可在for循环体内修改循环变量，防止for循环失去控制
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)  
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//2.建议for语句的循环控制变量的取值才去"前闭后开区间"写法(不是绝对)
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//10次循环
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




//int main()
//{
//	for (;;)                //1.for循环的初始化、调整、判断 都可以省略
//	{                         //但是:for循环的 判断部分 如果被省略，那判断条件就是:恒为真  
//		printf("呵呵\n");   //2.如果不是非常熟练，不要随便省略
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}




//do...while()循环
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//		
//	} while (i <= 10);
//
//	return 0;
//}




//练习
//n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("计算n的阶乘,请输入n: ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}


//1！+2！+ 3！
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//			//n的阶乘
//		}
//		sum = sum + ret;
//		
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret*n;
//		//n的阶乘
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//写一个代码，在arr数组(有序的)中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}


//二分查找算法/折半查找算法
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


#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;  //err
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");  //执行系统命令的一个函数 -cls -清空
//		left++;
//		right--;
//		
//	}
//		printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)  //== 不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//
//		printf("三次密码均错误,退出程序");
//	
//	return 0;
//}