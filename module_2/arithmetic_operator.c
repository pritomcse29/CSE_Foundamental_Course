//+ ,- , * , / , %

#include <stdio.h>
int main(){
    int a=10, b=21;
    int sum = a+b;
    int sub = b-a;
    int mul = a*b;
    float div = b*1.0/a;
    int rem = b%a;

    printf("%d\n", sum);
    printf("%d\n", sub);
    printf("%d\n", mul);
    printf("%0.2f\n", div);
    printf("%d", rem);
}