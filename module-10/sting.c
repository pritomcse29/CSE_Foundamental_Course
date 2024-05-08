#include <stdio.h>
#include <string.h>
int main() {
    char a[100],b[100],c[100];
    scanf("%s %s",a,b);
    int len1=strlen(a);
    int len2=strlen(b);
    printf("%d %d\n",len1,len2);

     for(int i=0;i<=len1;i++){
        c[i]=a[i];
    }
     
    strcat(a,b);
    printf("%s\n",a);

        char temp=c[0];
        c[0]=b[0];
        b[0]=temp;
        
       printf("%s %s",c,b);
    
    return 0;
}