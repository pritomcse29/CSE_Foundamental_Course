#include<stdio.h>
int main(){
    int a,b;
    char p;
    // scanf("%da %db",&a,&b);
    // scanf("%d%% %d%%",&a,&b);
    scanf("%d%c %d%c",&a,&p,&b,&p);
    printf("%d%% %d%%",a,b);
    return 0;
}