#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>


//笔试题
//返回栈空间地址的问题
//char *GetMemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}


//err
//int* test()
//{
//	//static int a = 10;  //静态区  //true
//	int a =10;  //栈区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;
//	return 0;
//}


//true
//int* test()
//{
//	int* ptr = malloc(100);  //堆区
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//
//	return 0;
//}




//忘记释放动态开辟的内存，导致内存泄露
//void GetMemory(char **p, int num)
//{
//	*p = (char *)malloc(num);
//}
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	//改正
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}





//void Test(void)
//{
//	char* str = (char*)malloc(100);
//	strcpy(str, "hello");
//	free(str);//free释放str指向的空间后，并不会把str置为NULL
//	str = NULL;
//
//	if (str != NULL)
//	{
//		strcpy(str, "world");
//		printf(str);
//	}
//}
//
//int main()
//{
//	Test();
//
//	return 0;
//}





//柔性数组
// 1.方便内存释放
// 2.有利于访问速度
//struct S
//{
//	int n;
//	int arr[0];  //未知大小
//};

//struct S
//{
//	int n;
//	int arr[];  //未知大小 - 柔性数组成员 - 数组的大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n", sizeof(s));
//
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));
//	ps->n = 100;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;  //0 1 2 3 4
//	}
//	struct S* ptr = realloc(ps, 44);
//	if (ptr != NULL)
//	{
//		ps = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}



//局限性、劣势
//struct S
//{
//	int n;
//	int *arr;
//};
//
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	ps->arr = malloc(5 * sizeof(int));
//	int i = 0;
//	for (i = 0;i < 5; i++)
//	{
//		ps->arr[i] = i;
//	}	
//	for (i = 0;i < 5; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//调整大小
//	int *ptr = realloc(ps->arr, 10 * sizeof(int));
//	if (ptr != NULL)
//	{
//		ps->arr = ptr;
//	}
//	for (i = 5; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	//释放内存
//	free(ps->arr);
//	ps->arr = NULL;
//	free(ps);
//	ps = NULL;
//	return 0;
//}