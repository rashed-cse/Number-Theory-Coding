/*Print the prime number in a range using binary search.*/

#include<stdio.h>
int main()
{
	int i,k,h[100000]={0},p[10000]={0},a,b,u=1,mid,lw,up,c,x;
	for(i=3;i<300;i++)
	{
		if(h[i]!=1)
		{
			for(k=i+i;k<100000;k=k+i)
				h[k]=1;
		}
	}
	p[0]=2;
	for(i=3;i<100000;i=i+2)
	{
		if(h[i]!=1)
		{
			p[u]=i;
			u=u+1;
		}
	}
	printf("Enter Two Nmuber\n");
	scanf("%d%d",&a,&b);
	    lw=0;
		up=u-1;
		while(lw<=up)
		{
			mid=(lw+up)/2;
			if(a<p[mid])
				up=mid-1;
			else if(a>p[mid])
				lw=mid+1;
			else
			{
				c=mid;
				break;
			}
			c=lw;
		}
		lw=0;
		up=u-1;
		while(lw<=up)
		{
			mid=(lw+up)/2;
			if(b<p[mid])
				up=mid-1;
			else if(b>p[mid])
				lw=mid+1;
			else
			{
				x=mid;
				break;
			}
			x=up;
		}
		for(i=c;i<=x;i++)
			printf("%d ",p[i]);
		return 0;
}
