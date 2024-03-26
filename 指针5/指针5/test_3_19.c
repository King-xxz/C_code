#define _CRT_SECURE_NO_WARNINGS 2
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int comp(const void* p1, const void* p2)
{
	return *(int *)p1 - *(int *)p2;
}

typedef struct stu 
{
	char name[20];
	int age;
}stu;

int cmp_stu_name(const void* p1, const void* p2)
{
	return strcmp(((stu *)p1)->name, ((stu *)p2)->name);
}

int cmp_stu_age(const void* p1, const void* p2)
{
	return ((*(stu*)p1).age) - ((*(stu*)p2).age);
}

void swap(char* p1, char* p2, size_t width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *(p1);
		*(p1) = *(p2);
		*(p2) = tmp;
		p1++;
		p2++;
	}
}

void bubble_sort(void* p,size_t sz,size_t width,int (*cmp)(const void* p1,const void* p2))
{
	for (int i = 0; i < sz - 1; i++)
	{
		for (int j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)p+j*width,(char*)p+(j+1)*width)>0)
			{
				swap((char*)p + j * width, (char*)p + (j + 1) * width,width);
			}
		}
	}
}

void test1()
{
	int arr[] = { 8,7,5,6,3,1,2,4,9,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), comp);
}

void test_stu()
{
	stu arr[3] = { {"lijie",18},{"juntian",20},{"shoudong",19} };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_name);
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_stu_age);
}

//int main()
//{
//	test1();
//	test_stu();
//	
//	return 0;
//}

int main()
{
	int a[5] = { 5, 4, 3, 2, 1 };
	int* ptr = (int*)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}