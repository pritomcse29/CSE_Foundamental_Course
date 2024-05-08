#include <stdio.h>
void odd_even(void){
  int n;
  int odd_count=0;
  int even_count=0;
  scanf("%d",&n);
  int ar[n];
  for(int i=0;i<n;i++){
      scanf("%d",&ar[i]);
  }
  for(int i=0;i<n;i++){
      if(ar[i]%2==0){
         even_count++; 
      }
      else{
          if(ar[i]%2!=0){
              odd_count++;
          }
      }
  }
  printf("%d %d",even_count,odd_count);
  return;
}
int main(){
   odd_even();
    return 0;
}