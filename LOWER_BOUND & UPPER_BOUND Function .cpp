#include <bits/stdc++.h>
using namespace std;

int main()
{
	int a[100000]={0},i,lp,up,value,n;

	cin>>n;
	for(i=0;i<n;i++)
        scanf("%d",&a[i]);

	while(scanf("%d",&value)!=EOF)
	{
		lp=0;up=0;

		lp=lower_bound(a,a+n,value)-a;
		up=upper_bound(a,a+n,value)-a;
		//print position of value
		printf("lower position = %d  upper positin = %d\n\n",lp,up);
		//printf value
		printf("lower value = %d  upper value = %d\n\n",a[lp],a[up]);

		//using vector
		//lp=lower_bound(a.begin(),a.end(),value)-a.begin();
		//up=upper_bound(a.begin(),a.end(),value)-a.begin();
	}
	return 0;
}
