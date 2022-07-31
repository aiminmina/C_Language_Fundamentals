#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//C语言是一门 结构化 的程序设计语言
//1.顺序结构
//2.选择结构
//3.循环结构

//int main()
//{
//	int a = 0;
//	; //是语句-空语句
//	return 0;
//}




//if 和 else 有就近原则
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能打王者\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("老老年\n");
//	}
//	//int age = 45;
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else if (age >= 18 && age < 28)
//	//	printf("青年\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("壮年\n");
//	//else if (age >= 50 && age < 90)
//	//	printf("老年\n");
//	//else
//	//	printf("老老年\n");
//	//if (age < 18)
//	//	printf("未成年\n");
//	//else
//	//	printf("成年\n");
//	//if (age < 18)
//	//	printf("未成年\n");
//	return 0;
//}




//int main()
//{
//	int num = 4;
//	if (5 == num);
//	{
//		printf("hehe\n");
//	}
//	//if (num = 5) // = 赋值  == 判断相等
//	//{
//	//	printf("呵呵\n");
//	//}
//	//return 0;
//}




//练习:判断一个数为什么数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("这是一个奇数\n");
//	else if (num == 0)
//		printf("这是一个非奇非偶数\n");
//	else
//		printf("这是一个偶数\n");
//	return 0;
//}

//100以内的奇数
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	//while (i <= 100)
//	//{
//	//	if (i % 2 ==1)
//	//		printf("%d ",i);
//	//	i++;
//	//}
//	return 0;
//}




//switch语法
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //switch(整型表达式)
//{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;     
//	default:       
//		printf("输入错误\n");
//	//在每个switch语句中都放一条default字句是个好习惯，甚至可以在后边再加一个break
//}
//	//{
//	//case 1:      //case 整型常量表达式
//	//	printf("星期1\n");
//	//	break;
//	//case 2:
//	//	printf("星期2\n");
//	//	break;
//	//case 3:
//	//	printf("星期3\n");
//	//	break;
//	//case 4:
//	//	printf("星期4\n");
//	//	break;
//	//case 5:
//	//	printf("星期5\n");
//	//	break;
//	//case 6:
//	//	printf("星期6\n");
//	//	break;
//	//case 7:
//	//	printf("星期天\n");
//	//  break;
//	//}
//	//if (day == 1)
//	//	printf("星期1\n");
//	//else if (day == 2)
//	//	printf("星期2\n");
//	////...
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;  //结束本次循环,跳转到while语句的判断部分
//		printf("%d\n", i);
//	}
//
//	//int i = 1;
//
//	//while (i<=10)
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d\n", i);
//	//	i++;
//	//}
//
//	//while(1)
//	//	printf("hehe\n");
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	//Ctrl + z
//	//EOF - end of file -> -1  文件结束标志
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//
//	//putchar(ch);
//	//printf("%c\n", ch);
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:");
//	scanf("%s", password);  //输入密码，并存放在password数组中
//	//缓冲区还剩余一个'\n'
//	//读取一下'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):");
//	ret = getchar();  //Y/N
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}