#include<stdio.h>
#include<windows.h>

//3������


void third_quiz()
{
	system("color 3E");
}

//4������
void fourth_quiz()
{
	char string[10] = "color ";
	char a;
	char b;
	rewind(stdin);
	scanf_s("%c", &string[6] , sizeof(string[6]));
	rewind(stdin);
	scanf_s("%c", &string[7], sizeof(string[7]));
	string[8] = '\0';

	system(string);
}

int sol5_1(int a, int b) {
	//5������
	int sum = 0;

	for (int i = a; i <= b; i++)
	{
		sum += i;
		printf("%d", i);

		if (i != b)
		{
			printf("+");
		}
		else
		{
			printf("=");
		}
	}
	printf("\n");
	printf("��ü �� = %d\n", sum);

	return sum;
}

//6������
int sixth_quiz(a, b)
{
	int sum = 1;
	for (int i = a; i <= b; i++)
	{
		sum = sum * i;
		printf("%d", i);

		if (i != b)
		{
			printf("x");
		}
		else if (i == b)
		{
			printf("=");
		}
	}
	return sum;
}

//7������
int sol7(int a, int b, char c) {
	int multiple = 0;
	int sum = 0;
	switch (c)
	{
	case '+' :
		sum = sol5_1(a, b);
		printf("%d\n", sum);
		break;
	case '*' :
	case 'x':
	case 'X':
		multiple = sixth_quiz(a, b);
		printf("%d\n", multiple);
		break;
	default:
		printf("���ܻ�Ȳ\n");
		break;
	}
}

//8������
int sol8(int num)
{
	int sum = 1;
	for (int i = 1; i <= num; i++)
	{
		sum = sum * i;
	}
	return sum;
}

int main()
{
	third_quiz();

	int a, b;
	printf("a, b : ");
	scanf_s("%d %d", &a, &b);

	int res = sixth_quiz(a, b);
	printf("%d\n", res);

	char c;
	printf("a, b, c : ");
	rewind(stdin);
	scanf_s("%d %d %c", &a, &b, &c, 1);
	sol7(a, b, c);

	printf("8�� ���� : 1���� n������ ��\n");
	int n;
	scanf_s("%d", &n);

	printf("1���� n������ �� = %d\n", sol8(n));


	fourth_quiz();
}

