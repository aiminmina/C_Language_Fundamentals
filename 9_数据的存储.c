#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//C语言类型
//1.内置类型
	//整型家族
		//char
			//signed char 有符号的char范围是 -128 -- 127
			//unsigned char 无符号的char范围是 0 -- 225
		//short
		//int
		//long
	//浮点型家族
		//float
		//double
//2.自定义类型
	//构造类型
		//数组类型
		//结构体类型
		//枚举类型
		//联合类型
	//指针类型
	//空类型
		//void




//int mian()
//{
//	int a = 10;  //4
//	float f = 10.0;  //4
//
//	return 0;
//}




//void test(void)
//{
//	printf("hehe\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}




//int main()
//{
//	int a = 20;
//	//00000000000000000000000000010100 - 原码
//	//00000000000000000000000000010100 - 反码
//	//00000000000000000000000000010100 - 补码
//	//0x00000014
//	int b = -10;
//	//10000000000000000000000000001010 - 原码
//	//11111111111111111111111111110101 - 反码
//	//11111111111111111111111111111110 - 补码
//	//0xFFFFFFF6
//	return 0;
//}




//int main()
//{
//	1 - 1;
//	//1+(-1)
//	//00000000000000000000000000000001 - 补码
//	//11111111111111111111111111111111 - 补码
//	//00000000000000000000000000000000
//
//	//00000000000000000000000000000001 - 原码
//	//10000000000000000000000000000001 - 原码
//	//10000000000000000000000000000010 - err
//
//	return 0;
//}




//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	if (*p == 1)
//		return 1;
//	else
//		return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char*p = (char*)&a;
//	//返回1，大端
//	//返回0，小端
//	return *p;
//}
//
//int check_sys()
//{
//	int a = 1;
//	return *(char*)&a;
//}
////指针类型的意义：
////1.指针类型决定了解引用操作符能访问几个字节：cahr*p；*p 访问了1个字节，int *p；*p访问了4个字节
////2.指针类型决定了指针+1，-1，加的或者减的是几个字节；cahr*p;p+1跳过一个字节，int*p；p+1跳过一个整型-4个字节
//
//int main()
//{
//	//写一段代码告诉我们当前机器的字节序是什么
//	//返回1，小端
//	//返回0，大端
//	int ret = check_sys();
//	if (ret == 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//	return 0;
//}




//127 + 1 = -128
//int main()
//{
//	char a = -128;
//	//10000000000000000000000010000000
//	//11111111111111111111111101111111
//	//11111111111111111111111110000000 - 补码
//	//10000000
//	//整型提升
//	//11111111111111111111111110000000 - 补码
//
//	printf("%u\n", a);
//	return 0;
//}




//9.0
//1001.0
//(-1)^0 * 1.001 * 2^3
//(-1)^s *    M   * 2^E
//s - 0
//M - 1.001
//E - 3

//0.1
//(-1)^0 * 1.0 * 2^-1
//S = 0
//M = 1.0
//E = -1
//E + 127 = 126

//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001 - 补码
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);  //9
//	printf("*pFloat的值为：%f\n", *pFloat);  //0.000000
//	//(-1)^0 * 0.00000000000000000001001 *2^-126
//	*pFloat = 9.0;
//	//1001.0
//	//(-1) ^ 0 * 1.0011 * 2 ^ 3
//	//0 10000010 00100000000000000000000
//	printf("num的值为：%d\n", n);  //1091567616
//	printf("*pFloat的值为：%f\n", *pFloat);  //9.000000
//	return 0;
//}


//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//S = 0
//	//M = 1.011
//	//E = 2  //+127=129
//	//01000000101100000000000000000000
//	//0x40b00000
//	return 0;
//}


//9.0
//1001.0
//(-1)^0 * 1.001 * 2^3
//(-1)^s * M     * 2^E
//s - 0
//M - 1.001
//E - 3
//
//0.5
//0.1
//(-1)^0 * 1.0 * 2^-1
//S = 0
//M = 1.0
//E = -1
//E + 127 = 126

//int main()
//{
//	int n = 9;
//	//0 00000000 00000000000000000001001-补码
//	
//	float *pFloat = (float *)&n;
//	printf("n的值为：%d\n", n);//9
//	printf("*pFloat的值为：%f\n", *pFloat);//0.000000
//	//(-1)^0 * 0.00000000000000000001001 * 2^-126
//	
//	*pFloat = 9.0;
//	//1001.0
//	//1.001*2^3
//	//(-1)^0 *1.001 * 2^3
//	//01000001000100000000000000000000
//
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);//9.0
//	return 0;
//}

//int main()
//{
//	float f = 5.5;
//	//5.5
//	//101.1
//	//(-1)^0 * 1.011*2^2
//	//S = 0
//	//M = 1.011 
//	//E = 2
//	//0 10000001 01100000000000000000000
//	//0x40b00000
//	//(-1)^0 * 1.011 * 2^2
//	
//
//	//0 00000000 01100000000000000000000
//	//+/- 0.011 * 2^-126
//	//
//	//0 11111111 01100000000000000000000
//	//E+127 = 255
//	//E = 128
//	//1.xxx * 2^128
//	//表示的正负无穷大的数字
//	
//	return 0;
//}