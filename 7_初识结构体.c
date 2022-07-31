#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//描述一个学生
//struct 结构体关键字 Stu -机构提标签 struct Stu - 结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//} s1, s2, s3;  //s1, s2, s3 是三个全局的结构体变量

//typedef struct Stu  //类型重命名
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;  //Stu是类型
//
//int main()
//{
//	struct Stu s1 = { "旺财", 18, "234567890", "保密" };  //创建结构体变量  局部变量
//	Stu s2 = { "张三", 20, "123456789", "男" };
//
//	return 0;
//}




//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "helloworld\n";
//	struct T t = { "haha", {100,'w',"hello ",3.14}, arr };
//	printf("%s\n", t.ch);
//	printf("%s\n", t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}




//typedef struct Stu  //类型重命名
//{
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "李四", 40, "1234567890", "男" };
//	//打印结构体数据
//	//Print1 和 Print2 哪个更好？
//
//	Print1(s);
//	Print2(&s);
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

//搜索:函数栈帧的创建和销毁


//数据结构:
//---线性数据结构
//顺序表
//链表
//栈
//队列
//---树形数据结构
//二叉树
//---图