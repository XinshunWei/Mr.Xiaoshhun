#include<stdio.h>



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("p=%d\n", *p);
//	printf("pp=%d\n", **pp);//二级指针
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr); //首元素地址
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//整个数组的地址 
//	printf("%p\n", &arr+1);
//
//	return 0;
//}


//int strlen_1(char *arr)
//{
//	char* start = arr;
//	char* end = arr;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//#include<cstring>
//int main()//写出strlen的实现函数
//{
//	char arr[] = "hello world";
//	int str=strlen_1(arr);
//	printf("strlen_1=%d\n", str);
//	printf("strlen=%d\n", strlen(arr));
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", & arr[9] - &arr[0]);//指针-指针=指针之间的元素个数
//										//（不能是两个类型的指针相减）
//	return 0;							//要大的指针-小的指针
//}


//int* test()//指针指向的空间释放（野指针）
//{
//	int a = 10;
//	return &a;//局部变量，一旦脱离这个函数的主体，空间就被释放了
//}
//int main()//err
//{
//
//	int *p=test();
//	printf("%d", *p);
//	return 0;
//}
//int main()//err		//数组越界的野指针问题
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i <=12; i++)
//	{
//		*(p + i) = i;
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	//int *p;  //局部指针变量，不初始化，默认是随机值 --野指针
//	int arr[10] = { 0 };//int* p=NULL--不知道初始化放什么的时候可以这样操作
//	int* p = arr;					//NULL--给指针初始化的
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int ret=*(p + i) = 1;
//		printf("%d ", ret);
//	}
//	return 0;
//}



//int main()
//{
//	char a = 0x11223344;
//	char* pc = &a;
//	//int* pa = &a;
//	//printf("%p\n", pa);
//	//printf("%p\n", pa+1);
//	//指针类型决定了指针走一步走多远
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}


//int main()
//{
//
//	printf("%d\n", sizeof(int*));//int* p; *p能访问4个字节
//	printf("%d\n", sizeof(char*));//char* p; *p能访问1个字节
//	printf("%d\n", sizeof(double*));//char* p; *p能访问8个字节
//
//	return 0;
//}