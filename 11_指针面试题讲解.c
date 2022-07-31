#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//写代码有三种境界
//1.看代码是代码
//2.看代码是内存
//3.看代码是代码

//int main()
//{
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int*)(&a + 1);
//	printf("%d,%d", *(a + 1), *(ptr - 1));
//	return 0;
//}




//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}*p;
//
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test的类型的变量大小是20个字节
//int main()
//{
//	p = (struct Test*)0x100000;
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);  //1048576+1=1048577 0x00100001
//	printf("%p\n", (unsigned int*)p + 0x1);  //
//	return 0;
//}




//int main()
//{
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}




//int main()
//{
//	int a[3][2] = { (0, 1), (2, 3), (4, 5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}




//int main()
//{
//	int a[5][5];
//	int(*p)[4];
//	p = a;  //int(*)[4]  ---  int(*)[5]
//	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	return 0;
//}




//int main()
//{
//	//int arr[10] = { 1,2,3,4,5 };
//	//int* p = arr;
//	//*(p+2) == p[2] == *(arr+2) == arr[2]
//	int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* ptr1 = (int*)(&aa + 1);
//	int* ptr2 = (int*)(*(aa + 1));  //aa[1] - 第二行首元素地址
//	printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));
//	return 0;
//}




//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s\n", *pa);
//	return 0;
//}




//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//	return 0;
//}