#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//C������һ�� �ṹ�� �ĳ����������
//1.˳��ṹ
//2.ѡ��ṹ
//3.ѭ���ṹ

//int main()
//{
//	int a = 0;
//	; //�����-�����
//	return 0;
//}




//if �� else �оͽ�ԭ��
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("���ܴ�����\n");
//	}
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("׳��\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else
//			printf("������\n");
//	}
//	//int age = 45;
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else if (age >= 18 && age < 28)
//	//	printf("����\n");
//	//else if (age >= 28 && age < 50)
//	//	printf("׳��\n");
//	//else if (age >= 50 && age < 90)
//	//	printf("����\n");
//	//else
//	//	printf("������\n");
//	//if (age < 18)
//	//	printf("δ����\n");
//	//else
//	//	printf("����\n");
//	//if (age < 18)
//	//	printf("δ����\n");
//	return 0;
//}




//int main()
//{
//	int num = 4;
//	if (5 == num);
//	{
//		printf("hehe\n");
//	}
//	//if (num = 5) // = ��ֵ  == �ж����
//	//{
//	//	printf("�Ǻ�\n");
//	//}
//	//return 0;
//}




//��ϰ:�ж�һ����Ϊʲô��
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//		printf("����һ������\n");
//	else if (num == 0)
//		printf("����һ�������ż��\n");
//	else
//		printf("����һ��ż��\n");
//	return 0;
//}

//100���ڵ�����
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		printf("%d ", i);
//		i += 2;
//	}
//	//while (i <= 100)
//	//{
//	//	if (i % 2 ==1)
//	//		printf("%d ",i);
//	//	i++;
//	//}
//	return 0;
//}




//switch�﷨
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day) //switch(���ͱ��ʽ)
//{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;     
//	default:       
//		printf("�������\n");
//	//��ÿ��switch����ж���һ��default�־��Ǹ���ϰ�ߣ����������ں���ټ�һ��break
//}
//	//{
//	//case 1:      //case ���ͳ������ʽ
//	//	printf("����1\n");
//	//	break;
//	//case 2:
//	//	printf("����2\n");
//	//	break;
//	//case 3:
//	//	printf("����3\n");
//	//	break;
//	//case 4:
//	//	printf("����4\n");
//	//	break;
//	//case 5:
//	//	printf("����5\n");
//	//	break;
//	//case 6:
//	//	printf("����6\n");
//	//	break;
//	//case 7:
//	//	printf("������\n");
//	//  break;
//	//}
//	//if (day == 1)
//	//	printf("����1\n");
//	//else if (day == 2)
//	//	printf("����2\n");
//	////...
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//			continue;  //��������ѭ��,��ת��while�����жϲ���
//		printf("%d\n", i);
//	}
//
//	//int i = 1;
//
//	//while (i<=10)
//	//{
//	//	if (i == 5)
//	//		break;
//	//	printf("%d\n", i);
//	//	i++;
//	//}
//
//	//while(1)
//	//	printf("hehe\n");
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	//Ctrl + z
//	//EOF - end of file -> -1  �ļ�������־
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	//int ch = getchar();
//
//	//putchar(ch);
//	//printf("%c\n", ch);
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("����������:");
//	scanf("%s", password);  //�������룬�������password������
//	//��������ʣ��һ��'\n'
//	//��ȡһ��'\n'
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):");
//	ret = getchar();  //Y/N
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}




//int main()
//{
//	int ch = 0;
//	while ((ch=getchar())!=EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}