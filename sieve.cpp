#include<stdio.h>
#include<math.h>
char a[10000000]={0};
int main()
{
	int i,k,n;
	scanf("%d",&n);
	for(i=3;i<=sqrt(n);i=i+2)
	{
		if(a[i]!=1)
		{
			for(k=i*i;k<=n;k=k+2*i)
				a[k]=1;
		}
	}
	for(i=3;i<=n;i=i+2)
	{
		if(a[i]!=1)
			printf("%d ",i);
	}

		return 0;
}
