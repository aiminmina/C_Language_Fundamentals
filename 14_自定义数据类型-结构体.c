#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//内置类型 - C语言的数据类型
//char、short、int、long、float、double
//复杂对象 复杂类型
//自定义类型:结构体、枚举、联合体


//声明一个结构体类型
//声明一个学生类型，是想通过学生类型来创建学生变量(对象)
//描述学生:属性 - 名字+电话+性别+年龄
//struct Stu                    // --      结构体标签
//{
//	char name[20];  //名字
//	char tele[12];  //电话       --      成员变量
//	char sex[10];  //性别
//	int age;
//}s4,s5,s6;      //全局变量
//
//struct Stu s3;  //全局变量
//
//int main()
//{
//	//创建的结构体变量
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}




//匿名结构体类型
//struct
//{
//	int a;
//	char c;
//}sa;
//
//struct
//{
//	int a;
//	char c;
//}* psa;   //结构体指针
//
//int main()
//{
//	//psa = &sa;  //err  编译器会把上面两个声明当成完全不同的两个类型
//	return 0;
//}




//结构体的自引用
//struct Node
//{
//	int data;  //4  数据域
//	//struct Node n;  //err
//	struct Node* next;  //4/8  指针域
//};
//
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}





//结构体重命名
//typedef struct Node
//{
//	int data;  
//	struct Node* next;  
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	return 0;
//}




//结构体变量的定义和初始化
//struct T
//{
//	double weight;
//	short age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	//struct S s = { 'c',100,3.14,"hello bit" };  //初始化
//	struct S s = { 'c',{55.6,30},100,3.14,"hello bit" };
//	printf("%c %d %lf %s\n", s.c, s.a, s.d, s.arr);
//	printf("%lf\n", s.st.weight, s.st.age);
//	return 0;
//}




//结构体内存对齐 (重点、考点)
//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//
//
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", (int)sizeof(s1));  //12
//	struct S2 s2 = { 0 };
//	printf("%d\n", (int)sizeof(s2));  //8
//	return 0;
//}




//修改默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//};
//#pragma pack()
////取消设置的默认对齐数
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}





#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	//offsetof();  //宏
//	printf("%d\n", (int)offsetof(struct S, c));
//	printf("%d\n", (int)offsetof(struct S, i));
//	printf("%d\n", (int)offsetof(struct S, d));
//	return 0;
//}




//结构体传参
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//
////传值
//Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
//
//Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
////传址 (更好)
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);
//	Print1(s);
//	Print2(&s);
//	//s.a = 100;
//	//s.c='w';
//	//s.d = '3.14';
//	//printf("%d\n", s.a);
//}