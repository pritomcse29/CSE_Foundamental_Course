// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int b[x];
    for(int i=0;i<x;i++){
        scanf("%d",&b[i]);
    }
    int y=x+n;
    int c[y];
    for(int i=0;i<n;i++){
        c[i]=a[i];
    }
    
    for(int i=n;i<x+n;i++){
        c[i]=b[i-n];
        //  printf("%d ",c[i]);
        //   printf("\n");
    }
    for(int i=0;i<y;i++){
        printf("%d ",c[i]);
    }
    return 0;
}