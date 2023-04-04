#include <stdio.h>
#include<math.h>
int main() 
{
	int tc;
	scanf("%d",&tc);
	while(tc--)
	{
	    int n,d,k,j,c=0;
	    scanf("%d %d",&n,&d);
	    k=n;
	    int s=0;
	    while(k!=0)
	    {
	        j=k%10;
	        k=k/10;
	        c++;
	        if(j==d)
	        {
	            k=k*pow(10,c);
                k=k+(j+1)*pow(10,c-1);
                s=k-n;
                c=0;
	        }
	    }
	    printf("%d\n",s);
	}
	return 0;
}
