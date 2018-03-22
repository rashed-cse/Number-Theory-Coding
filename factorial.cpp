#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{

		int s[500000]={0},i=1,j,k,l=1,t;
		s[0]=1;

		for(j=1;j<=n;j++)
		{
			t=0;
			for(i=0;i<l;i++)
			{
				t=s[i]*j+t;
				s[i]=t%10;
				t=t/10;
			}
			while(t>0)
			{
				s[i]=t%10;
				t=t/10;
				i=i+1;
			}
			l=i;
		}

		printf("%d! = ",n);
		for(k=i-1;k>=0;k--)
			printf("%d",s[k]);
		//printf("%d\n",l);
	}
	return 0;
}
