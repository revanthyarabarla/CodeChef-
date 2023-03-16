#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int x;
	    scanf("%d",&x);
	    if(x<=100)
	    printf("%d\n",x);
	    else
	    printf("%d\n",x-10);
	}
	return 0;
}

