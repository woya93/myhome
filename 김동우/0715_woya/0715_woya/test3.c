#include<stdio.h>
//9번문제
int solution(int num) 
{
	if (num <= 1)
	{
		return 1;
	}
	return num * solution(num - 1);
}

//10번문제
int sol10(int num)
{
	if (num == 0)
		return 0;
	else if (num == 1)
		return 1;
	else
	{
		return sol10(num - 1) + sol10(num - 2);
	}

}


int main() 
{
	printf("1부터 n까지의 곱을 구한다. n은?\n");
	int n;
	scanf_s("%d", &n);

	int result = solution(n);
	printf("결과 : %d\n", result);

	

	int num;
	printf("\n원하는 함수 n의 값을 입력하시오.\n");
	scanf_s("%d",&num);	

	printf("%d", sol10(num));


}