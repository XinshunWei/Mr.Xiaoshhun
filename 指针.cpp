#include<stdio.h>



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	int** pp = &p;
//	printf("p=%d\n", *p);
//	printf("pp=%d\n", **pp);//����ָ��
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr); //��Ԫ�ص�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);//��������ĵ�ַ 
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
//int main()//д��strlen��ʵ�ֺ���
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
//	printf("%d\n", & arr[9] - &arr[0]);//ָ��-ָ��=ָ��֮���Ԫ�ظ���
//										//���������������͵�ָ�������
//	return 0;							//Ҫ���ָ��-С��ָ��
//}


//int* test()//ָ��ָ��Ŀռ��ͷţ�Ұָ�룩
//{
//	int a = 10;
//	return &a;//�ֲ�������һ������������������壬�ռ�ͱ��ͷ���
//}
//int main()//err
//{
//
//	int *p=test();
//	printf("%d", *p);
//	return 0;
//}
//int main()//err		//����Խ���Ұָ������
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
//	//int *p;  //�ֲ�ָ�����������ʼ����Ĭ�������ֵ --Ұָ��
//	int arr[10] = { 0 };//int* p=NULL--��֪����ʼ����ʲô��ʱ�������������
//	int* p = arr;					//NULL--��ָ���ʼ����
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
//	//ָ�����;�����ָ����һ���߶�Զ
//	printf("%p\n", pc);
//	printf("%p\n", pc+1);
//
//	return 0;
//}


//int main()
//{
//
//	printf("%d\n", sizeof(int*));//int* p; *p�ܷ���4���ֽ�
//	printf("%d\n", sizeof(char*));//char* p; *p�ܷ���1���ֽ�
//	printf("%d\n", sizeof(double*));//char* p; *p�ܷ���8���ֽ�
//
//	return 0;
//}