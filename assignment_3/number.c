#include <stdio.h>
int main() {
    int n,i,j;
    scanf("%d",&n);
    int s=n-1;
    int k=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=s;j++){
            printf(" ");
        }
        for(j=k;j>0;j--){
           
              printf("%d",j);
         
        }
         s--;
         k++;
        printf("\n");
    }
    return 0;
}