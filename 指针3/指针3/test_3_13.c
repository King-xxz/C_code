#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//ָ������ģ���ά����
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[] = { arr1,arr2,arr3 };//ָ������
//	int sz = sizeof(arr) / sizeof(arr[0]);//Ԫ�ظ���
//	for (int i = 0; i < sz; i++)
//	{
//
//		//int sz_arr = sizeof(arr[i]) / sizeof(arr[i][0]);
//		for(int j=0;j<5;j++)//for (int j = 0; j < sz_arr; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//
//
//	return 0;
//}
//


//�ַ�����
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char* arr2 = "hello world";//�൱��arr1����������ͬ��arr1����Ϊarr2�ǳ��ַ���
//	//��ӡ��ʽ
//	int len = strlen(arr1);
//	for (int i = 0; i < len; i++)
//	{
//		printf("%c", arr1[i]);
//	}
//	printf("\n");
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}


//�ַ�������ϰ��
//�����ַ����ǲ�������ݵģ��������飬��ʹ������ͬ��Ҳ�ᴢ��������ռ�
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "hello world";
//	char* arr3 = "hello world";
//	char* arr4 = "hello world";
//	if (arr1 == arr2)//�����ַ��һ�������Բ���ȷ
//	{
//		printf("arr1==arr2,����ȷ��\n");
//	}
//	else
//	{
//		printf("arr1==arr2,�Ǵ����\n");
//	}
//	if (arr3 == arr4)//���ַ������������
//	{
//		printf("arr3==arr4,����ȷ��\n");
//	}
//	else
//	{
//		printf("arr3==arr4,�Ǵ����\n");
//	}
//
//	return 0;
//}
//
//����ָ��Ҫ��������ȥд
//int main()
//{
//	int arr[5] = { 0 };
//	//p=&arr;
//	int(*p)[5] = &arr;//��������ָ�����
//	//int(*)[5]������ָ�����ͣ�
//
//
//	return 0;
//}

//��ά����ı���
//void print_arr(int arr[][5], int h, int l)
//{
//	for (int i = 0; i < h; i++)
//	{
//
//		for (int j = 0; j < l; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

////arr[i]==*(arr+i)
//void print_arr(int(*p)[5], int h, int l)
//{
//
//	for (int i = 0; i < h; i++)
//	{
//
//		for (int j = 0; j < l; j++)
//		{
//			printf("%d", (*(p+i))[j]);
//		}
//		printf("\n");
//	}
//}
//
//
//
//int main()
//{
//	int arr[3][5] = { {0,1,2,3,4},{1,2,3,4,5},{2,3,4,5,6} };
//	print_arr(arr, 3, 5);
//
//
//	return 0;
//}

////����ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//
//
//int main()
//{
//	int a = 5;
//	int b = 10;
//	int c=Add(a, b);
//	printf("%d\n", c);
//	printf("%p\n", &Add);
//	int (*p)(int, int) = &Add;
//	printf("%p\n", (*p));
//	printf("%p\n", p);//��ΪAdd=&Add;
//	//int (p)(int,int) ��Add������ָ�����ͣ���������顣
//	return 0;
//}

typedef int* it;
typedef int(*a)[5];//�൱�ڰ�int (*)[5] ���ָ�����������������Ϊ��a�������﷨Ҫ��

typedef int* hhh;
#define g int*;
hhh p1, p2;//p1��p2����int*;
g p3, p4;//p3��int *��p4��int