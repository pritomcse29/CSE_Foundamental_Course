#include<stdio.h>
int main(){
 long long int n,i;
 scanf("%lld",&n);
 long long int a[n];
 for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
 }
 for(i=0;i<n;i++){
     if(a[i]<=10){
         printf("A[%lld] = %lld\n",i,a[i]);
     }
 }
return 0;
}