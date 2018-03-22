//calculation (a^m)%MOD
#include <cstdio>
#include <cmath>
#define mod 1000007
using namespace std;

//calculation (a^m)%mod
long long bigmod (long long a, long long m)
{
    long long ret = 1;
    while (m)
    {
        if (m & 1)
            ret = ret * a % mod;
        m >>= 1;
            a = (a * a) % mod;
    }
    return ret;
}


int main()
{
    long a,m,r;
    while(scanf("%ld%ld",&a,&m)!=EOF)
    {
        r=bigmod(a,m);
        printf("%ld\n",r);
    }
	return 0;
}
