#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 64

char * chomp(char *buf)
{
if(buf[strlen(buf)-1]=='\n')
buf[strlen(buf)-1]=0;
}

int main()
{
	char str[N];
	int i = 0, mid;
	char *p = str, *begin, *end;
	fgets(str, N, stdin);
	chomp(str);
	while(*p)
	{
		putchar(*p++);
		i++;
	}
	p = str;
	begin = &p[0];
	end = &p[i - 1];
	mid = i/2;
	for(i = 0; i < mid; i++)
	{
		if(*begin++ != *end--)
		{
			puts("\nNe polindrom");
			break;
		}
		if( i == mid - 1)
			puts("\nPolindrom");
	}
	return 0;
}