#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//int main() {
//	double a=sqrt(25);
//	printf("%lf", a);
//	return 0;
//}

//�����Ĺ���
//int Add(int x, int y) {
//	int z = x + y;
//	return z;
//}
////������ʹ��
//int main() {
//	int a, b;
//	//����
//	scanf("%d %d", &a, &b);
//	//����
//	int c = Add(a, b);
//	//���
//	printf("c=%d", c);				
//	return 0;
//}

//�������ȫ��Ԫ�ظĳ�-1��
//void set_arr(int arr[], int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//void print_arr(int arr[], int sz) 
//{
//	int i = 0;
//	for (i = 0; i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////�����ĵ���
//int main() 
//{
//	int lol[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(lol) / sizeof(lol[0]);
//	print_arr(lol, sz);
//	set_arr(lol, sz);
//	print_arr(lol, sz);
//	return 0;
//}


//����
//#include "get_days.h"
//int main() {
//	int year,month,day;
//	printf("��������ݺ��·�");
//	scanf("%d %d", &year, &month);
//	day = get_days(year, month);
//	printf("%d", day);
//
//
//	return 0;
//}
//

//int main()
//{
//    int n, m, i,j;
//    scanf("%d %d", &n,&m);
//    int arr1[] = { 0 };
//    int arr2[] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    i = 0;
//    j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n && j < m)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else if (j==m&&i<n)
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//
//    return 0;
//}
//int main()
//{
//    int n, m, i, j;
//    scanf("%d", &n);
//    scanf("%d", &m);
//    int arr1[] = { 0 };
//    int arr2[] = { 0 };
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (j = 0; j < m; j++)
//    {
//        scanf("%d", &arr2[j]);
//    }
//    i = 0;
//    j = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n && j < m)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else if (j == m && i < n)
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//
//    return 0;
//}
//�����Ĺ���
int is_prime(number)
{
	int i;
	for (i = 2; i * i < number; i++)
	{
		if (number % i == 0) 
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
		
}

//�����ĵ���
int main()
{
	for (int i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
		}
	}
	return 0;
}



