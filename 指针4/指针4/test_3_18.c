#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul (int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//	printf("********************************************************************\n");
//	printf("*****************1.�ӷ�      2.����*********************************\n");
//	printf("*****************3.�˷�      4.����*********************************\n");
//	printf("*****************0.�˳�*********************************************\n");
//	printf("********************************************************************\n");
//
//}
////int main()
////{
////	menu();
////	int (*parr[5])(int, int) = { NULL,Add,Sub,Mul,Div };
////	int input = 0;
////	do{
////		printf("��ѡ��");
////		scanf("%d", &input);
////		int a, b = 0;
////		if (input >= 1 && input <= 4)
////		{
////			printf("��������������");
////			scanf("%d %d", &a, &b);
////			int ret = parr[input](a,b);
////			printf("%d\n", ret);
////		}
////		else if (input == 0)
////		{
////			printf("���˳�������\n");
////			break;
////		}
////		else
////		{
////			printf("�������ִ�������������\n");
////		}
////	} while (input);
////	return 0;
////}
//void Calc(int (*p)(int , int ))
//{
//	int x, y = 0;
//	printf("������������\n");
//	scanf("%d %d", &x, &y);
//	printf("%d\n", (*p)(x, y));
//}
//int main()
//{
//	int input = 0;
//	do {
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("���˳�\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
//

void danshen(int (*p1), int (*p2),int sz)
{
	int count = 0;
	for (int i = 0; i < sz; i++)
	{
		int a = 0;
		for (int j = i + 1; j < sz; j++)
		{
			a=a ^(*(p1+i+j));
		}
		if (a != 0)
		{
			*(p2 + count) = *(p1+i);
			count++;

		}
	}
}
void print_arr(int* p,int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	printf("\n");
}
void print_dog(int* (p), int sz)
{
	for (int i = 0; i < sz; i++)
	{
		
		if (*(p + i) == 0)
		{
			break;
		}
		printf("%d ", *(p + i));
	}
	printf("\n");
}

int main()
{
	int arr[10] = { 1,2,3,4,5,1,2,3,4,6 };
	int dog[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	danshen(arr, dog,sz);
	print_arr(arr,sz);
	print_dog(dog, sz);
	return 0;
}