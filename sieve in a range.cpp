// Sive in a range a to b.
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define siz 1000000

bool c[100000009]={0};
long p[10000000];
int main()
{
	long i,k,t=0,tt,d;

    d=sqrt(100000000)+1;
	for(i=3;i<d;i=i+2)
	{
		if(c[i]!=1)
		{
			for(k=i*i;k<100000000;k=k+2*i)
				c[k]=1;
		}
	}
	//p[0]=2;
	//t=1;
	for(i=3;i<100000000;i=i+2)
	{
		if(c[i]!=1)
		{
			p[t]=i;
			t=t+1;
			//printf("%ld ",i);
		}
	}
	tt=t;

	long a,b;
	while(scanf("%ld%ld",&a,&b)==2)
	{
		long prime[100000]={0},t=0,n=0;
		char *x;
		x=(char*)malloc(siz*sizeof(char));
		if(a<3)
		{
			prime[0]=2;
			t=1;
			a=3;
		}
		if(a%2==0)
			a=a+1;
		if(b%2==0)
			b=b-1;
		d=sqrt(b);
		i=0;
		while(p[i]<=d)
		{
			n=ceil((a*1.0)/p[i]);
			if(n==1)
				n=2*p[i];
			else
				n=n*p[i];
			for(k=n;k<=b;k=k+p[i])
				x[k-a]=1;
			i=i+1;
		}
		for(i=a;i<=b;i=i+2)
		{
			if(x[i-a]!=1)
			{
				prime[t]=i;
				t=t+1;
			}
		}
		for(i=0;i<t;i++)
		  printf("%ld ",prime[i]);
		printf("\n");
	}
	return 0;
}
