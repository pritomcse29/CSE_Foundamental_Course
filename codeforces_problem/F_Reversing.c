#include<stdio.h>
int main(){
  long long int n;
  scanf("%lld",&n);
  long long int i;
  long long int a[n];
  for(i=0;i<n;i++){
      scanf("%lld",&a[i]);
  }
  for(i=n-1;i>=0;i--){
     printf("%lld ",a[i]);
  }
 

return 0;
}