#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>


//1.����һ������
//int a=10;  //�ֲ����� - ջ��
//int g_a=10;  //ȫ�ֱ��� - ��̬��

//2.����һ������
//int arr1[10];  //�ֲ����� - ջ��
//int arr2[10];  //ȫ�ֱ��� - ��̬��


//struct S
//{
//	char name[20];
//	int age
//};
//
//int main()
//{
//	struct S arr[50];  //50��struct S ���͵�����
//	//30 - �˷�
//	//60 - ����
//	return 0;
//}

//C�����ǿ��Դ����䳤���� - C99��������  VS��֧��C99 gcc֧��C99��׼
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];
//	return 0;
//}





//malloc();  //��̬���ٿռ�
//free();  //�ͷŶ�̬���ٵĿռ�
//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(10 * sizeof(int));  //INT_MAX
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i; 
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;  //����Ϊ��ָ��
//	return 0;
//}





//calloc();  //��̬���ٿռ�
//int main()
//{
//	//malloc(10*sizeof(int));
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}	
//	}
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}





//realloc  //������̬�����ڴ�ռ�Ĵ�С
//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}	
//	}
//
//	//ֻ����ʹ��malloc���ٵ�20���ֽڿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ���ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵĿռ�
//	
//	//reallocʹ�õ�ע������:
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//����һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����鿽���������ͷžɵ��ڴ�ռ�
//	//��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
//
//	int*ptr = realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//        int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
//	int* p = realloc(NULL, 40);  //malloc(40)
//	return 0;
//}






//err��д��
//int main()
//{
//	//1.��NULL���н����ò���
//	//int* p = (int*)malloc(40);
//	////����mallocʧ���ˣ�p�ͱ���ֵΪNULL
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	//free(p);
//	//p=NULL;
//
//	//3.�ԷǶ�̬�����ڴ���ͷ�
//	//int a = 10;
//	//int* p = &a;
//	//*p = 20;
//	//free(p);
//	//p = NULL;
//	 
//	//4.ʹ��free�ͷŶ�̬�ڴ濪���ڴ��һ����
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////���տռ�
//	////ʹ��free�ͷŶ�̬�ڴ濪���ڴ��һ����
//	//free(p);
//	//p = NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	//p = NULL;  //���б�Ҫ
//	////...
//	//free(p);  //�ͷſ�ָ�����û��
//
//	//6.�Զ�̬�����ڴ������ͷ�(�ڴ�й¶)
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//
//	return 0;
//}





//������

// 1.���д���������ֱ���������
// 2.��������ڴ�й¶������
// str��ֵ���ݵ���ʽ��p
// p��GetMemory�������βΣ�ֻ�ں����ڲ���Ч
// ��GetMemory��������֮�󣬶�̬�����ڴ���δ�ͷ�
// �����޷��ҵ������Ի�����ڴ�й¶
//void GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����1
//void GetMemory(char **p)
//{
//	*p = (char *)malloc(100);
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//����2
//char* GetMemory(char *p)
//{
//	p = (char *)malloc(100);
//	return p;
//}
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//
//	free(str);
//	str = NULL;
//}
//
//int main()
//{
//	Test();
//	return 0;
//}