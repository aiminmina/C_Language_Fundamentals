#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strlen
//1.�������ķ���
// 
//size_t == unsigned int
//my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//
//	while (*str != '/0')  //while(*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////2.�ݹ�
//
////3.ָ��-ָ��
//int main()
//{
//	//int len = my_strlen("abcdef");
//	//// ����ʾ��
//	////char arr[] = { 'a','b','c','d','e','f' };
//	////int len = strlen(arr);
//	//printf("%d\n", len);
//       
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//		printf("haha\n");
//	return 0;
//}




//strcpy
//char* my_strcpy(char* dest,const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	//�����ʾ��
//	//char *arr1[] = "abcdefg";
//	//char arr2[] = "bit";
//	//����ʾ��
//	//char arr2[] = { 'a','b','c' };
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}




//strcat
//char* my_strcat(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[20] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}




//strcmp
//int main()
//{
//	//VS
//	//��һ���ַ������ڵڶ����ַ������򷵻ش���0������
//	// ��һ���ַ������ڵڶ����ַ������򷵻�0
//    //��һ���ַ���С�ڵڶ����ַ������򷵻�С��0������
//	//LINUX-gcc (���ذ�˹����ֵ�Ĳ�ֵ)
//	// > > 0
//	// = = 0
//	// < < 0
//
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);
//
//	if (strcmp(p1, p2) > 0)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1==p2\n");
//	}
//	else if (strcmp(p1, p2) < 0)
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//}


//char* my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;  //���
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;  //����
//	else
//		return -1;  //С��
//}

//char* my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;  //���
//		}
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	return 0;
//}





//strncpy
//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 9);
//	printf("%s\n", arr1);
//	return 0;
//}




//strncat
// int main()
// {
// 	char arr1[30] = "abcdef";
// 	char arr2[] = "world";
// 	strncat(arr1, arr2, 3);
// 	printf("%s\n", arr1);
// 	return 0;
// }




//strncmp
//int main()
//{
//	//strncmp - �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//	return 0;
//}




//strstr - �����ַ���

//NULL -- ��ָ��
//NUL��Null -- '\0'

//KMP �㷨
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//		while (*s1 && *s2 && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;  //�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;  //�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("�Ӵ�������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}





//strtok
//int main()
//{
//	//192.168.1.1
//	//192 168 1 1 - strtok
//	//z@qq.com
//	//z qq com
//	
//	//char arr[] = "zxc@qq.com";
//	//char* p = "@.";
//	//���ʮ���Ƶı�ʾ��ʽ
//	char arr[] = "192.168.1.1";
//	char* p = ".";
//
//	//zxc@qq.com
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//�и�buf�е��ַ���
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n",ret);
//	}
//	//char* ret = strtok(arr, p);
//	//printf("%s ", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s ", ret);
//
//	//ret = strtok(NULL, p);
//	//printf("%s ", ret);
//	return 0;
//}




#include<errno.h>
//strerror - �Ѵ����뷵�ش�����Ϣ
//int main()
//{
//	//������ ������Ϣ
//	//0    - NO error
//	//1    - Operation not permitted
//	//2    - No such file or directory
//	//...
//
//	//errno ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//	
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}




#include<ctype.h>
//�ַ����ຯ��
//int main()
//{
//	char ch = '99';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}




//�ַ�ת������
//tolower()  //��дתСд
//toupper()  //Сдת��д
//int main()
//{
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//
//	char arr[] = "I Am A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if(isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}