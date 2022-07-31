#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针 pf，能够指向my_strcpy
//char* (*pf)(char*, const char*);
//
////2. 写一个函数指针数组 pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);

//计算器

// void menu()
// {
// 	printf("**************************\n");
// 	printf("**  1. add       2. sub **\n");
// 	printf("**  3. mul       4. div **\n");
// 	printf("**  5. xor       0. exit**\n");
// 	printf("**************************\n");
// }

// int Add(int x, int y)
// {
// 	return x + y;
// }

// int Sub(int x, int y)
// {
// 	return x - y;
// }

// int Mul(int x, int y)
// {
// 	return x * y;
// }

// int Div(int x, int y)
// {
// 	return x / y;
// }

// int Xor(int x, int y)
// {
// 	return x ^ y;
// }
//
//
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//
//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//}





//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//
//	//pfArr 是一个函数指针数组 - 转移表
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor};
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//}






//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组-函数指针的数组
//	//ppfArr是一个指向[函数指针数组]的指针
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr 是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针 int(*)(int, int)
//	//
//	return 0;
//}





//void print(char *str)
//{
//	printf("hehe:%s", str);
//}
//
//void test( void (*p)(char*) )
//{
//	printf("test\n");
//	p("bit");
//}

//int main()
//{
//
//	test(print);
//
//	return 0;
//}





//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//指针数组
//	//int* arr[10];
//	//数组指针
//	//int* (*pa)[10] = &arr;
//	//函数指针
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//			//Add(1, 2);
//	//printf("sum = %d\n", sum);
//	//函数指针的数组
//	int(*pArr[5])(int, int);
//	//指向函数指针数组的指针
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	
//	return 0;
//}




//void BubbleSort(int arr[], int sz)
//{
//	//...
//}

////qsort - 可以排序任意类型的数据
//
//int main()
//{
//	//冒泡排序函数
//	//冒泡排序函数只能排序整形数组
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		//一趟冒泡排序
//		int j = 0;
//		for (j = 0; j <sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//struct Stu
//{
//	char name[20];
//	int age;
//};




//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整形值的
//	return *(int*)e1 -*(int*)e2;
//}
//
//void test1()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//int cmp_float(const void*e1, const void*e2)
//{
//	if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;
//
//	return ((int)(*(float*)e1 - *(float*)e2));
//}

//void test2()
//{
//	float f[] = { 9.0, 8.0, 7.0, 6.0, 5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_name(const void*e1, const void* e2)
//{
//	//比较名字就是比较字符串
//	//字符串比较不能直接用><=来比较，应该用strcmp函数
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}

//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//第一个参数：待排序数组的收元素地址
//	//第二个参数：待排序数组的元素个数
//	//第三个参数：待排序数组的每个元素的大小-单位是字节
//	//第四个参数：是函数指针，比较两个元素的所用函数的地址-这个函数使用者自己实现
//	//            函数指针的两个参数是：待比较的两个元素的地址
//	//
//}

////void qsort(void* base, 
////	       size_t num, 
////		   size_t width, 
////		   int( *cmp)(const void *e1, const void *e2)
////		   );

////实现bubble_sort函数的程序员，他是否知道未来排序的数据类型-不知道
////那程序员也不知道，待比较的两个元素的类型

//void Swap(char* buf1, char*buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}

//void bubble_sort(void*base, int sz, int width, int (*cmp)(void*e1, void*e2))
//{
//	int i = 0;
//	//趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟比较的对数
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//两个元素的比较
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				//交换
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}



//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较待排序数组中的元素
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//
//void test5()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}

//int main()
//{
//	
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	test5();
////	bubble_sort(arr, sz);
//
////	bubble_sort(f, sz);
//
//	return 0;
//}





//int main()
//{
//	int a = 10;
//	//int* pa = &a;//
//	//char* pc = &a;
//
//	//char ch = 'w';
//	void* p = &a;
//	//*p = 0;
//	//p++;
//
//	//p = &ch;
//	//void* 类型的指针 可以接收任意类型的地址
//	//void* 类型的指针 不能进行解引用操作
//	//void* 类型的指针 不能进行+-整数的操作
//
//	return 0;
//}






