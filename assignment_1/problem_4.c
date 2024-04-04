#include <stdio.h>
int main(){
    long long int N;
    scanf("%lld",&N);
    for (int i=1;i<=N;i++){
         
            if(i%3==0 && i%7==0)
              {
              printf("%lld\n",i);
                }
    }
    return 0;
}