// give prime factor of number and output divisors such as
// input
 // 2
 //3 5
 // output
 //3,5,15

#include <bits/stdc++.h>

using namespace std;

long p[200009],d[200000000];
int main()
{
    long i,k,t=0,r,x;
    long long n;
    printf("Enter number of prime factor\n");
    cin>>n;
    printf("Enter prime factors :\n");
    for(i=0;i<n;i++)
        cin>>p[i];
    sort(p,p+n);
    for(i=0;i<n;i++)
    {
        r=t;
        x=1;
        while(p[i]==p[i+1])
        {
            x=x*p[i];
            d[t++]=x;
            for(k=0;k<r;k++)
                d[t++]=d[k]*x;
            i++;
        }
        x=x*p[i];
        d[t++]=x;
        for(k=0;k<r;k++)
            d[t++]=d[k]*x;
    }
    sort(d,d+t);
    printf("Divisors: ");
    for(i=0;i<t;i++)
        cout<<d[i]<< " ";
    cout<<endl;
    return 0;
}
