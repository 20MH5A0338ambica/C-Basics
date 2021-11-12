#include<stdio.h>
void main()
{
	int minutes;
	printf("enter total minutes");
	scanf("%d",&minutes);
	printf("%d hour(s), %d minute(s)", minutes/60, minutes%60);
}
