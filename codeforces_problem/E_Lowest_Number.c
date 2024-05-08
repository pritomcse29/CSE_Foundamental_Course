#include<stdio.h>
int main(){
  long long int n,p=0;
  scanf("%lld",&n);
  long long int i;
  long long int a[n];
  
  for(i=0;i<n;i++){
      scanf("%lld",&a[i]);
  }
  long long int min = a[0];
  
  for(i=0;i<n;i++){
     
      if(min>a[i]){
          p=i+1;
          min=a[i];
      }
      
  }
   for(i=0;i<n;i++){
     if(min==a[i]){
   
          printf("%lld %lld\n",min,i+1);
          break;
     }
   } 
      

return 0;
}