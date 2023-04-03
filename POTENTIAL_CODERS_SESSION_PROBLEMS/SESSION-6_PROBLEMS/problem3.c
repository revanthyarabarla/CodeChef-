#include <stdio.h>

int main(void) {
	// your code goes here
	int T;
	scanf("%d", &T);
	while(T--)
	{
	    int n, k, d, x;
	    scanf("%d %d", &n, &k);
	    if (n % k == 0)
	    {
	        d = n / k;
	        x = k;
	    }
	    else
	    {
	        d = n / k + 1;
	        x = n % k;
	    }
	    printf("%d %d\n", d, x);
	}
	return 0;
}
