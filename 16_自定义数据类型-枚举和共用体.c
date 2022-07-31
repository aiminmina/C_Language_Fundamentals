#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//枚举类型
//enum Sex
//{
//	//枚举的可能取值 - 常量
//	MALE = 2,
//	FEMALE,
//	SECRET = 8
//};

//enum Color
//{
//	RED,  //RED是类型
//	GREEN,
//	BLUE
//};
//
//int main()
//{
//
//	//enum Sex s = MALE;
//
//	//enum Color c = 2;  //左边为枚举类型右边为int类型 err
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);  //0 1 2
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);  //0 1 2
//	return 0;
//}





//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;  //整数
//	printf("%d", sizeof(s));
//	return 0;
//}






//c语言的源代码 --> 编译 --> 链接 --> 可执行程序
// 枚举比#define更好
//#define RED 0  //RED是符号
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	int color = RED;
//	return 0;
//}





//联合 - 联合体 - 共用体(共用同一块空间)
//union Un
//{
//	char c;
//	int i;
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", (int)sizeof(u));
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	
//	return 0;
//}





//int check_sys()
//{
//	int a = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union  //匿名
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1表示小端
//	//返回0表示大端
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端\n");
//	}
//	else
//		printf("大端\n");
//
//	//int a = 0x11223344;
//	//	//低地址-------------------->高地址
//	//....[][][][][11][22][33][44][][][][][][][]...  大端字节序存储模式
//	//....[][][][][44][33][22][11][][][][][][][]...  小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//}




//联合体大小的计算
//union Un
//{
//	int a;  //4
//	char arr[5];  //5
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));  //8
//	return 0;
//}