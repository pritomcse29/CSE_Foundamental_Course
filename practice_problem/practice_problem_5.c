#include<stdio.h>
int main(){
    int taka;
    scanf("%d",&taka);
    if(taka>=10000){
        printf("Buy Gucci bag\n");
        if(taka>20000){
        printf("Buy Gucci Belt\n");
    }
        
    }
    else if(taka>=5000){
        printf("Levis Bag");
    }
    else{
        printf("Something");
    }
    return 0;
}