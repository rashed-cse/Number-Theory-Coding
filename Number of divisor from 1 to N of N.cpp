/*Find number of divisor from 1 to N.*/

#include <bits/stdc++.h>
using namespace std;

int d[1000000]={0};
int main()
{
    long n,k,i;
    while(scanf("%ld",&n)!=EOF)
    {
        for(i=2;i<=n;i++)
          for(k=i;k<=n;k=k+i)
             d[k]=d[k]+1;
        for(i=1;i<=n;i++)
           printf("%d = %d\n",i,d[i]);
    }
	return 0;
}
