#pragma once
#include<stdio.h>
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