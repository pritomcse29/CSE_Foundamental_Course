#include <stdio.h>
int main(){
    
    long long int sum = 0,i,n;
    scanf("%lld", &n);
    for(i=0;i<=n;i++){
        sum = sum+i;
        printf("summation: %lld",sum);
    }
    printf("summation: %lld",sum);
    return 0;
}