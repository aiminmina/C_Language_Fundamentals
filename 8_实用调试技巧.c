#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	system("pause");
//	return 0;
//}

//tsst.c          ��ִ�г���
//Dubug		Debug�汾�Ŀ�ִ�г���		���Ե��ԣ���Ϊ�ļ��а����˵�����Ϣ
//Release   Release�汾�Ŀ�ִ�г���     �����Ե���


//F5 - �������� - ��F9���ʹ��
//�ϵ� F9�л��ϵ�

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10 - i);
//	}
//	
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






//1.ջ����Ĭ��ʹ��:
//��ʹ�øߵ�ַ���Ŀռ�,��ʹ�õ͵�ַ���Ŀռ�
//2.���������±������
//��ַ���ɵ͵��ߵı仯

//��C�����ȱ�ݡ�

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	printf("%p\n", &i);
//	printf("%p\n", arr);
//	//Debug�汾��i��arr��,Release���Ż���arr��i�� 
//	//Release����bug��ʱ�����Ͻ�ͼ��֤��
//
//	//VC6.0 ������ <= 10 ��ѭ��
//	//gcc ������ <= 11 ��ѭ��
//	//vs2013 <=12 ��ѭ��
//	for (i = 0; i <= 12; i++)  //��ѭ��
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}





//�汾1
//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;  //'\0'
//}


//�汾2
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}	
//}


//�汾3
#include<assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);  //����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//�汾4
//void my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);  //����
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//�汾5  --����
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);  //����
//	assert(src != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//#include<string.h>
//int main()
//{
//	//strcpy - �ַ�������
//	char arr1[] = "#############";
//	char arr2[] = "bit";
//	//my_strcpy(arr1, NULL);
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}




//int main()
//{
//	const int num = 10;
//	int n = 100;
//	const int * p = &num;
//	//int * const p = &n;
//	//const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵����ͨ��p���ı�*p(num)��ֵ
//	//const ����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı�
//	
//	//*p = 20;  //err  
//	p = &n;
//	printf("%d\n", num);
//	return 0;
//}





//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);  //��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}