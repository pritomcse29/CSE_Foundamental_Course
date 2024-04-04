#include <stdio.h>
int main(){
    int i;
    scanf("%d",&i);
    if(i>=0 && i%2==0){
        printf("even");
    }
    else if(i>=0 && i%2!=0){
        printf("odd");
    }
    else{
        printf("The number is less than 0");
    }
}