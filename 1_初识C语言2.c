#include<stdio.h>
//int main()
//{
//	//�ַ����Ľ�����־:'\0'
//	//"abcdef\0"; // \0���صģ������ַ�������
//	//'\0' -ת���ַ� -ASCLL��ֵλΪ0
//	//0 ->����0
//	//'0' ->�ַ�0  ASCLL��ֵλΪ48(�����ַ�)
//	// EOF - end of file -�ļ�������־ -1(��һ)
//	return 0;
//}



//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max = Max(num1,num2);
//	printf("max=%d\n", max);
//	if (num1 > num2)
//		printf("�ϴ�ֵ��:%d\n", num1);
//	else
//		printf("�ϴ�ֵ��:%d\n", num2);
//	return 0;
//}




//#include<string.h> //��ʹ���ַ�����ʱʹ��
//int main()
//{
//	int a = 10;
//	int arr[] = { 1, 2, 3, 4, 5, 6 }; //6*4=24
//	printf("%d\n", sizeof(a)); //4
//	printf("%d\n", sizeof a); //4
//	printf("%d\n", sizeof(int)); //4
//	//printf("%d\n", sizeof int); //err
//	printf("%d\n", sizeof(arr)); //���������С����λ���ֽ�
//	printf("%d\n", sizeof(arr) / sizeof(arr[0])); //6
//	return 0;
//}




//int main()
//{
//	int a = 0; //4���ֽڣ�32bitλ
//	int b = ~a; //b���з��ŵ����ͣ�
//	// ~ -- ��(2����)λȡ��
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111
//	//ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//	//11111111111111111111111111111111 //���� (���λ1Ϊ����)
//	//11111111111111111111111111111110 //���� (����-1�õ�����)
//	//10000000000000000000000000000001 //-1 (���Ų��䣬��������λ��λȡ��)
//	printf("%d\n", b); //ʹ�õģ���ӡ�����������ԭ��  //b=-1
//
//	return 0;
//}
//ֻҪ���������ڴ��д洢�Ķ��Ƕ����ƵĲ���
//����--ԭ�룬���룬����  --> ��ͬ
//������
//    ԭ��                -->           ����    -->        ����
//ֱ�Ӱ�������       ԭ��ķ���λ����          ����+1
//д���Ķ���������   ����λ��λȡ���õ�
//��:-2
//10000000000000000000000000000010 - ԭ��
//11111111111111111111111111111101 - ����
//11111111111111111111111111111110 - ����



//int main()
//{
//	int a = 10;
//	//int b = a++; //����++,��ʹ�ã���++  //a=11,b=10
//	//int b = ++a; //ǰ��++����++����ʹ��  //a=11,b=11
//	//int b = a--; //����--����ʹ�ã���--  //a=9,b=10
//	int b = --a; //ǰ��--����--����ʹ��   //a=9,b=9
//	printf("a=%d b=%d\n", a, b); 
//	return 0;
//}




//int main()
//{
//	int a = (int)3.14; //double --> int ǿ������ת��
//	printf("%d\n", a); //a=3
//	return 0;
//}




//int main()
//{
//	//�� - ��0
//	//�� - 0
//	//&& - �߼���  (�������Ϊ��,һ����Ϊ��)
//	//|| - �߼���  (һ����������Ϊ��,������Ϊ��)
//	int a = 3;
//	int b = 0;
//	//int c = a && b;
//	int c = a || b;
//	printf("%d\n", c);
//	return 0;
//}




//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//
//	max = (a > b ? a : b);  //����������(��Ŀ�����)
//	printf("%d\n", max);
//	//���µȼ�
//	if (a > b)
//		max = a;
//	else
//		max = b;
//
//	return 0;
//}




//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;    //int z = x + y;
//	return z;
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	arr[4]; //[] - �±�������ò�����
//	printf("%d\n", arr[4]);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b); //() -�������ò�����
//	printf("%d\n", sum);
//	return 0;
//}




////int
////float
////�����ؼ���
//int main()
//{
//	//register int a =10; //�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	//signed int��
//	unsigned int num = -1;
//	printf("%d\n",num);
//	//struct - �ṹ��ؼ���
//	//union - ������/������
//	return 0; 
//}




//int main()
//{
//	//int float; //err
//	//twpedef - ���Ͷ��� - �����ض���
//	typedef unsigned int u_int; //��unsigned�����
//	unsigned int num = 20;
//	u_int num = 20;
//	return 0;
//}




//1.static ���ξֲ�����
//�ֲ��������������ڱ䳤������������������
//void test()
//{
//	static int a = 1; //a ��һ����̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a); //���Ϊ��2 3 4 5 6 �� �������static ���Ϊ��2 2 2 2 2
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//2.static ����ȫ�ֱ���
//�ı��˱����������� - �þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ���û����ʹ��

//int main()
//{
//	//extern - �����ⲿ���ŵ�
//	extern int g_val1;
//	printf("%d\n", g_val1);
//	return 0;
//}

//3.static���κ���
//�ı��˺����������� - ��׼ȷ
//static���κ����ı��˺�������������
//�ⲿ�������� -> �ڲ���������

//�����ⲿ����
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}



////#define �����ʶ������
////#define MAX 100
////#define ���Զ����-������
//
////������ʵ��
//
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	//int a = MAX;
	//int a = 10;
	//int b = 20;
//	//�����ķ�ʽ
//	int max = Max(a, b);
//	printf("max=%d\n", max);
	//��ķ�ʽ
//	int max = MAX(a, b);
//	//max=(a>b?a:b);
//	printf("max=%d\n", max);
//	return 0;
//}




//ָ���С��32λƽ̨��4���ֽڣ�64λƽ̨��8���ֽ�  //�������Ϸ���Debug�޸�
//int main()
//{
//	int a = 10; //4���ֽ�
//	int* p = &a; //ȡ��a�ĵ�ַ  p��һ������-ָ�����
//	printf("a�ĵ�ַ:%p\n", p);
//	printf("ָ��p�Ĵ�С:%d\n", sizeof(p)); //ָ��p�Ĵ�С
//	//printf("%d\n", *p); //10
//	*p = 20; // * - �����ò�����/��ӷ��ʲ�����
//	printf("a�ı���ֵ:%d\n", a);
//	//��һ�ֱ�����������ŵ�ַ�� - ָ�����
//	//printf("%p\n", &a);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char*));    //4
//	printf("%d\n", sizeof(short*));   //4
//	printf("%d\n", sizeof(int*));     //4
//	printf("%d\n", sizeof(double*));  //4
//	return 0;
//}