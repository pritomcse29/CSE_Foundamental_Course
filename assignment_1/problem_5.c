#include <stdio.h>
int main(){
    long long int N;
    scanf("%lld",&N);
    if(N>1000){
        printf("I will buy punjabi\n");
        if(N-1000>=500){
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else{
        printf("Bad Luck");
    }
    return 0;
}