#include<stdio.h>
#include<string.h>
//结构体
//人、书...  --复杂对象
//名字+身高+年龄+身份证号码+...
//书名+作者+出版社+定价+书号+...
//复杂对象 -- 结构体  --我们自己创造出来的一种类型

//创建一个结构体类型
//struct Book
//{
//	char name[20]; //C语言程序设计
//	short price;
//};
//
//int main()
//{
//	//利用结构体类型-创建一个该类型的结构体变量
//	struct Book b1 = {"C语言程序设计",55};
//	struct Book* pb = &b1;
//	//利用pb打印出我的名字和价格
//	//.   结构体变量.成员
//	//->  结构体指针->成员
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//
//	printf("%s\n", (*pb).name);
//	printf("%d元\n", (*pb).price);
//
//	printf("书名:%s\n", b1.name);
//	printf("价格:%d元\n", b1.price);
//	b1.price = 15;
//	//printf("修改后的价格:%d元\n", b1.price);
//	strcpy_s(b1.name,7,"C++");  //strcpy -string copy -字符串拷贝-库函数-string.h
//	printf("%s\n", b1.name);
//////strcpy_s和strcpy()函数的功能几乎是一样的	。
//////strcpy函数，就象gets函数一样，它没有方法来保证有效的缓冲区尺寸，所以它只能假定缓冲足够大来容纳要拷贝的字符串。
//////在程序运行时，这将导致不可预料的行为。用strcpy_s就可以避免这些不可预料的行为。
////	
//	return 0;
//}
