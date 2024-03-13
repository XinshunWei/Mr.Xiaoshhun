#include <stdio.h>
#include <string.h>
//struct book      //结构体
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct book b1 = { "c语言程序设计", 55 };
//	strcpy(b1.name, "C++");// strcpy--string copy->字符串拷贝--库函数->string.h
//	printf("书名：%s", b1.name);
//	//struct book* pb = &b1;
//	//printf("书名：%s\n", pb->name);
//	//printf("价格：%d", pb->price);
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d", b1.price);
//	 
//	//printf("书名：%s\n", b1.name);
//	//printf("价格：%d", b1.price);
//	return 0;
//}



//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%d", sizeof(pc));
//	return 0;
//}



////指针变量--用来存放地址
//int main()
//{
//	int a = 20;
//	int* p = &a;
//	//printf("%p\n", &a);
//	//printf("%p", p);
//	*p = 10;//*--解引用操作符
//	printf("%d", a);
//	return 0;
//}



//void test()
//{
//	static long a = 1; static long line = 0;
//	a = a * 2; line++;
//	printf("%d--%d\n", a,line);
//}
//int main()
//{
//	 long i = 1;
//	while (i < 34)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



////函数的定义
//int Max(int x, int y)
//{
//	int max = 0;
//	if (x > y)
//		//max = x; 
//		return x;
//	else	
//		//max = y;
//		return y;
//}
////宏的定义
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10; int b = 20;
//	//函数
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//宏
//	max = MAX(a, b);
//	printf("max=%d", max);
//	return 0;
//}

//int main()
//{
//	extern--声明外部符号
//	extern int g_val;
//	printf("%d", g_val);
//	return 0;
//}



//void test()
//{
//	//int a = 1;
//	static int a = 1;//a为静态的局部变量--
//	a = a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}




//int main()
//{
//	typedef unsigned int u_int;
//	unsigned int a = 20;// == u_int a = 20;
//	return 0;
//}



//int main()
//{
//	//int a = 100; int b = 20; int max = 0;
//	//if (a > b)
//	//	max = a;
//	//else
//	//	 max = b;
//	//printf("max=%d", max);
//	int a = 100; int b = 20; int max = 0;
//	max = (a > b ? a : b);//条件操作符（三目操作符）
//	printf("max=%d", max);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = a--;   //先使用，后--   //a=9,b=10
//	//int a = 10;
//	//int b = ++a;     //先++，后使用   //a=11,b=11
//	printf("a=%d,b=%d", a, b);
//}



//int main()
//{
	//int arr[] = { 1,2,3,4,5,6 };
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//int a = 0;
	//int b = ~a;//  ~按(2进制)位取反
	////00000000000000000000000000000000--a
	////11111111111111111111111111111111--b
	//printf("%d", b);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  //定义数组
//	//对应的位置		0,1,2,3,4,5,6,7,8,9(默认从0开始)
//	int i = 0;
//	while (i < 10)
//	{
//
//		printf("%d ", arr[i]);
//		i++;
//	}
//}



//int Add(int x, int y)     //Add--自定义函数
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0; int b = 0; int sum = 0;
//	printf("请输入两个数\n");
//		scanf("%d%d", &a, &b);
//		sum = Add(a,b);
//		printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("你努力了吗？");
//		while (line < 20000)
//		{
//			line++;
//			printf("我要努力敲代码 %d\n", line);
//		}
//		if (line >= 20000)
//		{
//			printf("继续努力！");
//		}
//	
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	if (input > 5)
//		printf("A\n");
//	else
//		printf("B");
//	return 0;
//}


//int main()
//{					// \ddd表示3个八进制数  \xdd表示2个十六进制/
//	printf("%d\n", strlen("c:\test\32"));//--\t为转义字符-算1个字符   \32--32是两个8进制数字
//	printf("%s\n", "\32");						//数字0对应的ASCII值为48  依次递增
//	printf("%s", "\x61");						//A--65   a--97   依次递增
//	return 0;                                   //--\32为8进制对应的10进制数字
//}												//	\32=26--表示26这个ASCII码值对应的字符


//int main()
//{
//	printf("%s\n", "\"");
//	printf("%s\n", "aaa");
//	printf("%c", '\'');
//	return 0;
//}



//int main()
//{
//	printf("ok \n");
//	printf("ok \\n");   //  \字符--转义字符
//}



//int main()
//{
//	char arr[] = "abc";//  "abc"--'a','b','c','\0'--为字符串的结束标志; / ('/0'的值为0，所以被省略了)
//	char arr1[] = { 'a','b','c'};
//	/*char arr2[] = { 'a','b','c','\0' };*/char arr2[] = { 'a','b','c',0 };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));//随机值
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//enum Sex   //enum--枚举类型//////枚举常量是没办法改的
//{
//	FEMALE-0, MALE-1, SECRET-2、、、、都是默认的值，无法改变
//};
//
//int main()
//{
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}


//int main()
//{
//#define max 100
//	//int max = 100;
//	printf("%d\n", max);
//	return 0;
//}



//int main()
//{//const--常属性
//	const int A = 15-1;
//	printf("%d\n", A);
//	int Ab = A + 3;
//	printf("%d\n", Ab);
//
//	return 0;
//}



//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;	
//	printf("sum = %d\n",sum);
//	return 0;
//}