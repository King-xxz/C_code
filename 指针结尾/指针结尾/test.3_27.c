#define _CRT_SECURE_NO_WARNINGS 3
#include <stdio.h>
#include <ctype.h>
#include <assert.h>
//int main()
//{ 
//	char* a[] = { "work","at","cdtu" };//ָ������
//	char** pa = a;
//	pa++;
//	printf("%s \n", *(a+1));
//	printf("%s \n", *(pa+1));//��ʱpa�൱��һ�����飬�൱�ڶ�άָ���е���+1
//	printf("%s \n", *pa+1);//�൱�ڶ�άָ���е��м�һ
//
//	return 0;
//}
//int main()
//{
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//	printf("%s\n", **++cpp);//POINT
//	printf("%s\n", *--*++cpp+3);//ER
//	printf("%s\n", *cpp[-2]+3);//ST
//	printf("%s\n", cpp[-1][-1]+1);//EW
//
//
//	return 0;
//}
// 
//size_t my_strlen(const char* s)
//{
//	if (*s == '\0') return 0;
//	else return 1 + my_strlen(s + 1);
//		
//}
//int main()
//{
//	char* s = "asdnaldfjla";
//	size_t ret = my_strlen(s);
//	printf("%zd\n", ret);
//}
// 
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest);
//	assert(src);
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//��'\0'Ҳ������ȥ
//}
//char* my_strcpy(char* dest, char* src)
//{
//	char* ret = dest;
//	assert(dest !=NULL);
//	assert(src !=NULL);
//	while (*dest++ = *src++)//����++�����ȼ�Ҫ��*��,������++����������+1��
//	{
//		;
//	}
//	return ret;
//}
char* my_strcat(char* dest, const char* src) 
{
    char* p = dest;//��dest�ĵ�ַ����p����ʱ��p�޸�Ҳ��ı�dest�Ĵ�С
    while (*p)
    {
        p++;//�Ȱ�p�ӵ���һ���ַ���'\0'�ĺ���
    }
    while (*p++=*src++)
    {
        ;
    }
    *p = '\0';
    return dest;
}

int main()
{
	char arr1[10] = "hello bit";
	char arr2[40] = "hi xiaobite";
	my_strcat(arr2, arr1);//�Ѻ���׷�ӵ�ǰ��
	printf("%s ", arr2);
}


