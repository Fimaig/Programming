/**
 *@file task66.c.
 *@brief Помножити масив сам на себе.
 *@author Єфімчук Ігор Денисович.
 *@date 30-dec-2020.
 *version 1.0.
*/

#include <stdlib.h>
#define N 4

/**
 * Фунція для множення масиву.
*/

int function(int arr[N][N]);

/**
 * Функція main:
 * задає масив,
 * передає його до функції function.
 * оголошує результат.
*/

int main()
{
	srand(time(NULL));
	int arr[N][N] ={0};
	int res[N][N] = {0};
	for (int i = 0; i < N; i ++)
	{
		for (int j = 0; j < N; j ++)
		{
			arr[i][j] = rand() % 10;
		}
	}
	res[N][N] = function(arr);
	return 0;
}

// Реалізація функції.

int function(int arr[N][N])
{
  	int arr_res[N][N] = {0};
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			for(int k = 0; k < N; k++)
			{
				arr_res[i][j] += arr[i][k]*arr[k][j];
			}
		}
	}
	return arr_res[N][N];
}
