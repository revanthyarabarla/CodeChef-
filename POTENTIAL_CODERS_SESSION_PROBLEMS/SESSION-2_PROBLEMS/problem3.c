#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--){
	    int A,B,C;
	    scanf("%d %d %d",&A,&B,&C);
	    int max(int A,int B,int C){
	    if(A>B && A>C)
	    return A; 
	    else if(B>A && B>C)
	    return B;
	    else
	    return C;
	    }
	    int min(int A,int B,int C){
	     if(A<B && A<C)
	    return A; 
	    else if(B<A && B<C)
	    return B;
	    else
	    return C;   
	    } 
	    int Ans = max(A,B,C)-min(A,B,C);
	    printf("%d\n",Ans);
	}
	return 0;
}

