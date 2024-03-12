#define _CRT_SECURE_NO_WARNINGS 0
#include <stdio.h>
//#define NOEBUG
#include <assert.h>
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int* p = NULL;
//	assert(p != NULL);
//	*p = 100;
//	printf("%d", *p);
//
//	
//
//
//	return 0;
//}
 
//unsigned int my_strlen(const char*s)
//{
//	int count = 0;
//	assert(s);//s!=空指针
//	while (*s)
//	{
//		count++;
//		s++;
//	}
//	return count;
//}
//int main()
//{
//	printf("%d", my_strlen("adsdadadadada"));
//
//	return 0;
//}

//传值调用
//void swap(int a, int b)
//{
//	int z = 0;
//	z = a;
//	a = b;
//	b = z;
//}
////传址调用
//void swap_2(int* pa, int* pb)
//{
//	assert(pa && pb);
//	int z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//
//
//int main()
//{
//	int a=10;
//	int b = 20;
//	printf("变化前a=%d,b=%d\n", a, b);
//	//swap(a, b);
//	swap_2(&a, &b);
//	printf("变化前a=%d,b=%d\n",a, b);
//
//
//	return 0;
//}


//一维数组传参
//void test(int* arr)
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);//在x64环境下，arr首元素的地址站8个字节，arr[0]站4个字节
//	printf("sz2=%d\n", sz2);
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;//arr本质是该数组第一个元素的地址，等同于&arr[0],但不等于&arr
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	scanf("%d", p + i);
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(p + i));//*(p+i)=arr[i]=p[i]
//	//}
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("si1=%d\n", sz1);
//	test(arr);
//	
//	return 0;
//}
void bubble_sort(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//这是每一趟，共sz-1趟
		int pd = 1;
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//这是每一次排序，一趟一共趟数-i次排序；
			if (arr[j] > arr[j + 1])//判断相邻两数的大小，观察他们是否需要排序
			{
				int tep= arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tep;
				pd = 0;
			}
		}
		if (pd == 1)
			break;
	}
	printf("\n");
}
void print_arr(int* p, int sz)
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(p+i));
	}
}

int main()
{
	int arr1[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);
	print_arr(arr1, sz);
	bubble_sort(arr1, sz);
	print_arr(arr1, sz);

	return 0;
}