// Big Integer Division a/b
#include <stdio.h>
#include <string.h>

int main()
{
	int b;
	char a[1000];
	while(scanf("%s%d",a,&b)!=EOF)
	{
		int l,c[1000]={0},i,k=0,n=0,t,j;
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			n=n*10+a[i]-48;
			t=n/b;
			c[i]=t;
			n=n%b;
		}
		for(j=0;j<i-1;j++)
		{
			if(c[j]==0)
				continue;
			else
				break;
		}
		for(k=j;k<i;k++)
			printf("%d",c[k]);
		printf("\n");
	}
	return 0;
}
