#include <stdio.h>

int main() {
	int T,N,X,K;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&N,&X,&K);
	    if(K/X<=N)
	    printf("%d\n",K/X);
	    else
	    printf("%d\n",N);
	}
	return 0;
}

