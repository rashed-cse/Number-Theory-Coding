#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int d[12]={0},r,t,s=1;
		d[0]=1;d[1]=1;d[2]=2;d[3]=6;d[4]=4;d[5]=2;d[6]=2;d[7]=4;d[8]=2;d[9]=8;
		while(n>9)
		{
			t=n%100;
			t=t/10;
			if(t%2==0)
				s=s*6;
			else
				s=s*4;
			r=n%10;
			s=s*d[r];
			n=n/5;
		}
		s=s*d[n];
		s=s%10;
		printf("%d\n",s);
	}
	return 0;
}
