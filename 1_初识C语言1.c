#define _CRT_SECURE_NO_WARNINGS 1

//包含一个叫stdio.h的文件
//std-标准standard input output

#include<stdio.h>

//int 是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()//主函数-程序的入口-main函数有且只有一个
//{
//	//这里完成任务
//	//在屏幕上输出hello world
//	//函数-print function -printf - 打印函数
//	//库函数-C语言本身提供我们使用的函数
//	//别人的东西-打招呼
//	//#include
//	printf("hello world\n");
//	return 0;//返回 0
//}




//char-字符类型
//%d -打印十进制有符号数字
//%u - 打印十进制无符号整数
//%c -打印字符
//%f -打印浮点数字-小数
//%p -以地址的形式打印
//%x -打印16进制数字
//%lf -打印double类型
//%o ...




//int main()
//{
//	//char ch = 'A';//内存
//	//printf("%c\n",ch);//%c -打印字符格式的数据
//	//20
//	//short int -短整型
//	//int -整型
//	//int age = 20;
//	//printf("%d\n", age);//%d -打印整型十进制数据
//	//long 长整型
//	//long num = 100;
//	//printf("%d\n",num);
//	//float f = 5.0;
//	//printf("%f\n", f); //float -单精度浮点数
//	//double d = 3.14;
//	//printf("%lf\n",d); //double -双精度浮点数
//	return 0;
//}




//计算机中单位
//bit -比特位 一个比特位可以存1或者0
//byte -字节 1字节=8比特位的大小
//kb  mb  gb  tb  pb 1字节=1024kb 1kb=1024mb 以此类推
//二进制 0 1
//十进制 0 1 2 3 4 5 6 7 8 9

//int main()
//{
//	printf("%d\n", sizeof(char));//  1个字节
//	printf("%d\n", sizeof(short));//  2个字节
//	printf("%d\n", sizeof(int));//  4个字节
//	printf("%d\n", sizeof(long));//  4/8个字节 C语言标准规定 sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));//  8个字节
//	printf("%d\n", sizeof(float));//  4个字节
//	printf("%d\n", sizeof(double));//  8个字节
//	return 0;
//}




//int main()
//{
//	//年龄
//	//20
//	short age = 20;//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;//向内存申请4个字节，存放小数  95.6编译器默认为double类型可能会报警告，末尾加f可解决
//	printf("%f\n",weight); //95.599998
//	return 0;
//}




//int num2 = 20;//全局变量-定义在代码块({})之外的变量
//
//int main()
//{
//	int num = 10;//局部变量-定义在代码块({})之内的变量
//
//	return 0;
//}




//int a = 100;
//
//int main()
//{
//	int a = 10;
//	//局部变量和全局变量的名字建议不要相同-容易误会，产生bug
//	//当局部变量和全局变量的名字相同的时候，局部变量优先
//	printf("%d\n", a);
//
//	return 0;
//}




//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);    //err
//	return 0;
//}




//int main()
//{
//	//计算2个数的和
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf  //相当于python的input
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	//int sum = 0;
//	//C语言语法规定，变量要定义在当前代码块的最前面，所以上行要放在前面
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}




//int main()
//{
//	{
//		int num = 0;
//		printf("num=%d\n", num);  //局部变量的作用域是在变量所在的局部范围
//	}
//	return 0;
//}




//全局变量的作用域是整个工程
//
//int global = 2020;
//
//void test()
//{
//	printf("test()-- %d\n", global); //函数
//}
//
//int main()
//{
//	test();
//	printf("%d\n",global);
//	return 0;
//}

//全局变量的生命周期:整个程序的生命周期

//int main()
//{	
//	//未声明的标识符
//	//声明extern外部符号的
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}




////局部变量的生命周期:进入作用域生命周期开始，出作用域生命周期结束
//
//int main()
//{
//	{
//		int a = 10;  
//		printf("a=%d\n", a);//ok    
//	}
//	//printf("a=%d\n", a);//error
//	return 0;
//}
