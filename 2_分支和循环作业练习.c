#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//3�����Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);  //scanf�����ʲô���� ���ʱ��Ҫ��ʲô����
//	//�㷨ʵ��
//	//a�����ֵ��b��֮��c����Сֵ
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = c;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d%d%d\n", a, b, c);
//	return 0;
//}


//100���ڱ�3��������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}


//�������������Լ��
//շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		//r = m%n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}


//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//				//�ж�year�Ƿ�Ϊ����
//				//1.�ܱ�4�������Ҳ��ܱ�100������������
//				//2.�ܱ�400����������
//				if (year % 4 == 0 && year % 100 != 0)
//				{
//					printf("%d ", year);
//					count++;
//				}
//				else if (year % 400 == 0)
//				{
//					printf("%d ", year);
//					count++;
//				}
//			}
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);  //\nΪ����
//	return 0;
//}


//100-200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϵĹ���
//		//1.�Գ���
//		//����2->i-1
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - ��ƽ������ѧ�⺯��
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(double(i)); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(double(i)))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	//sqrt - ��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(double(i)); j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j>sqrt(double(i)))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//<��������n�־���>



//1��100�����˶��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//�������
//1/1-1/2+1/3-1/4+1/5......+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//��10���������ֵ
//int main()
//{
//	int arr[] = { -1, -2, -3, -4, -5, -6, -7, -8, -9, -10 };
//	int max = arr[0];  //���ֵ
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	for (i = 1 ; i <= 9; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);  //%2d - ��ӡ��λ�����ÿո��� %-2d - �����
//		}
//		printf("\n");
//	}
//	return 0;
//}


//���ֲ���:
//��д������һ���������������в��Ҿ����ĳ����
//Ҫ��:�ҵ��˾ʹ�Ұ�������ڵ��±꣬�Ҳ��������:�Ҳ�����
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


//��������Ϸ
//1.��������һ�������
//2.������
//void menu()
//{
//	printf("**********************\n");
//	printf("**  1.play  0.exit  **\n");
//	printf("**********************\n");
//}
//
//#include<stdlib.h>
//#include<time.h>
//#include<windows.h>
////RAND_MAX  //0-32767
//
//void game()
//{
//	//1.����һ�������
//	int ret = 0;
//	int guess = 0;
//	//��ʱ����������������������ʼ��
//	//ʱ��� - ��ǰ�������ʱ��-���������ʼʱ��(1970.1.1.0:0:0) = ��xxxx����
//	//time_t time(time_t *timer)
//	//time_t
//	
//	ret = rand()%100+1;  //����1-100֮�������
//	//printf("%d\n ", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��,�¶���\n");
//			Sleep(2000);
//			system("cls");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//			printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();  //��������Ϸ
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}




//goto���  
//int main()
//{
//	printf("hello,world\n");
//	goto again;
//	printf("���\n");
//again:
//	printf("haha\n");
//	return 0;
//}

#include<stdlib.h>
#include<string.h>
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ�����һ�����ڹػ����������:���������棬��ȡ���ػ�\n������:");
//	scanf("%s", input);
//	if (strcmp(input, "����������") == 0)
//	{
//		printf("ȡ���ɹ�\n");
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60
//	//system() - ִ��ϵͳ����
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����һ�����ڹػ����������:���������棬��ȡ���ػ�\n������:");
//		scanf("%s", input);
//		if (strcmp(input, "����������") == 0)
//		{
//			printf("ȡ���ɹ�\n");
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}