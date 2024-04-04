#include<stdio.h>
int main(){
    long long int i;
    scanf("%lld",&i);
    if(i>0){
        printf("%d positive",i);
    }
    else if(i<0){
        printf("negative");
    }
    else{
        printf("zero");
    }
    return 0;
}