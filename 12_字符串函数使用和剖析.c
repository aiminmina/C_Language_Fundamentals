#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//strlen
//1.计数器的方法
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
////2.递归
//
////3.指针-指针
//int main()
//{
//	//int len = my_strlen("abcdef");
//	//// 错误示范
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
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	//错误的示范
//	//char *arr1[] = "abcdefg";
//	//char arr2[] = "bit";
//	//错误示范
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
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
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
//	//第一个字符串大于第二个字符串，则返回大于0的数字
//	// 第一个字符串等于第二个字符串，则返回0
//    //第一个字符串小于第二个字符串，则返回小于0的数字
//	//LINUX-gcc (返回阿斯科码值的差值)
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
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;  //相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;  //大于
//	else
//		return -1;  //小于
//}

//char* my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;  //相等
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
//	//strncmp - 字符串比较
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3);
//	printf("%d\n", ret);
//	return 0;
//}




//strstr - 查找字符串

//NULL -- 空指针
//NUL、Null -- '\0'

//KMP 算法
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
//			return cur;  //找到子串
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;  //找不到子串
//}
//
//int main()
//{
//	char* p1 = "abcdefabcdef";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("子串不存在\n");
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
//	//点分十进制的表示方式
//	char arr[] = "192.168.1.1";
//	char* p = ".";
//
//	//zxc@qq.com
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
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
//strerror - 把错误码返回错误信息
//int main()
//{
//	//错误码 错误信息
//	//0    - NO error
//	//1    - Operation not permitted
//	//2    - No such file or directory
//	//...
//
//	//errno 是一个全局的错误码的变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
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
//字符分类函数
//int main()
//{
//	char ch = '99';
//	//int ret = islower(ch);
//	int ret = isdigit(ch);
//	printf("%d\n", ret);
//	return 0;
//}




//字符转换函数
//tolower()  //大写转小写
//toupper()  //小写转大写
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