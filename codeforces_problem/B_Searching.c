#include<stdio.h>
int main(){
 long long int n,i,x,p;
 p=-1;
 scanf("%lld",&n);
 long long int a[n];
 for(i=0;i<n;i++){
    scanf("%lld",&a[i]);
 }
scanf("%lld",&x);
for(i=0;i<n;i++){
    if(x==a[i]){
        p=i+0;
        break;
    }
    
}
if(p==-1){
    printf("-1");
}
else{
    printf("%d",p);
}
return 0;
}