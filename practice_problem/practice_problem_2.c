#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    float divi = a*1.0/b;
    printf("%d + %d = %d\n",a,b,sum);
    printf("%d - %d = %d\n",a,b,sub);
    printf("%d * %d = %d\n",a,b,mul);
    printf("%d / %d = %0.2f",a,b,divi);
    return 0;
}