#include <stdio.h>

int main() {
	int j,s,T;
	    scanf("%d %d  %d",&j,&s,&T);
	    int a = T-j;
	    if((a/s)%2 != 0)
	    printf("Unlucky Chef\n");
	    else
	    printf("Lucky Chef\n");
	return 0;
}

