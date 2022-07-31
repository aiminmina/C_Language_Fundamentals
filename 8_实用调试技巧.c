#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//tsst.c          可执行程序
//Dubug		Debug版本的可执行程序		可以调试，因为文件中包含了调试信息
//Release   Release版本的可执行程序     不可以调试


//F5 - 启动调试 - 和F9配合使用
//断点 F9切换断点

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	
//	return 0;
//}



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
//	int ret = 0;
//	ret = Add(a, b);
//	
//	return 0;
//}






//1.栈区的默认使用:
//先使用高地址处的空间,再使用低地址处的空间
//2.数组随着下标的增长
//地址是由低到高的变化

//《C陷阱和缺陷》

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//	//Debug版本下i比arr大,Release会优化把arr比i大 
//	//Release发现bug的时候马上截图留证据
//
//	//VC6.0 环境下 <= 10 死循环
//	//gcc 编译器 <= 11 死循环
//	//vs2013 <=12 死循环
//	for (i = 0; i <= 12; i++)  //死循环
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}





//版本1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;  //'\0'
//}


//版本2
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}	
//}


//版本3
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);  //断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//版本4
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);  //断言
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//版本5  --满分
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);  //断言
//	assert(src != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//#include<string.h>
//int main()
//{
//	//strcpy - 字符串拷贝
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	//my_strcpy(arr1, NULL);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}




//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int * p = &num;
//	//int * const p = &n;
//	//const 放在指针变量的*左边时，修饰的是*p，也就是说不能通过p来改变*p(num)的值
//	//const 放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变
//	
//	//*p = 20;  //err  
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}





//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);  //保证指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}