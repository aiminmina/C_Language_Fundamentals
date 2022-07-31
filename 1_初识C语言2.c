#include<stdio.h>
//int main()
//{
//	//字符串的结束标志:'\0'
//	//"abcdef\0"; // \0隐藏的，不算字符串内容
//	//'\0' -转义字符 -ASCLL码值位为0
//	//0 ->数字0
//	//'0' ->字符0  ASCLL码值位为48(数字字符)
//	// EOF - end of file -文件结束标志 -1(负一)
//	return 0;
//}



//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1,num2);
//	printf("max=%d\n", max);
//	if (num1 > num2)
//		printf("较大值是:%d\n", num1);
//	else
//		printf("较大值是:%d\n", num2);
//	return 0;
//}




//#include<string.h> //在使用字符数组时使用
//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6 }; //6*4=24
//	printf("%d\n", sizeof(a)); //4
//	printf("%d\n", sizeof a); //4
//	printf("%d\n", sizeof(int)); //4
//	//printf("%d\n", sizeof int); //err
//	printf("%d\n", sizeof(arr)); //计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //6
//	return 0;
//}




//int main()
//{
//	int a = 0; //4个字节，32bit位
//	int b = ~a; //b是有符号的整型，
//	// ~ -- 按(2进制)位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//原码、反码、补码
//	//负数在内存中存储的时候，存储的是二进制的补码
//	//11111111111111111111111111111111 //补码 (最高位1为负号)
//	//11111111111111111111111111111110 //反码 (补码-1得到反码)
//	//10000000000000000000000000000001 //-1 (符号不变，反码其他位按位取反)
//	printf("%d\n", b); //使用的，打印的是这个数的原码  //b=-1
//
//	return 0;
//}
//只要是整数，内存中存储的都是二进制的补码
//正数--原码，反码，补码  --> 相同
//负数：
//    原码                -->           反码    -->        补码
//直接按照正负       原码的符号位不变          反码+1
//写出的二进制序列   其他位按位取反得到
//例:-2
//10000000000000000000000000000010 - 原码
//11111111111111111111111111111101 - 反码
//11111111111111111111111111111110 - 补码



//int main()
//{
//	int a = 10;
//	//int b = a++; //后置++,先使用，再++  //a=11,b=10
//	//int b = ++a; //前置++，先++，再使用  //a=11,b=11
//	//int b = a--; //后置--，先使用，再--  //a=9,b=10
//	int b = --a; //前置--，先--，再使用   //a=9,b=9
//	printf("a=%d b=%d\n", a, b); 
//	return 0;
//}




//int main()
//{
//	int a = (int)3.14; //double --> int 强制类型转换
//	printf("%d\n", a); //a=3
//	return 0;
//}




//int main()
//{
//	//真 - 非0
//	//假 - 0
//	//&& - 逻辑与  (两个真才为真,一个假为假)
//	//|| - 逻辑或  (一个或两个真为真,两个假为假)
//	int a = 3;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);  //条件操作符(三目运算符)
//	printf("%d\n", max);
//	//上下等价
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	return 0;
//}




//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;    //int z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	arr[4]; //[] - 下标操作引用操作符
//	printf("%d\n", arr[4]);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b); //() -函数调用操作符
//	printf("%d\n", sum);
//	return 0;
//}




////int
////float
////常见关键字
//int main()
//{
//	//register int a =10; //建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	//signed int；
//	unsigned int num = -1;
//	printf("%d\n",num);
//	//struct - 结构体关键字
//	//union - 联合体/共用体
//	return 0; 
//}




//int main()
//{
//	//int float; //err
//	//twpedef - 类型定义 - 类型重定义
//	typedef unsigned int u_int; //给unsigned起别名
//	unsigned int num = 20;
//	u_int num = 20;
//	return 0;
//}




//1.static 修饰局部变量
//局部变量的生命周期变长，出了作用域不再销毁
//void test()
//{
//	static int a = 1; //a 是一个静态的局部变量
//	a++;
//	printf("a=%d\n", a); //输出为：2 3 4 5 6 ， 如果不加static 输出为：2 2 2 2 2
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//2.static 修饰全局变量
//改变了变量的作用域 - 让静态的全局变量只能在自己所在的源文件内部使用
//出了源文件就没法再使用

//int main()
//{
//	//extern - 声明外部符号的
//	extern int g_val1;
//	printf("%d\n", g_val1);
//	return 0;
//}

//3.static修饰函数
//改变了函数的作用域 - 不准确
//static修饰函数改变了函数的链接属性
//外部链接属性 -> 内部链接属性

//声明外部函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



////#define 定义标识符常量
////#define MAX 100
////#define 可以定义宏-带参数
//
////函数的实现
//
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
	//int a = 10;
	//int b = 20;
//	//函数的方式
//	int max = Max(a, b);
//	printf("max=%d\n", max);
	//宏的方式
//	int max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//	return 0;
//}




//指针大小在32位平台是4个字节，64位平台是8个字节  //可以在上方的Debug修改
//int main()
//{
//	int a = 10; //4个字节
//	int* p = &a; //取出a的地址  p是一个变量-指针变量
//	printf("a的地址:%p\n", p);
//	printf("指针p的大小:%d\n", sizeof(p)); //指针p的大小
//	//printf("%d\n", *p); //10
//	*p = 20; // * - 解引用操作符/间接访问操作符
//	printf("a改变后的值:%d\n", a);
//	//有一种变量是用来存放地址的 - 指针变量
//	//printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));    //4
//	printf("%d\n", sizeof(short*));   //4
//	printf("%d\n", sizeof(int*));     //4
//	printf("%d\n", sizeof(double*));  //4
//	return 0;
//}