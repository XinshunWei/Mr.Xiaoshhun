#include <stdio.h>
#include <string.h>
//struct book      //�ṹ��
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct book b1 = { "c���Գ������", 55 };
//	strcpy(b1.name, "C++");// strcpy--string copy->�ַ�������--�⺯��->string.h
//	printf("������%s", b1.name);
//	//struct book* pb = &b1;
//	//printf("������%s\n", pb->name);
//	//printf("�۸�%d", pb->price);
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%d", b1.price);
//	 
//	//printf("������%s\n", b1.name);
//	//printf("�۸�%d", b1.price);
//	return 0;
//}



//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	printf("%d", sizeof(pc));
//	return 0;
//}



////ָ�����--������ŵ�ַ
//int main()
//{
//	int a = 20;
//	int* p = &a;
//	//printf("%p\n", &a);
//	//printf("%p", p);
//	*p = 10;//*--�����ò�����
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



////�����Ķ���
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
////��Ķ���
//#define MAX(X,Y) (X>Y?X:Y)
//int main()
//{
//	int a = 10; int b = 20;
//	//����
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	//��
//	max = MAX(a, b);
//	printf("max=%d", max);
//	return 0;
//}

//int main()
//{
//	extern--�����ⲿ����
//	extern int g_val;
//	printf("%d", g_val);
//	return 0;
//}



//void test()
//{
//	//int a = 1;
//	static int a = 1;//aΪ��̬�ľֲ�����--
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
//	max = (a > b ? a : b);//��������������Ŀ��������
//	printf("max=%d", max);
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int b = a--;   //��ʹ�ã���--   //a=9,b=10
//	//int a = 10;
//	//int b = ++a;     //��++����ʹ��   //a=11,b=11
//	printf("a=%d,b=%d", a, b);
//}



//int main()
//{
	//int arr[] = { 1,2,3,4,5,6 };
	//printf("%d\n", sizeof(arr) / sizeof(arr[0]));
	//int a = 0;
	//int b = ~a;//  ~��(2����)λȡ��
	////00000000000000000000000000000000--a
	////11111111111111111111111111111111--b
	//printf("%d", b);
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };  //��������
//	//��Ӧ��λ��		0,1,2,3,4,5,6,7,8,9(Ĭ�ϴ�0��ʼ)
//	int i = 0;
//	while (i < 10)
//	{
//
//		printf("%d ", arr[i]);
//		i++;
//	}
//}



//int Add(int x, int y)     //Add--�Զ��庯��
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0; int b = 0; int sum = 0;
//	printf("������������\n");
//		scanf("%d%d", &a, &b);
//		sum = Add(a,b);
//		printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int line = 0;
//	printf("��Ŭ������");
//		while (line < 20000)
//		{
//			line++;
//			printf("��ҪŬ���ô��� %d\n", line);
//		}
//		if (line >= 20000)
//		{
//			printf("����Ŭ����");
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
//{					// \ddd��ʾ3���˽�����  \xdd��ʾ2��ʮ������/
//	printf("%d\n", strlen("c:\test\32"));//--\tΪת���ַ�-��1���ַ�   \32--32������8��������
//	printf("%s\n", "\32");						//����0��Ӧ��ASCIIֵΪ48  ���ε���
//	printf("%s", "\x61");						//A--65   a--97   ���ε���
//	return 0;                                   //--\32Ϊ8���ƶ�Ӧ��10��������
//}												//	\32=26--��ʾ26���ASCII��ֵ��Ӧ���ַ�


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
//	printf("ok \\n");   //  \�ַ�--ת���ַ�
//}



//int main()
//{
//	char arr[] = "abc";//  "abc"--'a','b','c','\0'--Ϊ�ַ����Ľ�����־; / ('/0'��ֵΪ0�����Ա�ʡ����)
//	char arr1[] = { 'a','b','c'};
//	/*char arr2[] = { 'a','b','c','\0' };*/char arr2[] = { 'a','b','c',0 };
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr1));//���ֵ
//	printf("%d\n", strlen(arr2));
//	return 0;
//}


//enum Sex   //enum--ö������//////ö�ٳ�����û�취�ĵ�
//{
//	FEMALE-0, MALE-1, SECRET-2������������Ĭ�ϵ�ֵ���޷��ı�
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
//{//const--������
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