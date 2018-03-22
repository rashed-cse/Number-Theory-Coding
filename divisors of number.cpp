#include <bits/stdc++.h>
using namespace std;

int main()
{
  long n;
while(scanf("%ld",&n)!=EOF)
{
    long divisors[100005]={0},d=1,t=0,k,r,i;


    while(n%2==0)
    {
        d=d*2;
        divisors[t++]=d;
        n=n/2;
    }

    for(k=3;k<=sqrt(n);k=k+2)
    {
        if(n%k==0)
        {
            d=1;
            r=t;
            while(n%k==0)
            {
                n=n/k;
                d=d*k;
                divisors[t++]=d;
                for(i=0;i<r;i++)
                    divisors[t++]=divisors[i]*d;
            }
        }
    }
    if(n>1)
    {
        r=t;
        divisors[t++]=n;
        for(i=0;i<r;i++)
            divisors[t++]=divisors[i]*n;
    }
    divisors[t++]=1;
    sort(divisors,divisors+t);

    for(i=0;i<t;i++)
        printf("%ld ",divisors[i]);
    printf("\n");

}
return 0;
}
