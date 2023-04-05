#include <stdio.h>
int main(void)
{
		int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
		scanf("%d%d",&n,&m);
		long long *ar = (long long *)malloc((n+1)*sizeof(long long));
		for(int i=0;i<n+1;i++)
		ar[i]=1;
		long long count = 0;
		for(int i=2;i<=n;i++)
		{
			int temp=m%i;
			count+=ar[temp];
			for(int j=temp;j<=n;j+=i)
			
			{
				ar[j]++;
			}
		}
		printf("%lld\n",count);
	}
	return 0;
}
