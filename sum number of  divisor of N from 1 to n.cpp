//find total number of divisor 1 to n of N.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n,k;
    while(scanf("%ld",&n)!=EOF)
    {
        long s=0,r,x;
        x=sqrt(n);
        for(k=1;k<=x;k++)
          s=s+n/k;
        r=2*s-x*x;
        printf("%ld\n",r);
    }
	return 0;
}
