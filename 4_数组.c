#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//1.strlen �� sizeofû�й���
//2.strlen �����ַ������ȵ�-ֻ������ַ����󳤶� - �⺯�� -��ʹ����ͷ�ļ�
//3.sizeof ������������顢���͵Ĵ�С-��λ���ֽ� - ������

//һά����
// int main()
// {
// 	////����һ������ - ������� - 10��
// 	//int arr[10] = {1,2,3};   //����ȫ��ʼ�� ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
// 	//char arr2[5] = {'a',98};  //98��˹����ֵΪb
// 	//char arr3[5] = "ab";  //ok  ������0��\0

// 	char arr4[] = "abcdef";

// 	printf("%d\n", sizeof(arr4));  //7
// 	//sizeof ��¼ arr4��ռ�ռ�Ĵ�С
// 	//7��Ԫ��-char 7 * 1 = 7
	
// 	printf("%d\n", strlen(arr4));  //6
// 	//strlen ���ַ����ĳ���-'\0'֮ǰ���ַ�����
// 	//[a b c d e f \0]
// 	//6

// 	//int ch[n];  //err
// 	return 0;
// }


//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c'};
//	printf("%d\n", sizeof(arr1));  //4  
//	printf("%d\n", sizeof(arr2));  //3
//	printf("%d\n", strlen(arr1));  //3
//	printf("%d\n", strlen(arr2));  //���ֵ  �Ҳ���\0
//	return 0;
//}




//int main()
//{
//	//char arr[] = "abcdef";  //[a][b][c][d][e][f][\0]
//	////printf("%c\n", arr[3]);
//	//int i = 0;
//	//int len = strlen(arr);
//	//for (i = 0; i < len ; i++)
//	//{
//	//	printf("%c ", arr[i]);
//	//}
//
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//һλ����Ĵ洢
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//		for (i = 0; i < sz; i++)
//		{
//			printf("&arr[%d] = %p\n", i ,&arr[i]);
//		}
//		//�������ڴ���ʽ������ŵ�
//	return 0;
//}




//��ά����
//�����±궼��0��ʼ
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//	// 1 2 3 0
//	// 4 5 0 0
//	// 0 0 0 0
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	//char ch[5][6];
//	//int arr[] = { 1, 2, 3, 4 };
//	//int arr[][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }};  //��ά������в���ʡ�ԣ��п���
//	return 0;
//}




//��ά����Ĵ洢
//int main()
//{
//	int arr[3][4] = { { 1, 2, 3 }, { 4, 5 } };
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]%p\n",i,j,&arr[i][j]);
//		}
//	}
//	//��λ����Ҳ�������洢��
//	return 0;
//}




//void bubble_cort(int arr[],int sz)
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;  //������һ��Ҫ����������Ѿ�����
//		//ÿ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;  //���������������ʵ����ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//
//}
//
//int main()
//{
//	int arr[] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ &arr[0]
//	bubble_cort(arr,sz);  //ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}




//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
//	printf("%p\n",arr);  //������Ԫ�صĵ�ַ
//	printf("%p\n", arr+1); 
//
//	printf("%p\n", &arr[0]);  //������Ԫ�صĵ�ַ
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);  //����ĵ�ַ
//	printf("%p\n", &arr+1);
//
//
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//1.sizeof(������)  --  ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//	//2.&�������������������������飬&��������ȡ��������������ĵ�ַ
//
//	//printf("%p\n", arr);
//	//printf("%p\n", &arr[0]);
//	//printf("%d\n", *arr);
//	return 0;
//}