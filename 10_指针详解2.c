#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ�� pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*, const char*);
//
////2. дһ������ָ������ pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pfArr[4])(char*, const char*);

//������

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
//	printf("����������������:>");
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
//		printf("��ѡ��:>");
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
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����\n");
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
//	//pfArr ��һ������ָ������ - ת�Ʊ�
//	int(*pfArr[])(int, int) = {0, Add, Sub, Mul, Div, Xor};
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
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
//	int (*p)[10] = &arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������-����ָ�������
//	//ppfArr��һ��ָ��[����ָ������]��ָ��
//	int(*(*ppfArr)[4])(int, int) = &pfArr;
//	//
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int, int)
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
//	//ָ������
//	//int* arr[10];
//	//����ָ��
//	//int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int, int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	//int sum = pAdd(1, 2);
//			//Add(1, 2);
//	//printf("sum = %d\n", sum);
//	//����ָ�������
//	int(*pArr[5])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr)[5])(int, int) = &pArr;
//	
//	return 0;
//}




//void BubbleSort(int arr[], int sz)
//{
//	//...
//}

////qsort - ���������������͵�����
//
//int main()
//{
//	//ð��������
//	//ð��������ֻ��������������
//	int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	BubbleSort(arr, sz);
//	return 0;
//}


//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz-1; i++)
//	{
//		//һ��ð������
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
//	//�Ƚ���������ֵ��
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
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=���Ƚϣ�Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}

//void test3()
//{
//	struct Stu s[3] = { { "zhangsan", 20 }, { "lisi", 30 }, { "wangwu", 10 } };
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//	//��һ���������������������Ԫ�ص�ַ
//	//�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�صĴ�С-��λ���ֽ�
//	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//	//            ����ָ������������ǣ����Ƚϵ�����Ԫ�صĵ�ַ
//	//
//}

////void qsort(void* base, 
////	       size_t num, 
////		   size_t width, 
////		   int( *cmp)(const void *e1, const void *e2)
////		   );

////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����

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
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width, (char*)base+(j+1)*width) > 0)
//			{
//				//����
//				Swap((char*)base + j*width, (char*)base + (j + 1)*width, width);
//			}
//		}
//	}
//}



//void test4()
//{
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
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
//	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
//	//void* ���͵�ָ�� ���ܽ��н����ò���
//	//void* ���͵�ָ�� ���ܽ���+-�����Ĳ���
//
//	return 0;
//}






//int main()
//{
//	//����������Ԫ�صĵ�ַ
//	//1. sizeof(������) - ��������ʾ��������
//	//2. &������ - ��������ʾ��������
//	//
//	//һά����
//	//int a[] = { 1, 2, 3, 4 };  //4*4 = 16
//	//printf("%d\n", sizeof(a));  //sizeof(������)-������������ܴ�С-��λ���ֽ�- 16
//	//printf("%d\n", sizeof(a + 0));  //4/8 - �����������ʾ��Ԫ�ص�ֵ��a+0 ������Ԫ�ص�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n", sizeof(*a));  //4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof(*a)����4
//	//printf("%d\n", sizeof(a + 1));  //4/8 - �����������ʾ��Ԫ�ص�ֵ��a+1 ��2��Ԫ�صĵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n", sizeof(a[1]));  //4 - ��2��Ԫ�صĴ�С
//	//printf("%d\n", sizeof(&a));  //4/8 &aȡ����������ĵ�ַ����������ĵ�ַ��Ҳ�ǵ�ַ����ַ�Ĵ�С����4/8���ֽ�
//	//printf("%d\n", sizeof(*&a));  //16 - &a����ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С��λ���ֽ�
//	//printf("%d\n", sizeof(&a + 1));  //4/8   &a������ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ��������4/8���ֽ�
//	//printf("%d\n", sizeof(&a[0]));  //4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	//printf("%d\n", sizeof(&a[0] + 1));  //4/8  &a[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//
//	//�ַ�����
//	//char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//
//	//printf("%d\n", strlen(arr));  //���ֵ
//	//printf("%d\n", strlen(arr + 0));  //���ֵ
//	////printf("%d\n", strlen(*arr));  //err
//	////printf("%d\n", strlen(arr[1]));  //err
//
//	//printf("%d\n", strlen(&arr));  //���ֵ
//	//printf("%d\n", strlen(&arr + 1));  //���ֵ-6
//	//printf("%d\n", strlen(&arr[0] + 1));  //���ֵ-1
//
//	//printf("%d\n", sizeof(arr));  //sizeof��������������С��6*1 = 6�ֽ�
//	//printf("%d\n", sizeof(arr + 0));  //4/8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ ��ַ�Ĵ�С��4/8�ֽ�
//	//printf("%d\n", sizeof(*arr));  //1   arr����Ԫ�صĵ�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
//	//printf("%d\n", sizeof(arr[1]));  //1
//	//printf("%d\n", sizeof(&arr));  //4/8 &arr ��Ȼ������ĵ�ַ�������ǵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr + 1));  //4/8 &arr+1 ���������������ĵ�ַ����ַ��С��4/8���ֽ�
//	//printf("%d\n", sizeof(&arr[0] + 1));  //4/8 �ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));  //7 sizeof(arr)���������Ĵ�С����λ���ֽڣ�7
//	printf("%d\n", sizeof(arr + 0));  //4/8 ������ǵ�ַ�Ĵ�С - arr+0��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));  //1 *arr����Ԫ�أ�sizeof(*arr)������Ԫ�صĴ�С
//	printf("%d\n", sizeof(arr[1]));  //1 arr[1]�ǵڶ���Ԫ�أ�sizeof(arr[1])������ǵڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&arr));  //4/8  &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ��������4/8���ֽ�
//	printf("%d\n", sizeof(&arr + 1));  //&arr+1���������������ĵ�ַ����Ҳ�ǵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));  //4/8 &arrp[0]+1 �ǵڶ���Ԫ�صĵ�ַ
//
//
//	printf("%d\n", strlen(arr));  //6
//	printf("%d\n", strlen(arr + 0)); //6
//	//printf("%d\n", strlen(*arr));  //err
//	//printf("%d\n", strlen(arr[1]));  //err
//	//printf("%d\n", strlen(&arr));  //6 &arr - ����ĵ�ַ - ����ָ�� char(*p)[7] = &arr;
//	//printf("%d\n", strlen(&arr + 1));  //���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));  //5
//	return 0;
//}


