#pragma once
#include<stdio.h>
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