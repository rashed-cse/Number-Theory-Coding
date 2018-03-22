#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000];
	long n,i,l;
	while(scanf("%s",a)!=EOF)
	{
		n=0;
		l=strlen(a);
		for(i=0;i<l;i++)
			n=n*2+a[i]-48;
		printf("%ld\n",n);
	}
	return 0;
}