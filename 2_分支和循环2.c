#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main(){
//	int i = 0;  //��ʼ��
//	while (i < 10)  //�ж�
//	{
//		i++;  //���� 
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d\n", i);
//		//...
//	}
//	return 0;
//}


//forѭ��
//int main()
//{
//	int i = 0;
//	//  ��ʼ��   �ж�   ����
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d\n", i);
//	}
//	return 0;
//}




//forѭ�����Ʊ�����һЩ����:
//1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)  
//			printf("haha\n");
//		printf("hehe\n");
//	}
//	return 0;
//}
//2.����for����ѭ�����Ʊ�����ȡֵ��ȥ"ǰ�պ�����"д��(���Ǿ���)
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//10��ѭ��
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}




//int main()
//{
//	for (;;)                //1.forѭ���ĳ�ʼ�����������ж� ������ʡ��
//	{                         //����:forѭ���� �жϲ��� �����ʡ�ԣ����ж���������:��Ϊ��  
//		printf("�Ǻ�\n");   //2.������Ƿǳ���������Ҫ���ʡ��
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
//}




//do...while()ѭ��
//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//			//break;
//		printf("%d ", i);
//		
//	} while (i <= 10);
//
//	return 0;
//}




//��ϰ
//n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	printf("����n�Ľ׳�,������n: ");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}


//1��+2��+ 3��
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//			//n�Ľ׳�
//		}
//		sum = sum + ret;
//		
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret*n;
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}


//int main()
//{
//	int arr[]={ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	//дһ�����룬��arr����(�����)���ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("�Ҳ���\n");
//	return 0;
//}


//���ֲ����㷨/�۰�����㷨
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//
//	int sz = sizeof(arr) / sizeof(arr[0]);  //����Ԫ�ظ���
//	int left = 0;  //���±�
//	int right = sz - 1;  //���±�
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


#include<string.h>
#include<windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "Welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;  //err
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");  //ִ��ϵͳ�����һ������ -cls -���
//		left++;
//		right--;
//		
//	}
//		printf("%s\n", arr2);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:");
//		scanf("%s", password);
//		if (strcmp(password,"123456")==0)  //== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//
//		printf("�������������,�˳�����");
//	
//	return 0;
//}