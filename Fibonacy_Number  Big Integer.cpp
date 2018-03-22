#include <bits/stdc++.h>
using namespace std;

char f[5000][1002]={0};
int main()
{
	int i=1,k,c,l,l1,a,b,j,d,p;

	f[0][0]=49;f[1][0]=49;
	i=1;
	while(i<500)
	{
		c=0;
		//f[i+1]=f[i]+f[i-1];
		l=strlen(f[i]);
		l1=strlen(f[i-1]);
		l1=l1-1;
		j=0;
		for(k=l-1;k>=0;k--,l1--)
		{
			a=f[i][k]-48;
			b=0;
			if(l1>=0)
				b=f[i-1][l1]-48;
			p=a+b+c;
			f[i+1][j]=p%10+48;
			j++;
			c=p/10;

		}
		if(c>0)
		{
			f[i+1][j]=c+48;
			j++;
		}
		d=j/2;
		j=j-1;
		for(k=0;k<d;k++,j--)
		{
			p=f[i+1][j];
			f[i+1][j]=f[i+1][k];
			f[i+1][k]=p;
		}
		i++;
	}
	for(k=1;k<=20;k++)
		printf("%s\n",f[k]);
	return 0;
}
