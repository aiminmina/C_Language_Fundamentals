#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//1.strlen 和 sizeof没有关联
//2.strlen 是求字符串长度的-只能针对字符串求长度 - 库函数 -得使用引头文件
//3.sizeof 计算变量、数组、类型的大小-单位是字节 - 操作符

//一维数组
// int main()
// {
// 	////创建一个数组 - 存放整型 - 10个
// 	//int arr[10] = {1,2,3};   //不完全初始化 剩下的元素默认初始化为0
// 	//char arr2[5] = {'a',98};  //98阿斯科码值为b
// 	//char arr3[5] = "ab";  //ok  第三个0是\0

// 	char arr4[] = "abcdef";

// 	printf("%d\n", sizeof(arr4));  //7
// 	//sizeof 记录 arr4所占空间的大小
// 	//7个元素-char 7 * 1 = 7
	
// 	printf("%d\n", strlen(arr4));  //6
// 	//strlen 求字符串的长度-'\0'之前的字符个数
// 	//[a b c d e f \0]
// 	//6

// 	//int ch[n];  //err
// 	return 0;
// }


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//	printf("%d\n", sizeof(arr1));  //4  
//	printf("%d\n", sizeof(arr2));  //3
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //随机值  找不到\0
//	return 0;
//}




//int main()
//{
//	//char arr[] = "abcdef";  //[a][b][c][d][e][f][\0]
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len ; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//一位数组的存储
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			printf("&arr[%d] = %p\n", i ,&arr[i]);
//		}
//		//数组在内存中式连续存放的
//	return 0;
//}




//二维数组
//行列下标都从0开始
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	// 1 2 3 0
//	// 4 5 0 0
//	// 0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6];
//	//int arr[] = { 1, 2, 3, 4 };
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }};  //二维数组的列不能省略，行可以
//	return 0;
//}




//二维数组的存储
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]%p\n",i,j,&arr[i][j]);
//		}
//	}
//	//二位数组也是连续存储的
//	return 0;
//}




//void bubble_cort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;  //假设这一趟要排序的数据已经有序
//		//每趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;  //本趟排序的数据其实不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址 &arr[0]
//	bubble_cort(arr,sz);  //冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	printf("%p\n",arr);  //数组首元素的地址
//	printf("%p\n", arr+1); 
//
//	printf("%p\n", &arr[0]);  //数组首元素的地址
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);  //数组的地址
//	printf("%p\n", &arr+1);
//
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(数组名)  --  数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//	//2.&数组名，数组名代表整个数组，&数组名，取出的是整个数组的地址
//
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);
//	return 0;
//}