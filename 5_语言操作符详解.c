#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//对于移动运算符，不要移动负数位，这个是标准未定义的 ，只能作用于整数
//右移操作符
//1.算术右移
//右边丢弃，左边补原符号位
//2.逻辑右移
//右边丢弃，左边补0
//当前编译器采用的是算术右移

//int main()
//{
//	int a = 16;
//	//>> -- 右移操作符
//	//移动的是二进制位
//	//00000000000000000000000000010000
//	//
//	int b = a >> 1;
//	printf("%d\n", b);
//	return 0;
//}


//int main()
//{
//	int a = -1;
//	//
//	//整数的二进制表示有:原码、反码、补码
//	//存储到内存的是补码
//	//100000000000000000000000000000001 - 原码
//	//111111111111111111111111111111110 - 反码
//	//111111111111111111111111111111111 - 补码
//	//
//	int b = a >> 2;
//	printf("%d\n", b);
//	return 0;
//}




//左移操作符
//左边丢弃，右边补0
//int main()
//{
//	int a = -15;
//	int b = a << 1;
//	//000000000000000000000000000000101
//	printf("%d\n", b);
//	return 0;
//}




//位操作符
//int main()
//{
//	//& - 按2进制位与
//	//int a = 3;
//	//int b = 5;
//	//int c = a&b;
//	////00000000000000000000000000000011
//	////00000000000000000000000000000101
//	////00000000000000000000000000000001
//	//printf("%d\n", c);
//
//	//| - 按2进制位或
//	//int a = 3;
//	//int b = 5;
//	//int c = a | b;
//	////00000000000000000000000000000011
//	////00000000000000000000000000000101
//	////00000000000000000000000000000111
//	//printf("%d\n", c);
//
//	//^ - 按2进制位异或
//	//相同为0，相异为1
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	//00000000000000000000000000000011
//	//00000000000000000000000000000101
//	//00000000000000000000000000000110
//	printf("%d\n", c);
//	
//	return 0;
//}




//不用临时变量调换a,b位置
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//加减法 - 可能溢出
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	//异或的方法
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	return;
//}




//求一个整数存储在内存中的二进制的1的个数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	//统计num的补码中有几个1
//
//	//while (num)
//	//{
//	//	if (num % 2 == 1)
//	//		count++;
//	//	num = num / 2;
//	//}
//
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}




//复合操作符
//int main()
//{
//	int a = 10;
//	a = a + 2;
//	a += 2;  //复合赋值符
//	
//	a = a >> 1;
//	a >>= 1;
//
//	a = a & 1;
//	a &= 1;
//	return 0;
//}





//int main()
//{
//	//int a = 0;
//	////~ 按(2进制)位取反
//	////00000000000000000000000000000000
//	////11111111111111111111111111111111  - 补码
//	////11111111111111111111111111111110  - 反码
//	////10000000000000000000000000000001  - 原码
//	//printf("%d\n", ~a);  //-1
//
//	int a = 11;
//	a = a | (1 << 2);  //15
//	printf("%d\n", a);
//	a = a&(~(1 << 2));  //11
//	printf("%d\n", a);
//	//0000000000000000000000000000001011
//	//0000000000000000000000000000000100
//	//1<<2;
//	//0000000000000000000000000000000001
//
//	//0000000000000000000000000000001111
//	//1111111111111111111111111111111011
//	//0000000000000000000000000000000100
//	//0000000000000000000000000000001011
//
//	return 0;
//}




//逻辑运算符
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a&&b;
//	printf("%d\n",c);
//	return 0;
//}



//学生
//创建了一个勾结构体类型 - struct Stu
//struct Stu
//{
//	//成员变量
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//使用struct Stu这个类型创建了一个学生对象s1,并初始化
//	struct Stu s1 = { "张三", 20, "20210818" };
//	struct Stu* ps = &s1;
//	printf("%s\n%d\n", ps->name, ps->age);
//	//结构体指针->成员名
//	/*printf("%s %d", (*ps).name, (*ps).age);*/  //啰嗦
//	printf("%s %d %s\n", s1.name,s1.age,s1.id);
//	//结构体变量.成员名
//	return 0;
//}




//整型提升
//int main()
//{
//	char a = 3;
//	//000000000000000000000000000000000011
//	//00000011 - a
//
//	char b = 127;
//	//000000000000000000000000000001111111
//	//01111111 - b
//	
//	//a和b如何相加
//	//000000000000000000000000000000000011
//	//000000000000000000000000000001111111
//	//000000000000000000000000000010000010
//	char c = a + b;
//	//10000010 - c
//	//111111111111111111111111111110000010 - 补码
//	//111111111111111111111111111110000001 - 反码
//	//100000000000000000000000000001111110 - 原码
//
//	printf("%d\n", c);  //-126
//	return 0;
//}