#include<stdio.h>
int main(){
    //print 1 2 3 4 5
    for(int i=1; i<=5; i=i+1){
        printf("%d\n",i);
    }
    //Reverse 1 2 3 4 5
    for(int i=5;i>=1;i=i-1){
        printf("%d\n",i);
    }
    return 0;
}