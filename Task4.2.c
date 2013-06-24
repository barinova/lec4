#include <stdio.h>
#include <string.h>
#define N 64


int main()
{
	int i = 0;
	char str[N];//="a very simple string";
	char *tmp[N];
	fgets(str, N, stdin);
	char *p=str;
	
	tmp[i++] = &(*p);
	while(*p)
	{
		if(*p == ' ')
		{
			*p++;
			tmp[i++] = &(*p);
		}
		//putchar(*p++);
	}
	while(*tmp[--i])
	{
		while( *tmp[i] != '\n' && *tmp[i] != ' ')
		{
			putchar(*tmp[i]++);
		}
		putchar(' ');
		if( i - 1 < 0 )
			break;
	}
	return 0;
}