#include<stdio.h>
#include<math.h>
#include<cstring>//<sting.h>
#include<stdlib.h>


//int step(int x)
//{
//	if (x > 3)
//	{
//		int a = 1;
//		int b = 2;
//		int c;
//		while (x>=3)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			x--;
//		}
//		return c;
//	}
//	else
//		return x;
//}
//int main()//青蛙跳台阶C程序
//{
//	int n;
//	scanf("%d", &n);
//	int way=step(n);
//	printf("way = %d", way);
//	return 0;
//}


//long long fib(int x)
//{
//	long long a = 1;
//	long long b = 1;
//	long long c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()//斐波那契数列
//{
//	int x;
//	scanf("%ld", &x);
//	printf("%ld\n", fib(x));
//	return 0;
//}


//long long int factorial(int i)
//{ 
//	if (i <= 1)
//		return 1;
//	else
//		return i * factorial(i - 1);
//}
//int main()//n的阶乘
//{
//	int x;
//	scanf_s("%d", &x);
//	printf("%d", factorial(x));
//	return 0;
//}


//int main()//随机生成1~6之间的数
//{
//	for (int i = 1; i <= 20; i++)
//	{
//		printf("%10d", 1 + (rand() % 6));
//		if (i % 5 == 0)
//			printf("\n");
//	}
//	return 0;
//}


//int prime(int x)
//{
//	for (int j = 2; j <=sqrt(x); j++)
//	{
//		if (x % j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main()//找100到200之间的素数(只能被1和自身整除)
//{
//	int i;
//	int j = 0;
//	int count = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
		////if (prime(i) == 1)
		////{
		////	printf("%d ", i);
		////	count++;
		////}
//	printf("\ncount=%d", count);
//	return 0;
//}