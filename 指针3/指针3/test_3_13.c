#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//指针数组模拟二维数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[] = { arr1,arr2,arr3 };//指针数组
//	int sz = sizeof(arr) / sizeof(arr[0]);//元素个数
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


//字符数组
//#include <string.h>
//int main()
//{
//	char arr1[] = "hello world";
//	char* arr2 = "hello world";//相当与arr1，但并不等同于arr1，因为arr2是常字符串
//	//打印方式
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


//字符数组练习题
//常量字符串是不会存两份的，但是数组，即使内容相同，也会储存在两块空间
//int main()
//{
//	char arr1[] = "hello world";
//	char arr2[] = "hello world";
//	char* arr3 = "hello world";
//	char* arr4 = "hello world";
//	if (arr1 == arr2)//数组地址不一样，所以不正确
//	{
//		printf("arr1==arr2,是正确的\n");
//	}
//	else
//	{
//		printf("arr1==arr2,是错误的\n");
//	}
//	if (arr3 == arr4)//常字符串不会存两份
//	{
//		printf("arr3==arr4,是正确的\n");
//	}
//	else
//	{
//		printf("arr3==arr4,是错误的\n");
//	}
//
//	return 0;
//}
//
//数组指针要根据数组去写
//int main()
//{
//	int arr[5] = { 0 };
//	//p=&arr;
//	int(*p)[5] = &arr;//这是数组指针变量
//	//int(*)[5]是数组指针类型；
//
//
//	return 0;
//}

//二维数组的本质
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

////函数指针
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
//	printf("%p\n", p);//因为Add=&Add;
//	//int (p)(int,int) 是Add函数的指针类型，类比于数组。
//	return 0;
//}

typedef int* it;
typedef int(*a)[5];//相当于把int (*)[5] 这个指针变量类型重新命名为了a，这是语法要求

typedef int* hhh;
#define g int*;
hhh p1, p2;//p1和p2都是int*;
g p3, p4;//p3是int *；p4是int