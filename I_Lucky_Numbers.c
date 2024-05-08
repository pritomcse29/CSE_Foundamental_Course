#include<stdio.h>
int main(){
 int n,q,r;
 scanf("%d",&n);
 if(n>9 && n<=99){
    
    if(n==10){
        printf("NO\n");
    }

    else{
        q=n/10;
        r=n%10;
        int rem = q%r;
        int rem2 = r%q;
        if(rem==0 || rem2==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
 }
}
return 0;
}