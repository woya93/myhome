#include<stdio.h>
//9������
int solution(int num) 
{
	if (num <= 1)
	{
		return 1;
	}
	return num * solution(num - 1);
}

//10������
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
	printf("1���� n������ ���� ���Ѵ�. n��?\n");
	int n;
	scanf_s("%d", &n);

	int result = solution(n);
	printf("��� : %d\n", result);

	

	int num;
	printf("\n���ϴ� �Լ� n�� ���� �Է��Ͻÿ�.\n");
	scanf_s("%d",&num);	

	printf("%d", sol10(num));


}