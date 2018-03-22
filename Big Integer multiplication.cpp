#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000]={0},b[1000]={0};
	int i,j,k,la,lb,t,s[2000]={0},c;
	scanf("%s%s",a,b);
	la=strlen(a);
	lb=strlen(b);
	for(i=lb-1,c=0;i>=0;i--,c++)
	{
		j=c;
		t=0;
		for(k=la-1;k>=0;k--)
		{
			t=(a[k]-48)*(b[i]-48)+s[j]+t;
			s[j]=t%10;
			t=t/10;
			j=j+1;
		}
		if(t>0)
		{
			s[j]=t;
			j=j+1;
		}
	}
	for(i=j-1;i>=0;i--)
		printf("%d",s[i]);
	printf("\n");
	return 0;
}

	
