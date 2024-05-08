#include<stdio.h>
int main(){
 int n,even=0,odd=0,positive=0,negative=0;
 scanf("%d",&n);
 int all_num;
 for(int i=1;i<=n;i++){
    scanf("%d",&all_num);
        if(all_num%2==0){
            even++;
            
        }
        else if(all_num%2!=0){
            odd++;
            
        }
        if(all_num>0){
            positive++;
           
        }
        if(all_num<0){
            negative++;
            
        }
 }
 printf("Even: %d\n",even);
 printf("Odd: %d\n",odd);
 printf("Positive: %d\n",positive);
 printf("Negative: %d\n",negative);
return 0;
}