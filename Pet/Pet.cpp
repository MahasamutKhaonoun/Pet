#include<stdio.h>

void findwinner(int* winner, int* w_score);

int com_point[6][5]; // 5 4
int main()
{
	int winner=0, w_score=0 ;
	for (int i = 1; i <= 5; i++)
	{
		for(int j =1; j<=4; j++)
		{ 
			scanf_s("%d", &com_point[i][j]);
		}
	}
	findwinner(&winner,&w_score);
	printf("%d %d", winner, w_score);
	return 0;
}

void findwinner(int *winner, int *w_score)
{
	for (int i = 1; i <= 5; i++) 
	{
		if (*w_score < com_point[i][1] + com_point[i][2] + com_point[i][3] + com_point[i][4]) //Check winner who have most score
		{
			*w_score = com_point[i][1] + com_point[i][2] + com_point[i][3] + com_point[i][4];
			*winner = i;
		}
	}
}