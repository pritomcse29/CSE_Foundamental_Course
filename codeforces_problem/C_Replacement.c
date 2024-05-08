#include<stdio.h>
int main(){
 long long int n,i;
 scanf("%lld",&n);
 long long int a[n];
 for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
 }
for(i=0;i<n;i++){
    if(a[i]<0){
        a[i]=2;
        printf("%d ",a[i]);
    }
    else if(a[i]==0){
        a[i]=a[i];
        printf("%d ",a[i]);
    }
    else{
        if(a[i]>0){
          a[i]=1;
          printf("%d ",a[i]);
       }
    }
}
return 0;
}