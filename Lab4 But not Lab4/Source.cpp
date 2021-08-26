#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	char string[100];
	int i = 0, temp, Lenght, loop = 0;
	scanf("%s", string);
	Lenght = strlen(string) - 1;

	while (i <= Lenght) {
		if (48 <= (int)string[i] && (int)string[i] <= 57) {
			temp = ((int)string[i] - 48);
			loop = (loop * 10) + temp;
		}
		else if (!(48 <= (int)string[i] && (int)string[i] <= 57)&&loop>0) {
			while (loop > 0)
			{
				printf("%c", string[i]);
				loop--;
			} 

		}
		else if (loop == 0&&(int)string[i-1]==48) {
			loop = 0;
		}
		else if (loop == 0) {
			printf("%c", string[i]);
		}
		i++;
	}

	return 0;
}