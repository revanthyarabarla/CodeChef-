
#include <stdio.h>

int main(void) {
	int n,d;
	scanf("%d %d",&n,&d);
	int l[n];
	for(int i=0;i<n;i++){
	    scanf("%d",&l[i]);
	}
	
	int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

qsort(l, n, sizeof(int), cmpfunc);
int count=0;
for(int i=1;i<n;i++)	{
	    if(l[i]-l[i-1]<=d)  {
	          count++;
	         i++;
	}
}
	printf("%d\n",count);
	return 0;
}
