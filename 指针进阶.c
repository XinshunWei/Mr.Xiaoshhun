#include<stdio.h>


//---------------------------------------------------------------------------

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}

int main()
{
	int (*pa[4])(int, int) = {Add,Sub,Mul,Div};//函数指针数组
	for (int i=0;i<4;i++)
	{
		printf("%d\n",pa[i](2,3));
	}
	return 0;
}

//---------------------------------------------------------------------------

int Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*p)(int, int) = Add;//函数指针--存放函数地址的指针
	printf("%d\n", (*p)(2, 3));
	printf("%d\n",Add(2,3));
	printf("%d",p(2,3));
	return 0;
}

//---------------------------------------------------------------------------

void print1(int arr[3][5], int x, int y)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		int j;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int (*p)[5], int x, int y)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", p[i][j]);
			//printf("%d ", *(p[i] + j));
			//printf("%d ", *(*(p + i) + j));
			//printf("%d ", (*(p+i))[j]);
		}
		printf("\n");
	}
}

//---------------------------------------------------------------------------

int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
	print1(arr, 3, 5);
	printf("\n");
	print2(arr, 3, 5);
	return 0;
}

//---------------------------------------------------------------------------

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	int* p[] = { arr1,arr2,arr3 };//指针数组
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", *(p[i] + j));
		}
		printf("\n");
	}
	return 0;;
}

