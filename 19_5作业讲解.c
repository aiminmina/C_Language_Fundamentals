#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);  //02 29 00 00
//	return 0;
//}





//union Un
//{
//	short s[7];
//	int n;
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}





//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}





//#include <stdlib.h>
//
//int main()
//{
//	int* p = (int*)malloc(0);
//
//	return 0;
//}





//’“µ•…Ìπ∑
//int dog(int arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (&(arr[i]) == &(arr[j]))
//			{
//
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[5] = { 1,2,3,1,2 };
//	int sz = 0;
//	sz = sizeof(arr) / arr[0];
//	dog(arr, sz);
//	return 0;
//}