#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>



//�ڴ溯��
//memccpy() - �ڴ濽��

//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"����",20},{"����",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//	//memcpy(arr4, arr3, sizeof(arr3));
//
//
//	//char* dest, const char*src
//	//strcpy(arr2, arr1);
//
//	return 0;
//}





//memmove()
//C���Ա�׼��
//memcpy ֻҪ���� ���ص����ڴ濽���Ϳ���
//memmove �����ص��ڴ�Ŀ���


//void* my_memmove(void* dest, void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	//if (dest<src || dest>(char*)src + count)
//	//{
//	//	//ǰ->��
//	//}
//	//else
//	//{
//	//	//��->ǰ
//	//}
//
//	if (dest < src)
//	{
//		//ǰ->��
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr+2, arr, 20);
//
//	my_memmove(arr + 2, arr, 20);//�����ڴ��ص��������
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




//memcmp() - �Ƚ��ڴ�
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}




//memset - �ڴ�����
//int main()
//{
//	char arr[10] = "";
//	memset(arr, '#', 10);
//	//����ʾ��
//	//int arr[10] = { 0 };
//	////40���ֽ�
//	//memset(arr, 1, 10);
//}