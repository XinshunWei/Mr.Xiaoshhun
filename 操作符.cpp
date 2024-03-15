#include<stdio.h>

//int i;//全局变量不初始化-默认是0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof返回的是无符号数，与sizeof进行运算时，
//								//i也被转换成无符号数//-1 =11111111111111111111111111111111
//		printf(">\n");
//	else
//		printf("<");
//	return 0;  //"<"
//}

//struct stu//创建结构体类型
//{
//	char name[20];
//	int age;
//	char id[20];
//};//结构体后面要加‘;’
//int main()
//{
//	struct stu s1 = { "张三",20,"20200403324" };
//	struct stu* p = &s1;
//	printf("%s\n", p->name);//结构体指针->结构体成员名
//	printf("%s\n", (*p).name);
//	printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s", s1.id);
//	return 0;
//}


//int main()
//{
//	int a=0,b;
//	//if (a > 5)
//	//	b = 3;
//	//else
//	//	b = -3;
//	a > 5 ? b = 3 : b = -3;
//	printf("b=%d", b);
//	return 0;
//}


//#define n 100
//int main()//十进制转换成二进制
//{
//	int x;
//	int arr[n];
//	int i=0;
//	printf("请输入10进制数字：");
//	scanf_s("%d", &x);
//	while (x > 0)
//	{
//		arr[i] = x % 2;
//		i=i+1;
//		x = x / 2;
//	}
//	for(i=i-1;i>=0;i--)
//	printf("%d ", arr[i]);
//	return 0;
//}

//'~'--按位取反
//int main()
//{
//	short a = 0;
//	int b = 5;
//	printf("%d\n", sizeof(a=b+5));//sizeof内部的操作数是不进行计算的
//	printf("%d", a);
//	return 0;
//}


//int main()//统计一个二进制数字中有几个‘1’
//{
//	int x;
//	int count=0;
//	scanf_s("%d", &x);
//	int i;
//	for ( i = 0; i < 32; i++)
//	{
//		if (((x >> i )& 1) == 1)
//		{
//			count++;
//		}
//	}
//	printf("count=%d", count);
//	return 0;
//}


//int main()//交换两个数字，不引用第三变量
//{
//	int a = 5;
//	int b = 3;
//	a = a ^ b;
//	b = a ^ b;//b=a^b^b=a
//	a = a ^ b;//a=a^b^a =b
//	printf("a=%d\nb=%d", a, b);
//	return 0;
//}


//int main()
//{
//	int a = 16;
//	//>>--右移操作符(算术右移)，移动的是二进制位//有除2^1的效果
//	//16=10000
//	a >> 1;//01000--8
//	printf("%d", a >> 1);
//	int b = 5;
//	printf("%d",b<<2);//直接二进制位左移2位//有乘2^2的效果
//	return 0;
//}