#include<stdio.h>
#include<string>



//double pow(int n, int k)
//{
//	if (k < 0)
//		return (1.0 /  pow(n, -k));
//	else if (k == 0)
//		return 1;
//	else
//		return n * pow(n, k - 1);
//}
//int main()//��n��k�η�
//{
//	int n;
//	int k;
//	scanf("%d %d", &n, &k);
//	double ret = pow(n, k);
//	printf("ret=%lf", ret);
//	return 0;
//}


//int DigitSum(unsigned int x)
//{
//	if (x > 9)
//	{
//		return x % 10 + DigitSum(x / 10);
//	}
//	else
//		return x;
//}
//int main()//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
//{
//	unsigned int x;
//	scanf("%d", &x);
//	int ret=DigitSum(x);
//	printf("ret=%d", ret);
//	return 0;
//}


//void reverse_string(char arr[])//��̫���
//{
//	char temp = arr[0];
//	int len = strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (strlen(arr + 1) >1)
//		reverse_string((arr + 1));
//	arr[len - 1] = temp;
//}
//int main()//���ַ�����������---�ݹ�
//{
//	char arr[] = "abcdefg";  //fedcba
//	reverse_string(arr); 
//	printf("%s", arr);
//	return 0;
//}


//int main()//��ӡ����� �˷��ھ���
//{
//	int i;
//	int j;
//	int n;
//	scanf("%d",&n);
//	for (i=1;i<=n;i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//void print(int *arr, int sz)
//{
//	int *p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//}
//int main()//ʹ��ָ���ӡ��������(��ʹ���±�)
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//int main()//����������������ʹ����ʱ����
//{
//	int a = 3;
//	int b = 5;
//	printf("a=%d  b=%d\n", a, b);
//	a = a ^ b;					//b = a + b;
//	b = a ^ b;//b=a	//b^b=0 	//a = b - a;//a=b
//	a = a ^ b;//0^a=a			//b = b - a;
//	printf("a=%d  b=%d", a, b);
//	return 0;
//}


//void print(int x)
//{
//	int i;
//	for (i = 30; i >= 0; i -= 2)////��ӡż��λ
//	{
//		printf(" %d", (x >> i) & 1);
//	}
//	printf("\n");
//	int j;
//	for (j = 31; j >= 1; j -= 2)//��ӡ����λ
//	{
//		printf("%d ", (x >> j) & 1);
//	}
//
//}
//int main()//��ӡ�������е�����λ��ż��λ
//{
//	int x;
//	scanf("%d", &x);
//	print(x);
//	return 0;
//}


//int get_diff_bit(int m, int n)
//{
//	int x = m ^ n;
//	int count=0;
//	while (x)
//	{
//		x = x & (x - 1);
//			count++;
//	}
//	return count;
//}
//int main()//��������в�ͬλ�ĸ���
//{
//	int m, n;
//	scanf("%d %d", &m, &n);
//	int count=get_diff_bit(m, n);
//	printf("%d", count);
//	return 0;
//}


//int count_bit(int x)
//{
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((x >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int count_bit(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		if (x % 2 == 1)
//		{
//			count++;
//		}
//		x = x / 2;
//	}
//	return count;
//}
//int count_bit(int x)
//{
//	int count = 0;
//	while (x)
//	{
//		x = x & (x - 1);//���������������ұߵ�1
//		count++;
//	}
//	return count;
//}
//int main()//��ʮ�����������룩�м���1
//{
//	int x;
//	scanf("%d", &x);
//	int count = count_bit(x);
//	printf("count = %d", count);
//	return 0;
//}