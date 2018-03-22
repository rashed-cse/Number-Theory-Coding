/**Subset of nuber from 1 to N every number.   */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);

    long i,k,n;
    while(cin>>n)
    {
        for(i=0;i<(1LL<<n);i++)
        {
            for(int j=0;j<=n;j++)
            {
                if(i&(1<<j))
                    cout<<j<<" ";

            }
            cout<<endl;
        }
    }
	return 0;
}
