#include<stdio.h>
int main(){
 int n,all_num;
 scanf("%d",&n);
 int max=0;
 for(int i=1;i<=n;i++){
   
    scanf("%d",&all_num);
    if(max<all_num)
    {
        max=all_num;
    }
   
 }
  printf("%d",max);
 
return 0;
}