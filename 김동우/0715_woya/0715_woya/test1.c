#include<stdio.h>
#include<windows.h>
//1������
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


//2������
int clock(int sec)		 
{								
	
	if (sec >= 3600)
	{
		printf("error!\n");
		return -1;
	}

	int min = sec / 60;
	sec = sec % 60;

	printf("%d�� %d��\n", min, sec);
	return min;
}

int main()
{
	//1������

	printf("���� a, b, c�� �Է��Ͻÿ�.");
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	int result = testsum(a, b, c);
	printf("c�� ��� �κ��� ������ a���� b������ �� : %d\n", result);


	//2������
	
	printf("Sec(��) ���� �Է��Ͻÿ�.\n");
	int s;
	scanf_s("%d", &s);
	clock(s);


	//5������
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
	printf("��ü �� = %d\n", sum);

	return sum;
}