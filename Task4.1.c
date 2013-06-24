#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 64

char * chomp(char *buf)
{
if(buf[strlen(buf)-1]=='\n')
buf[strlen(buf)-1]=0;
}

int cmp (const void *a, const void*b) {  return strlen ( *(char **)a) - strlen ( *(char **)b) ; }

int main()
{
	int cnt = 0,i, j;
	char buf[SIZE][SIZE];
	char *s[SIZE]; 
	printf("Enter a string, please: ");
	do
	{
		chomp(buf[cnt-1]);
		fgets(buf[cnt++],SIZE,stdin);
		s[cnt-1] = buf[cnt-1];

	}while(buf[cnt-1][0] != '\n');
	chomp(buf[cnt-1]);
	
	qsort (s, cnt - 1, sizeof(char*), cmp); 

	for( i = 0; i < cnt - 1; i++)
		puts(s[i]);	
	return 0;
}