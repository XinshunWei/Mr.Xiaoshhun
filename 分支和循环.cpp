#include <stdio.h> #include <string.h>
#include<windows.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>



//int main()//�ػ�����
//{
//	
//	char arr[] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("���Խ���1�����ڹػ������롮�������ɽ���ػ�ָ�\n�����룺");
//	scanf("%s", arr);
//	if (strcmp(arr, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//void menu()
//{
//	printf("########################\n");
//	printf("#### 1.play  0.exit  ###\n");
//	printf("########################\n");
//}
//void game()
//{
//	int guess=0;
//	int ret = rand() % 100 + 1;//���������
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("�������:");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//}
//int main()//��������Ϸ
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:____(1/0)\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����,�����롮1�����ߡ�0��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()//����Ļ������˷��ھ���
//{
//	int i;
//	for (i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()//�ҳ�ʮ�����е����ֵ
//{
//	int arr[] = {1,2,-3,4,-5,11,7,5,3,10};
//	int max = arr[0];
//	for (int i = 0; i < 10;i++)
//	{
//		if (max > arr[i])
//			;
//		else
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}


//int main()//1-1/2+1/3....-1/100
//{
//	int i;
//	double sum1=0.0,sum2=0.0,sum;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//		{
//			sum1 +=-(1.0 / i);
//		}
//		else
//		{
//			sum2 += 1.0 / i;
//		}
//		sum = sum1 + sum2;
//	}
//	printf("sum=%lf", sum);
//	return 0;
//}


//int main()//1--100���ж��ٸ�9
//{
//	int i;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 )
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}


//int main()//��100��200֮�������
//{
//	int i;
//	int count=0;
//	for(i=101;i<=200;i+=2)
//	{
//		int j;
//		for (j = 2; j <= sqrt(i); j++)//sqrtΪ��ƽ������ѧ�⺯��
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j  > sqrt(i))
//			{
//				printf("%d ", i);
//				count++;
//			}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//int main()
//{
//	int i;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������\n");
//		scanf("%s", &password);
//		if (strcmp(password,"123456")==0)//==���������Ƚ������ַ�����ȣ�
//									  //Ҫ��һ���⺯��strcmp
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������");
//		}
//	}
//	if (i >= 3)
//	{
//		printf("�������Σ����Ժ���������");
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "!!!!!!!!!!!!!!";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		left++;
//		right--;
//	}
//	return 0;
//}


//int main()//���ֲ��ҷ�
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0; 
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid -1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid +1;
//		}
//		else
//		{
//			printf("Yes,�±��ǣ�%d", mid);
//			break;
//		}
//	}
//		if (left > right)
//		{
//			printf("NO");
//		}
//	return 0;
//}


//int main()//1��3�Ľ׳˵ĺ� 
//{
//	int n;
//	int sum=0;
//	int ret=1;
//	for (n = 1; n < 4; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//
//	int n;
//	int i;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <4; n++)
//	{
//		ret = 1;//
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("sum=%d", sum);
//	return 0;
//}



//int main()//n�Ľ׳�
//{
//	int n;
//	int i;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i=1;i<=n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=%d", ret);
//	return 0;
//}


//int main()
//{
	//int i = 0;
	//int j = 0;
	//for (; i < 10; i++)
	//{
	//	for (; j < 10; j++)
	//		printf("�Ǻ�\n");
	//}

//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//			printf("�Ǻ�\n");
//	}
//	return 0;
//}


//int main()
//{
//	int ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char ret;
//	int ch;
//	char password[20] = { 0 };
//	printf("����������\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ������(Y/N)\n");
//	ret = getchar();
//	if ('Y'== ret)
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0l;
//}


//int main()
//{
//	int ch = 0;
//	//Ctrl + Z
//	while ((ch = getchar()) != EOF)//EOF--end of file �ļ�������־
//		putchar(ch);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	while (a <= 10)
//	{
//		a++;
//		if (a == 5)
//			continue;//braek
//		printf("%d ", a);
//	}
//	return 0;
//}


//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	switch (a)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//	default:
//		printf("qu������Ч����");
//		break;
//	}
//
//	return 0;
//}


//int main()
//{
//	int a=1;
//	if (1 == a)
//		printf("AAA");
//	else//elseֻ�������δƥ���ifƥ��
//		printf("bbb");
//	
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("�ж���ż\n");
//	scanf("%d", &a);
//	if (1 == a % 2)
//		printf("����");
//	else
//		printf("ż��");
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 == 1)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha\n");
//	else						//else�������δƥ���if��ƥ��
//		printf("hehe");	
//	return 0;
//
	//if (a == 1)
	//{
	//	if (b == 2)
	//		printf("haha\n");
	//}
	//	else
	//		printf("hehe");
	//return 0;
//}



//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 0)
//	{
//		if (age < 18)
//			printf("δ����");
//		else if(age>=18 && age<60)//else if(age<60)
//			printf("����");
//		else
//			printf("������");
//		return 0;
//	}
//	else
//		printf("���������0����");
//}