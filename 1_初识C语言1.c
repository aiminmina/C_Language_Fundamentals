#define _CRT_SECURE_NO_WARNINGS 1

//����һ����stdio.h���ļ�
//std-��׼standard input output

#include<stdio.h>

//int �����͵���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//int main()//������-��������-main��������ֻ��һ��
//{
//	//�����������
//	//����Ļ�����hello world
//	//����-print function -printf - ��ӡ����
//	//�⺯��-C���Ա����ṩ����ʹ�õĺ���
//	//���˵Ķ���-���к�
//	//#include
//	printf("hello world\n");
//	return 0;//���� 0
//}




//char-�ַ�����
//%d -��ӡʮ�����з�������
//%u - ��ӡʮ�����޷�������
//%c -��ӡ�ַ�
//%f -��ӡ��������-С��
//%p -�Ե�ַ����ʽ��ӡ
//%x -��ӡ16��������
//%lf -��ӡdouble����
//%o ...




//int main()
//{
//	//char ch = 'A';//�ڴ�
//	//printf("%c\n",ch);//%c -��ӡ�ַ���ʽ������
//	//20
//	//short int -������
//	//int -����
//	//int age = 20;
//	//printf("%d\n", age);//%d -��ӡ����ʮ��������
//	//long ������
//	//long num = 100;
//	//printf("%d\n",num);
//	//float f = 5.0;
//	//printf("%f\n", f); //float -�����ȸ�����
//	//double d = 3.14;
//	//printf("%lf\n",d); //double -˫���ȸ�����
//	return 0;
//}




//������е�λ
//bit -����λ һ������λ���Դ�1����0
//byte -�ֽ� 1�ֽ�=8����λ�Ĵ�С
//kb  mb  gb  tb  pb 1�ֽ�=1024kb 1kb=1024mb �Դ�����
//������ 0 1
//ʮ���� 0 1 2 3 4 5 6 7 8 9

//int main()
//{
//	printf("%d\n", sizeof(char));//  1���ֽ�
//	printf("%d\n", sizeof(short));//  2���ֽ�
//	printf("%d\n", sizeof(int));//  4���ֽ�
//	printf("%d\n", sizeof(long));//  4/8���ֽ� C���Ա�׼�涨 sizeof(long)>=sizeof(int)
//	printf("%d\n", sizeof(long long));//  8���ֽ�
//	printf("%d\n", sizeof(float));//  4���ֽ�
//	printf("%d\n", sizeof(double));//  8���ֽ�
//	return 0;
//}




//int main()
//{
//	//����
//	//20
//	short age = 20;//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6f;//���ڴ�����4���ֽڣ����С��  95.6������Ĭ��Ϊdouble���Ϳ��ܻᱨ���棬ĩβ��f�ɽ��
//	printf("%f\n",weight); //95.599998
//	return 0;
//}




//int num2 = 20;//ȫ�ֱ���-�����ڴ����({})֮��ı���
//
//int main()
//{
//	int num = 10;//�ֲ�����-�����ڴ����({})֮�ڵı���
//
//	return 0;
//}




//int a = 100;
//
//int main()
//{
//	int a = 10;
//	//�ֲ�������ȫ�ֱ��������ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	//���ֲ�������ȫ�ֱ�����������ͬ��ʱ�򣬾ֲ���������
//	printf("%d\n", a);
//
//	return 0;
//}




//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);    //err
//	return 0;
//}




//int main()
//{
//	//����2�����ĺ�
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf  //�൱��python��input
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	//int sum = 0;
//	//C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�棬��������Ҫ����ǰ��
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}




//int main()
//{
//	{
//		int num = 0;
//		printf("num=%d\n", num);  //�ֲ����������������ڱ������ڵľֲ���Χ
//	}
//	return 0;
//}




//ȫ�ֱ���������������������
//
//int global = 2020;
//
//void test()
//{
//	printf("test()-- %d\n", global); //����
//}
//
//int main()
//{
//	test();
//	printf("%d\n",global);
//	return 0;
//}

//ȫ�ֱ�������������:�����������������

//int main()
//{	
//	//δ�����ı�ʶ��
//	//����extern�ⲿ���ŵ�
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//	return 0;
//}




////�ֲ���������������:�����������������ڿ�ʼ�����������������ڽ���
//
//int main()
//{
//	{
//		int a = 10;  
//		printf("a=%d\n", a);//ok    
//	}
//	//printf("a=%d\n", a);//error
//	return 0;
//}
