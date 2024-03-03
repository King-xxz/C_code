#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int arr1[10] = { 0 };
    int arr2[10] = { 0 };//定义两个数组
    for (i = 0; i < n; i++)//数组一的输入
    {
        scanf("%d", &arr1[i]);
    }
    for (i = 0; i < m; i++)//数组二的输入
    {
        scanf("%d", &arr2[i]);
    }
    i = 0;
    j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d ", arr1[i]);
            i++;
        }
        else
        {
            printf("%d ", arr2[j]);
            j++;
        }
    }
    if (i == n && j < m)
    {
        for (; j < m; j++)
        {
            printf("%d ", arr2[j]);
        }
    }
    else if (j == m && i < n)
    {
        for (; i < n; i++)
        {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}