//int main()
//{
//	const char* p = "abcdef";
//	printf("%d\n", sizeof(p));  //4/8 ����ָ�����p�Ĵ�С
//	printf("%d\n", sizeof(p + 1));  //4/8 p+1�õ������ַ�b�ĵ�ַ
//	printf("%d\n", sizeof(*p));  //1 *p�����ַ����ĵ�һ���ַ� - 'a'
//	printf("%d\n", sizeof(p[0]));  //1 int arr[10] == *(arr+0)  p[0] == *(p+0) == 'a'
//	printf("%d\n", sizeof(&p));  //4/8
//	printf("%d\n", sizeof(&p + 1));  //4/8
//	printf("%d\n", sizeof(&p[0] + 1));  //4/8
//
//	printf("%d\n", strlen(p));  //6
//	printf("%d\n", strlen(p + 1));  //5
//	//printf("%d\n", strlen(*p));  //err
//	//printf("%d\n", strlen(p[0]));  //err
//	//printf("%d\n", strlen(&p));  //���ֵ
//	//printf("%d\n", strlen(&p + 1));  //���ֵ
//	printf("%d\n", strlen(&p[0] + 1));  //5
//	return 0;
//}


//int main()
//{
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));  //48
//	printf("%d\n", sizeof(a[0][0]));  //4
//	printf("%d\n", sizeof(a[0]));  //16 a[0]�൱�ڵ�һ����Ϊһά�������������
//	//sizeof(arr[0])����������������sizeof()�ڣ�������ǵ�һ�еĴ�С
//	
//	printf("%d\n", sizeof(a[0] + 1));  //4/8 - a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ����ʵ���ǵ�һ�е�һ��Ԫ�صĵ�ַ
//	//���� a[0] + 1 ���ǵ�һ�еڶ���Ԫ�صĵ�ַ ����ַ��С��4/8���ֽ�
//
//	printf("%d\n", sizeof(*(a[0] + 1)));  //4 - *(a[0] + 1))�ǵ�һ�еڶ���Ԫ�أ���С��4���ֽ�
//	printf("%d\n", sizeof(a + 1));  //4 a�Ƕ�ά�������������û��sizeof(������)��Ҳû��&(������)������a����Ԫ�ص�ַ
//	//���Ѷ�ά���鿴��һά�����ǣ���ά�������Ԫ�������ĵ�һ�У�a���ǵ�һ��(��Ԫ��)�ĵ�ַ
//	//a+1���ǵڶ��еĵ�ַ
//
//	printf("%d\n", sizeof(*(a + 1)));  //16 sizeof(a[1])����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(&a[0] + 1));  //4/8 �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));  //16 ����ڶ��еĴ�С����λ���ֽ�
//	printf("%d\n", sizeof(*a));  //16 a����Ԫ�ص�ַ - ��һ�еĵ�ַ��*a���ǵ�һ�У�sizeof(*a)���ǵ�һ�еĴ�С
//	printf("%d\n", sizeof(a[3]));  //16 
//	return 0;
//}