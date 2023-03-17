// 박재성 , 202001512 , 컴퓨터전자시스템공학부

// for pull-reqeuest practice
// by user 2

//for question 1 처음 수정사항
//for question 1 두번째 수정사항


//for question 2 user2 수정사항 

//for question 2 user1 기존코드 수정사항


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int T,n[1000],buf,min=-1000;
	scanf("%d", &T);
	for (int y = 0; y < T; y++)
	{
		scanf("%d", &n[y]);
	}

	for (int j = 0; j < T - 1; j++)
	{
		min = n[j];
		for (int i = j+1; i < T; i ++)
		{
			if (n[i]<min)
			{
				buf = n[i];
				n[i] = min;
				min = buf;
			}
		}
		n[j] = min;
	}
	for (int y = 0; y < T; y++)
	{
		printf("%d\n", n[y]);
	}
	return 0;
}

