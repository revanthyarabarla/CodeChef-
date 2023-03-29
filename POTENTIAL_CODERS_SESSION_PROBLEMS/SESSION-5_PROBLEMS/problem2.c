#include <stdio.h>

int main(void) {
	int t,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d %d",&x,&y);
	    if(x>y)
	        printf("%d\n",x-y);
	    else if(x<y)
	        printf("%d\n",y-x);
	        else
	        printf("0\n");
	}
	return 0;
}

