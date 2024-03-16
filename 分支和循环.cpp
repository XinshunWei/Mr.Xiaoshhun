#include <stdio.h> #include <string.h>
#include<windows.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>



//int main()//关机程序
//{
//	
//	char arr[] = {0};
//	system("shutdown -s -t 60");
//	again:
//	printf("电脑将于1分钟内关机，输入‘我是猪’可解除关机指令。\n请输入：");
//	scanf("%s", arr);
//	if (strcmp(arr, "我是猪") == 0)
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
//	int ret = rand() % 100 + 1;//生成随机数
//	//printf("%d\n", ret);
//	while (1)
//	{
//		printf("请猜数字:");
//		scanf("%d", &guess);
//		if (guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//int main()//猜数字游戏
//{
//	int input;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择:____(1/0)\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏");
//			break;
//		default:
//			printf("选择错误,请输入‘1’或者‘0’\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//int main()//在屏幕上输出乘法口诀表
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


//int main()//找出十个数中的最大值
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


//int main()//1--100中有多少个9
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


//int main()//找100到200之间的素数
//{
//	int i;
//	int count=0;
//	for(i=101;i<=200;i+=2)
//	{
//		int j;
//		for (j = 2; j <= sqrt(i); j++)//sqrt为开平方的数学库函数
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
//		printf("请输入密码\n");
//		scanf("%s", &password);
//		if (strcmp(password,"123456")==0)//==不能用来比较两个字符串相等；
//									  //要用一个库函数strcmp
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，");
//		}
//	}
//	if (i >= 3)
//	{
//		printf("错误三次，请稍后重新输入");
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


//int main()//二分查找法
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
//			printf("Yes,下标是：%d", mid);
//			break;
//		}
//	}
//		if (left > right)
//		{
//			printf("NO");
//		}
//	return 0;
//}


//int main()//1到3的阶乘的和 
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



//int main()//n的阶乘
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
	//		printf("呵呵\n");
	//}

//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//			printf("呵呵\n");
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
//	printf("请输入密码\n");
//	scanf("%s", password);
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码(Y/N)\n");
//	ret = getchar();
//	if ('Y'== ret)
//		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0l;
//}


//int main()
//{
//	int ch = 0;
//	//Ctrl + Z
//	while ((ch = getchar()) != EOF)//EOF--end of file 文件结束标志
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//	default:
//		printf("qu输入有效数字");
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
//	else//else只与最近的未匹配的if匹配
//		printf("bbb");
//	
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	printf("判断奇偶\n");
//	scanf("%d", &a);
//	if (1 == a % 2)
//		printf("奇数");
//	else
//		printf("偶数");
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
//	else						//else与最近的未匹配的if相匹配
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
//			printf("未成年");
//		else if(age>=18 && age<60)//else if(age<60)
//			printf("成年");
//		else
//			printf("老年人");
//		return 0;
//	}
//	else
//		printf("请输入大于0的数");
//}