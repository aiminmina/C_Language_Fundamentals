#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");  //二进制形式写进去
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中fclose(pf);
//	pf = NULL;
//	return 0;
//}





//int main()
//{
//	//打开文件test.txt
//	//绝对路径的写法
//	//fopen("D:\\C\\学习笔记\\test.txt","r");
//	
//	//相对路径的写法
//	//..表示上一级路径
//	//. 表示当前路径
//	//fopen("..");
//	//fopen("../test.txt","r");
//	//fopen("test.txt","r");
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//打开成功
//	//读文件
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}




//int main()
//{
//	FILE* pfWrite = fopen("TEST.txt", "w");
//	if (pfWrite == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputc('b', pfWrite);
//	fputc('b', pfWrite);
//	fputc('q', pfWrite);
//
//	//关闭文件
//	fclose(pfWrite);
//	pfWrite = NULL;
//	return 0;
//}




//int main()
//{
//	FILE* pfRead = fopen("TEST.txt", "r");
//	if (pfRead == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//关闭文件
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}


//从键盘输入
//输出到屏幕
//键盘&屏幕都是外部设备

//键盘-标准输入设备 - stdin
//屏幕-标准输出设备 - stdout
//是一个程序默认打开的两个流设备
//stdin FILE*
//stdout FILE*
//stderr FILE*





//int main()
//{
//	int ch = fgetc(stdin);
//	fputc(ch, stdout);
//}




//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//读文件
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);  //本身有换行
//
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s\n", buf);
//	puts(buf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}





//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("TEST.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//写文件
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}





//int main()
//{
//	//从键盘上读一行文本信息
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);  //从标准输入读取流
//	//fputs(buf, stdout);  //输出到标准输出流
//
//	gets(buf);
//	puts(buf);
//	return 0;
//}






//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"hello" };
//	FILE* pf = fopen("TEST.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//格式化的形式写文件
//	fprintf(pf, "%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//    //格式化的输入数据
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout, "%d %.2f %s", s.n, s.score, s.arr);
//	return 0;
//}




//scanf/printf 是针对标准输入流\标准输出流的格式化输入\输出语句

//fscanf\fprintf是针对所有输入流\所有输出流的格式化输入\输出语句

//sscanf\sprintfl  sscanf是从字符串中读取格式化的数据  sprintf是吧格式化的数据输出成(存储到)字符串

//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//把格式化的数据转换成字符串存储到buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//从buf中读取格式化的数据到tmp中
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}




//fwrite()  二进制写文件
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//
//	FILE* pf = fopen("TEST.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fread()  二进制读文件
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S tmp = { 0 };
//
//	FILE* pf = fopen("TEST.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//文件的随机读取
// fseek()
//int main()
//{
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -4, SEEK_END);
//	//2.读取文件
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//}






//返回文件指针相对于起始位置的偏移量
// ftell()

// 让文件指针的位置回到文件的起始位置
//rewind()
//int main()
//{
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf, -4, SEEK_END);
//	int ch =fgetc(pf);
//	printf("%c\n", ch);
//	//int pos = ftell(pf);
//	//printf("%d\n", pos);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//}




//int main()
//{
//	//EOF
//	//feof();  //EOF - end of file - 文件结束标志
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	pringtf("%d\n", ch);  //-1
//
//	fcolose(pf);
//	pf = NULL;
//	return 0;
//}



//perror()
//int main()
//{
//	//strerror - 把错误码对应的错误信息的字符串地址返回
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//		//读文件
//
//		fclose(pf);
//		pf = NULL;
//	}
//	return 0;
//}




//perror()
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//		//读文件
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//
//	fclose(pf);
//	pf = NULL;
//	
//	return 0;
//}