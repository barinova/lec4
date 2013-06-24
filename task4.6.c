#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define M  64
#define N  64
int main()
{
	int i, years, yYears, oYears, cnt = 0;
	char str[N][M], *young, *old;

	while(cnt < 2)
	{
		printf("Number of relative: ");	
		scanf("%d", &cnt);
	}
	for(i = 0; i < cnt; i++)
	{
		printf("\nName of %d:", i + 1);
		scanf("%s",str[i]);
		printf("\nHow's years old:");
		scanf("%d",&years);
		if(i == 0)
		{
			yYears = years;
			oYears = years;
			young = old = str[i];
		}
		else if(yYears > years)
			{
				yYears = years;
				young = str[i];
			}
			else if(years > oYears)
			{
				oYears = years;
				old = str[i];
			}
	}

	printf("\nYounger : %s Older: %s", young, old);
	return 0;
}