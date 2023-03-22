#include <stdio.h>

int main() {
    int t,p,max,i,count;
	scanf("%d", &t);
	while(t--){
		scanf("%d", &p);
		max = 2048;
		count = 0;
		while(max >= 1){
			if(p >= max)
			{
				count++;
				p -= max;
			} 
			else
				max /= 2;
		}
		printf("%d\n", count);
	}
    return 0;
}

