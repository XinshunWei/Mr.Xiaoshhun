#include <stdio.h>
#include<string.h>
#include "head.h"


//int main()//�������������ֵ
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int n;
//	int i = 0;
//	int temp;
//	for (i = 0; i < sz; i++)
//	{
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//	for (int n = 0; n < sz; n++)
//	{
//		printf("%d ", arr1[n]);
//	}
//
//	return 0;
//}


//void print(int arr[], int sz)
//{
//	int i;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int temp;
//	while (right > left)
//	{
//		temp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = temp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//	return 0;
//}


//int main()//ð������
//{
//	int arr[] = { 9,2,4,5,6,10,3,1,8,7 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int j;
//	for (j = 0; j < sz - 1; j++)
//	{
//		for (int i=0; i < sz - 1 - j; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//	for(int n=0;n<sz;n++)
//		printf("%d ", arr[n]);
//	return 0;
//}


//int main()
//{
//	char input[] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("���룺\n");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//int main()//�ҳ�ֻ����һ�ε�����
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,5,9 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret =ret ^ arr[i];//����˼��---a^b^a=b----0^a=a
//	}
//	printf("single dog=%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i;
//	for ( i = 0; i < sz; i++)
//	{
//		int count = 0;
//		for (int j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;//���������ʱ count=2
//			}
//		}
//		//
//		if (count == 1)
//		{
//			printf("single dog=%d ", arr[i]);
//			break;
//		}
//	}
//	return 0;
//}


//void sort(int arr[], int sz)
//{
//	int flag = 1;
//	for (int n = 0; n < sz-1; n++)
//	{
//		int m;
//		for (m = 0;m<sz-1-n;m++)
//		{
//			if (arr[m] > arr[m + 1])
//			{
//				int temp = arr[m];
//				arr[m] = arr[m + 1];
//				arr[m+1] = temp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//			break;
//	}
//}
//int main()//ð������
//{
//	int arr[] = { 9,5,1,4,3,2,6,8,7,20 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz); 
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
// }