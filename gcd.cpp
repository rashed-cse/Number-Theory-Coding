#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	else
		gcd(b%a,a);
}
int main()
{
	int a,b,c;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		c=gcd(a,b);
		    printf("%d\n",c);
	}
	return 0;
}
