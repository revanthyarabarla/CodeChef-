#include <stdio.h>

int main() {
	int t,n,x,ans;
	scanf("%d",&t);
	while(t--){
	 scanf("%d %d",&n,&x);
	  ans = (n/10)*x;
	  printf("%d\n",ans);
	}
	return 0;
}

