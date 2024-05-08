#include <stdio.h>
int count_before_one(int *ar,int n,int count){
    
    for(int i=0;i<n;i++){
        if(ar[i]!=1){
            count++;
        }
        else if(ar[i]==1){
            break;
        }
    }
    return count;
}
int main() {
    int n;
    int c=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int count=count_before_one(ar,n,c);
    printf("%d",count);
    return 0;
}