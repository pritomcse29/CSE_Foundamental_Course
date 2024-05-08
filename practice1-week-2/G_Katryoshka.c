#include<stdio.h>
int main(){
 int e,m,b,first_total,second_total,second_total1,second_total2,second_total3,third_total,total,s,s2;
 scanf("%d %d %d",&e,&m,&b);
 int sum = e+m+b;
 int min =e;
 if(m>0){
    if(min>=m ){
        min=m;
    }
    else if(min>=b){
        min=b;
    }
 }
    // printf("min %d\n",min);
    if(m>0){
         int minus=e-min;
         int minus2=m-min;
         int minus3=b-min;
        if(e>=min && m>=min && b>=min){
            first_total=min;
        }
        if(minus>=2 && minus2>=0 && minus3>=0){
            second_total1=e/2;
            second_total2=m/1;
            second_total3=b/1;
            second_total=second_total1+second_total2+second_total3+first_total;
            s=minus+second_total2;
            s2=s-m;
        }
        
        if(s2==0){
            third_total=e/2;
            total=second_total+third_total;
            printf("%d",total);
        }
        
    }
    else{
        if(m==0 && e>=2 && b>0){
             second_total=e/2;
             printf("%d", second_total);
        }
    }
    // printf("%d\n", first_total);
    // printf("%d", second_total);
return 0;
}