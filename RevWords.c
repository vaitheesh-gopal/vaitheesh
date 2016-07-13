#include<stdio.h>
#include<conio.h>
#include<string.h>

void rec(char *s,int n,int i)
{
	int j;
	if(i>0)
	{
		if(s[i]==' ')
		{
			for(j=i+1;j<=n;j++)
				printf("%c",s[j]);
			n=i;
		}

		 i=i-1;
		 rec(s,n,i);
	}
	else if(i==0)
	{
		for(j=0;j<n;j++)
			printf("%c",s[j]);
		return;
	}


}

int main()
{
	char *s;
	int n,i,j;

	clrscr();

	gets(s);
	n=strlen(s);
	i=n;

	rec(s,n,i);


	getch();
	return 0;
}
