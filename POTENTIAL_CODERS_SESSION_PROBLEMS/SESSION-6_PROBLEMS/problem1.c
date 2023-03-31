#include <stdio.h>
int main(void) 
{
	int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        long long int n,m,count=0;
	    scanf("%lld%lld",&n,&m);
	    while(n!=0&&m!=0)
	    {
	        if(n>m&&n/m==1)
	        n%=m;
	        else if(m>n&&m/n==1)
	        m%=n;
	        else
	        {
	            count++;
	            break;
	        }
	        count++;
    	}
    	if(count%2==0)
    	printf("Rich\n");
	    else
	    printf("Ari\n");
    }
	return 0;
}
