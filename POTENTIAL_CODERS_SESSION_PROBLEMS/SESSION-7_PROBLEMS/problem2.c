#include <stdio.h>

int main() {
  // your code goes here
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, k, i, s = 0, f = 0;
      scanf("%d%d", &n, &k);
      char a[n];
      scanf("%s", a);
      int b[2]={0,0};
      for(i = k - 1; i < n; i++)
      {
          b[a[i]-'0']++;
      }
      int j=0;
      if(b[1] % 2 == 1)
      
      {
          s = s + pow(2, j);
          f++;
      }
      j++;
      for(i = k - 2; i >= 0; i--)
      {
          b[a[i]-'0']++;
          b[a[i-k+2+n-1]-'0']--;
          if(b[1] % 2 == 1)
          {
              s = s + pow(2, j);
              f++;
          }
          j++;
      }
      printf("%d\n",f);
  }
  return 0;
}
