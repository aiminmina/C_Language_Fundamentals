#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<errno.h>
#include<string.h>

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");  //��������ʽд��ȥ
//	fwrite(&a, 4, 1, pf);//�����Ƶ���ʽд���ļ���fclose(pf);
//	pf = NULL;
//	return 0;
//}





//int main()
//{
//	//���ļ�test.txt
//	//����·����д��
//	//fopen("D:\\C\\ѧϰ�ʼ�\\test.txt","r");
//	
//	//���·����д��
//	//..��ʾ��һ��·��
//	//. ��ʾ��ǰ·��
//	//fopen("..");
//	//fopen("../test.txt","r");
//	//fopen("test.txt","r");
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
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
//	//д�ļ�
//	fputc('b', pfWrite);
//	fputc('b', pfWrite);
//	fputc('q', pfWrite);
//
//	//�ر��ļ�
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
//	//���ļ�
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//	printf("%c", fgetc(pfRead));
//
//	//�ر��ļ�
//	fclose(pfRead);
//	pfRead = NULL;
//	return 0;
//}


//�Ӽ�������
//�������Ļ
//����&��Ļ�����ⲿ�豸

//����-��׼�����豸 - stdin
//��Ļ-��׼����豸 - stdout
//��һ������Ĭ�ϴ򿪵��������豸
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
//	//���ļ�
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);  //�����л���
//
//	puts(buf);
//
//	fgets(buf, 1024, pf);
//	//printf("%s\n", buf);
//	puts(buf);
//
//	//�ر��ļ�
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
//	//д�ļ�
//	fputs("hello\n", pf);
//	fputs("world\n", pf);
//
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}





//int main()
//{
//	//�Ӽ����϶�һ���ı���Ϣ
//	char buf[1024] = { 0 };
//	//fgets(buf, 1024, stdin);  //�ӱ�׼�����ȡ��
//	//fputs(buf, stdout);  //�������׼�����
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
//	//��ʽ������ʽд�ļ�
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
//    //��ʽ������������
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




//scanf/printf ����Ա�׼������\��׼������ĸ�ʽ������\������

//fscanf\fprintf���������������\����������ĸ�ʽ������\������

//sscanf\sprintfl  sscanf�Ǵ��ַ����ж�ȡ��ʽ��������  sprintf�ǰɸ�ʽ�������������(�洢��)�ַ���

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
//	//�Ѹ�ʽ��������ת�����ַ����洢��buf
//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
//	//printf("%s\n", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//
//	printf("%d %f %s", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}




//fwrite()  ������д�ļ�
//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//
//int main()
//{
//	struct S s = { "����",20,55.6 };
//
//	FILE* pf = fopen("TEST.txt", "wb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//�����Ƶ���ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//fread()  �����ƶ��ļ�
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
//	//�����Ƶ���ʽ���ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}




//�ļ��������ȡ
// fseek()
//int main()
//{
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
//	//fseek(pf, 2, SEEK_CUR);
//	fseek(pf, -4, SEEK_END);
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//
//	fclose(pf);
//	pf = NULL;
//}






//�����ļ�ָ���������ʼλ�õ�ƫ����
// ftell()

// ���ļ�ָ���λ�ûص��ļ�����ʼλ��
//rewind()
//int main()
//{
//	FILE* pf = fopen("TEST.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.��λ�ļ�ָ��
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
//	//feof();  //EOF - end of file - �ļ�������־
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
//	//strerror - �Ѵ������Ӧ�Ĵ�����Ϣ���ַ�����ַ����
//	//printf("%s\n", strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//		//���ļ�
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
//		//���ļ�
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