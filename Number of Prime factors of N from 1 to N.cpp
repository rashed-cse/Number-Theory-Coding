/** Count number of prime factor in a range from 1 to N.*/
#include<bits/stdc++.h>
using namespace std;

long d[100009]={0},p[100009]={0};
int main()
{
    int i,k,j,tc,n,m,a,b,t=1,rt;
    n=100000;
    for(i=0;i<=n;i++)
        p[i]=i;

    rt=sqrt(n)+1;
    for(i=2;i<=rt;i++)
    {
        if(p[i]==i)
        {
            for(k=i;k<=n;k=k+i)
            {
                while(p[k]%i==0)
                {
                    p[k]=p[k]/i;
                    d[k]++;
                }
            }
        }
    }
    for(i=2;i<=n;i++)
    {
        if(p[i]>1)
            d[i]++;
    }

    for(i=2;i<=50;i++)
        printf("Number of prime factor of %d = %d\n",i,d[i]);

	return 0;
}
