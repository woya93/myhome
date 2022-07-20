#include<stdio.h>
#include<windows.h>
//1번문제
int testsum(int a, int b, int c)
{
	int sum = 0;  
	for (int i = a; i <= b; i++)
	{
		if (i % c == 0)
			continue;
		
		
		sum += i;               
	}

	return sum;
}


//2번문제
int clock(int sec)		 
{								
	
	if (sec >= 3600)
	{
		printf("error!\n");
		return -1;
	}

	int min = sec / 60;
	sec = sec % 60;

	printf("%d분 %d초\n", min, sec);
	return min;
}

int main()
{
	//1번문제

	printf("변수 a, b, c를 입력하시오.");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int result = testsum(a, b, c);
	printf("c의 배수 부분을 제외한 a부터 b까지의 합 : %d\n", result);


	//2번문제
	
	printf("Sec(초) 값을 입력하시오.\n");
	int s;
	scanf_s("%d", &s);
	clock(s);


	//5번문제
	int num1;
	int sum = 0;

	for (int i = 1; i <= 100; i++)
	{
		sum += i;
		printf("%d", i);

		if (i != 100)
		{
			printf("+");
		}
		else if (i == 100)
		{
			printf("=");
		}
	}
	printf("\n");
	printf("전체 합 = %d\n", sum);

	return sum;
}