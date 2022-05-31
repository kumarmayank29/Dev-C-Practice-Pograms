#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

long long getCost (int X, int k, int* price, int N ) {
	
	qsort(price,N, sizeof(int), cmpfunc);
	 int cnt=0;
 for(int i=0;i<N;i++)
 {
     while(i<N-1 && price[i]==price[i+1])
     {
         i++;
     }
     cnt++;
 }
 if(cnt<=k)
 return 0;
 else
 return (cnt-k)*X;
	
}
	
	

  
int main() {
    int T;
    scanf("%d", &T);
    for(int t_i=0; t_i<T; t_i++)
    {
        int N;
        scanf("%d", &N);
        int k;
        scanf("%d", &k);
        int X;
        scanf("%d", &X);
        int i_price;
        int *price = (int *)malloc(N*sizeof(int));
        for(i_price=0; i_price<N; i_price++)
            scanf("%d", &price[i_price]);

        long long out_ = getCost(X, k, price, N);
        printf("%lld", out_);
        printf("\n");
    }
}

