#include<stdio.h>

#include<string.h>

int main()
{
	char *s;
	int n,i,j,q=0;

	clrscr();

	gets(s);
	n=strlen(s);

	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			for(j=i-1;j>=q;j--)
				printf("%c",s[j]);
			q=i;
			printf(" ");
		}
		if(i==n-1)
		{
			for(j=n-1;j>=q;j--)
				printf("%c",s[j]);
			return;
		}
	}

	getch();
	return 0;
}
