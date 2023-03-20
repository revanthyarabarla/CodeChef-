#include <stdio.h>

int main(void) {
	int t,N,C,K,need[100],sum;
	scanf("%d",&t);
	while(t--)
	{ int i=0;
	    scanf("%d %d",&N,&C);
	    for(int i=0;i<N;i++)
	    {
	         scanf("%d",&need[i]);
	     }
	     sum=0;
	     while(N--)
	     {
	         sum=sum+need[i];
	         i++;
	     }
	     if(sum<=C)
	     {
	         printf("Yes\n");
	     }else printf("No\n");
	     
	}
	return 0;
}
