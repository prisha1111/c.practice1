#include<stdio.h>
#include<string.h>
int main()
{
	char n[20];
	int i,l;
	printf("\n enter a name");
	gets(n);
	l=strlen(n);
	for(i=0;i<l;i=i+2)
	{
		printf("\n %c",n[i]);
	}
}
