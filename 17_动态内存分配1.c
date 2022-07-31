#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


//1.创建一个变量
//int a=10;  //局部变量 - 栈区
//int g_a=10;  //全局变量 - 静态区

//2.创建一个数组
//int arr1[10];  //局部变量 - 栈区
//int arr2[10];  //全局变量 - 静态区


//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	struct S arr[50];  //50个struct S 类型的数据
//	//30 - 浪费
//	//60 - 不够
//	return 0;
//}

//C语言是可以创建变长数组 - C99中增加了  VS不支持C99 gcc支持C99标准
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];
//	return 0;
//}





//malloc();  //动态开辟空间
//free();  //释放动态开辟的空间
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(10 * sizeof(int));  //INT_MAX
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i; 
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	p = NULL;  //设置为空指针
//	return 0;
//}





//calloc();  //动态开辟空间
//int main()
//{
//	//malloc(10*sizeof(int));
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}	
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}





//realloc  //调整动态开辟内存空间的大小
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}	
//	}
//
//	//只是在使用malloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的空间
//	
//	//realloc使用的注意事项:
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//开辟一块满足需求的空间，并且把原来内存中的数组拷贝回来，释放旧的内存空间
//	//最后返回新开辟的内存空间地址
//	//3.得用一个新的表量来接受realloc函数的返回值
//
//	int*ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//        int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放内存
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);  //malloc(40)
//	return 0;
//}






//err的写法
//int main()
//{
//	//1.对NULL进行解引用操作
//	//int* p = (int*)malloc(40);
//	////玩意malloc失败了，p就被赋值为NULL
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p=NULL;
//
//	//3.对非动态开辟内存的释放
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//	 
//	//4.使用free释放动态内存开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	////使用free释放动态内存开辟内存的一部分
//	//free(p);
//	//p = NULL;
//
//	//5.对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	//p = NULL;  //很有必要
//	////...
//	//free(p);  //释放空指针等于没做
//
//	//6.对动态开辟内存忘记释放(内存泄露)
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//
//	return 0;
//}





//笔试题

// 1.运行代码程序会出现崩溃的现象
// 2.程序存在内存泄露的问题
// str以值传递的形式给p
// p是GetMemory函数的形参，只在函数内部有效
// 等GetMemory函数返回之后，动态开辟内存尚未释放
// 并且无法找到，所以会造成内存泄露
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正1
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//改正2
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}