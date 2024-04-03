#include <stdio.h>
int main(){
   
    int i,a;
    scanf("%d", &a);
    for (i=0; i<=a;i+=1){
        if (i == 0){
            printf("%d -Zero",i);
        }
        else if(i%2 == 0){
            printf("%d -Even\n",i);
        }
        else{
            printf("%d -Odd\n",i);
        }
    }
}