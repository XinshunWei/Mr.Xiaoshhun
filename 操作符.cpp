#include<stdio.h>

//int i;//ȫ�ֱ�������ʼ��-Ĭ����0
//int main()
//{
//	i--;
//	if (i > sizeof(i))//sizeof���ص����޷���������sizeof��������ʱ��
//								//iҲ��ת�����޷�����//-1 =11111111111111111111111111111111
//		printf(">\n");
//	else
//		printf("<");
//	return 0;  //"<"
//}

//struct stu//�����ṹ������
//{
//	char name[20];
//	int age;
//	char id[20];
//};//�ṹ�����Ҫ�ӡ�;��
//int main()
//{
//	struct stu s1 = { "����",20,"20200403324" };
//	struct stu* p = &s1;
//	printf("%s\n", p->name);//�ṹ��ָ��->�ṹ���Ա��
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
//int main()//ʮ����ת���ɶ�����
//{
//	int x;
//	int arr[n];
//	int i=0;
//	printf("������10�������֣�");
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

//'~'--��λȡ��
//int main()
//{
//	short a = 0;
//	int b = 5;
//	printf("%d\n", sizeof(a=b+5));//sizeof�ڲ��Ĳ������ǲ����м����
//	printf("%d", a);
//	return 0;
//}


//int main()//ͳ��һ���������������м�����1��
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


//int main()//�����������֣������õ�������
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
//	//>>--���Ʋ�����(��������)���ƶ����Ƕ�����λ//�г�2^1��Ч��
//	//16=10000
//	a >> 1;//01000--8
//	printf("%d", a >> 1);
//	int b = 5;
//	printf("%d",b<<2);//ֱ�Ӷ�����λ����2λ//�г�2^2��Ч��
//	return 0;
//}