#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 64


int cmp (const void *a, const void*b) {  return strlen ( *(char **)a) - strlen ( *(char **)b) ; }

int main()
{
	char ch;
	int cnt = 0, i = 0, j;
	char buf[SIZE][SIZE];
	char *s[SIZE];
	FILE *fin;
	fin=fopen("1.txt","rt");
	if(!fin) {
	printf("Error! (I can’t open text.txt)\n");
	return 1;
	}
	while((ch=fgetc(fin))!=EOF)
	{
		buf[cnt][i++] = ch;
		if(ch == '\n')
		{
			buf[cnt][i-1] = '\0';
			cnt++;
			i = 0;
		}
	}
	buf[cnt][i] = '\0';	
	buf[++cnt][0] = '\0';
	cnt = 0;
	do
	{
		s[cnt-1] = buf[cnt-1];
		cnt++;
	}while(buf[cnt-1][0] != '\0');
	
	qsort (s, cnt - 1, sizeof(char*), cmp); 
	for( i = 0; i < cnt - 1; i++)
		puts(s[i]);
	fclose(fin);
	return 0;
}