//int main()
//{
//	//数组名是首元素的地址
//	//1. sizeof(数组名) - 数组名表示整个数组
//	//2. &数组名 - 数组名表示整个数组
//	//
//	//一维数组
//	//int a[] = { 1, 2, 3, 4 };  //4*4 = 16
//	//printf("%d\n", sizeof(a));  //sizeof(数组名)-计算的是数组总大小-单位是字节- 16
//	//printf("%d\n", sizeof(a + 0));  //4/8 - 数组名这里表示收元素的值，a+0 还是首元素地址，地址的大小就是4/8个字节
//	//printf("%d\n", sizeof(*a));  //4 - 数组名表示首元素地址，*a就是首元素，sizeof(*a)就是4
//	//printf("%d\n", sizeof(a + 1));  //4/8 - 数组名这里表示收元素的值，a+1 第2个元素的地址，地址的大小就是4/8个字节
//	//printf("%d\n", sizeof(a[1]));  //4 - 第2个元素的大小
//	//printf("%d\n", sizeof(&a));  //4/8 &a取出的是数组的地址，但是数组的地址那也是地址，地址的大小就是4/8个字节
//	//printf("%d\n", sizeof(*&a));  //16 - &a数组的地址，数组的地址解引用访问的数组，sizeof计算的就是数组的大小单位是字节
//	//printf("%d\n", sizeof(&a + 1));  //4/8   &a是数组的地址，&a+1虽然地址跳过整个数组，但还是地址，所以是4/8个字节
//	//printf("%d\n", sizeof(&a[0]));  //4/8 &a[0]是第一个元素的地址
//	//printf("%d\n", sizeof(&a[0] + 1));  //4/8  &a[0]+1 是第二个元素的地址
//
//	//字符数组
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", strlen(arr));  //随机值
//	//printf("%d\n", strlen(arr + 0));  //随机值
//	////printf("%d\n", strlen(*arr));  //err
//	////printf("%d\n", strlen(arr[1]));  //err
//
//	//printf("%d\n", strlen(&arr));  //随机值
//	//printf("%d\n", strlen(&arr + 1));  //随机值-6
//	//printf("%d\n", strlen(&arr[0] + 1));  //随机值-1
//
//	//printf("%d\n", sizeof(arr));  //sizeof计算机的是数组大小，6*1 = 6字节
//	//printf("%d\n", sizeof(arr + 0));  //4/8 arr是首元素的地址，arr+0还是首元素的地址 地址的大小是4/8字节
//	//printf("%d\n", sizeof(*arr));  //1   arr是首元素的地址，*arr就是首元素，首元素是字符大小是一个字节
//	//printf("%d\n", sizeof(arr[1]));  //1
//	//printf("%d\n", sizeof(&arr));  //4/8 &arr 虽然是数组的地址，但还是地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr + 1));  //4/8 &arr+1 是跳过整个数组后的地址，地址大小是4/8个字节
//	//printf("%d\n", sizeof(&arr[0] + 1));  //4/8 第二个元素的地址
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));  //7 sizeof(arr)计算的数组的大小，单位是字节：7
//	printf("%d\n", sizeof(arr + 0));  //4/8 计算的是地址的大小 - arr+0首元素的地址
//	printf("%d\n", sizeof(*arr));  //1 *arr是首元素，sizeof(*arr)计算首元素的大小
//	printf("%d\n", sizeof(arr[1]));  //1 arr[1]是第二个元素，sizeof(arr[1])计算的是第二个元素的大小
//	printf("%d\n", sizeof(&arr));  //4/8  &arr虽然是数组的地址，但也是地址，所以是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));  //&arr+1是跳过整个数组后的地址，但也是地址
//	printf("%d\n", sizeof(&arr[0] + 1));  //4/8 &arrp[0]+1 是第二个元素的地址
//
//
//	printf("%d\n", strlen(arr));  //6
//	printf("%d\n", strlen(arr + 0)); //6
//	//printf("%d\n", strlen(*arr));  //err
//	//printf("%d\n", strlen(arr[1]));  //err
//	//printf("%d\n", strlen(&arr));  //6 &arr - 数组的地址 - 数组指针 char(*p)[7] = &arr;
//	//printf("%d\n", strlen(&arr + 1));  //随机值
//	printf("%d\n", strlen(&arr[0] + 1));  //5
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";
//	printf("%d\n", sizeof(p));  //4/8 计算指针变量p的大小
//	printf("%d\n", sizeof(p + 1));  //4/8 p+1得到的是字符b的地址
//	printf("%d\n", sizeof(*p));  //1 *p就是字符串的第一个字符 - 'a'
//	printf("%d\n", sizeof(p[0]));  //1 int arr[10] == *(arr+0)  p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));  //4/8
//	printf("%d\n", sizeof(&p + 1));  //4/8
//	printf("%d\n", sizeof(&p[0] + 1));  //4/8
//
//	printf("%d\n", strlen(p));  //6
//	printf("%d\n", strlen(p + 1));  //5
//	//printf("%d\n", strlen(*p));  //err
//	//printf("%d\n", strlen(p[0]));  //err
//	//printf("%d\n", strlen(&p));  //随机值
//	//printf("%d\n", strlen(&p + 1));  //随机值
//	printf("%d\n", strlen(&p[0] + 1));  //5
//	return 0;
//}


//int main()
//{
//	//二维数组
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));  //48
//	printf("%d\n", sizeof(a[0][0]));  //4
//	printf("%d\n", sizeof(a[0]));  //16 a[0]相当于第一行作为一维数组的数组名，
//	//sizeof(arr[0])把数组名单独放在sizeof()内，计算的是第一行的大小
//	
//	printf("%d\n", sizeof(a[0] + 1));  //4/8 - a[0]是第一行的数组名，数组名此时是首元素的地址，其实就是第一行的一个元素的地址
//	//所以 a[0] + 1 就是第一行第二个元素的地址 ，地址大小是4/8个字节
//
//	printf("%d\n", sizeof(*(a[0] + 1)));  //4 - *(a[0] + 1))是第一行第二个元素，大小是4个字节
//	printf("%d\n", sizeof(a + 1));  //4 a是二维数组的数组名，没有sizeof(数组名)，也没用&(数组名)，所以a是首元素地址
//	//而把二维数组看成一维数组是，二维数组的首元素是它的第一行，a就是第一行(首元素)的地址
//	//a+1就是第二行的地址
//
//	printf("%d\n", sizeof(*(a + 1)));  //16 sizeof(a[1])计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(&a[0] + 1));  //4/8 第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));  //16 计算第二行的大小，单位是字节
//	printf("%d\n", sizeof(*a));  //16 a是首元素地址 - 第一行的地址，*a就是第一行，sizeof(*a)就是第一行的大小
//	printf("%d\n", sizeof(a[3]));  //16 
//	return 0;
//}