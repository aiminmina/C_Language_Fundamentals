#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<assert.h>
#include<stdio.h>

//int main()
//{
//	int a = 0;
//	int b = 0;	
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d b=%d c=%d d=%d e=%d ", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}




//int main()
//{
//	//����ռ�
//	int* p = (int*) malloc(10 * sizeof(int));
//	//ʹ�ÿռ�
//	//
//	//�ͷſռ�
//	free(p);
//	p = NULL;
//	return 0;
//}




//��Ŀ���ݣ�
//ʵ��һ�����������������ַ����е�k���ַ���
//���磺
//ABCD����һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB
//
//��ת�ַ���

//������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr!=NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ���ַ�
//		//1.
//		char tmp = *arr;
//		//2.
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3.
//		*(arr + len - 1) = tmp;
//	}
//}

//������ת��
//abcdef
//bafedc
//cdefab

//�����ַ����ĺ���
//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr + k - 1);  //�������
//	reverse(arr + k, arr + len - 1);  //�����ұ�
//	reverse(arr, arr + len - 1);  //��������
//}
//
//
//
////int main()
////{
////	char arr[] = "abcdef";
////	left_move(arr, 2);
////	printf("%s\n", arr);
////	return 0;
////}
//
//
////int is_left_move(char* s1, char* s2)
////{
////	int len = strlen(s1);
////	int i = 0;
////	for (i = 0; i < len; i++)
////	{
////		left_move(s1, 1);
////		int ret = strcmp(s1, s2);
////		if (ret == 0)
////			return 1;
////	}
////	return 0;
////}
//
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	// strcat
//	// strncat
//	//strcat(str1, str1);  //err
//	strncat(str1, str1, len1);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr - ���Ӵ���
//	char * ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//
//int main()
//{
//	char arr1 [20] = "abcdef";
//	char arr2 []= "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}




//��Ŀ���ƣ�
//���Ͼ���
//��Ŀ���ݣ�
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ�
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
//Ҫ��ʱ�临�Ӷ�С��O(N);

//int FindNUm(int arr[3][3], int k, int* row, int* col)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x <= *row - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	//�����Ͳ���
//	int ret = FindNUm(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��ǣ�%d %d\n", x, y);
//	}
//		else
//			printf("�Ҳ���\n");
//	return 0;
//}