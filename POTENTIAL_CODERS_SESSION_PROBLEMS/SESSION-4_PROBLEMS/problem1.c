#include <stdio.h>

int main() {
	int t,n,k,a[100];
	scanf("%d",&t);
	while(t--){
	    int changed=0;
	    scanf("%d %d",&n,&k);
	    for(int i=0;i<n;i++){
	        scanf("%d",&a[i]);
	        if((a[i]+k)%7==0)
	        changed++;
	    }
	    printf("%d\n",changed);
	}
	return 0;
}

