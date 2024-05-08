#include <stdio.h>
#include <string.h>
int is_palindrome(char s[]){
    int len=strlen(s);
    char s2[1000];
    int c=0;
    for(int i=len-1;i<=0;i--){
        s2[i]=s[i];
    }
    s2[len]='\0';
    
    for(int j=0;j<=len;j++){
        printf("%s\n",s2[j]);
    }
    if(s2==s){
        c++;
    }
   return c;
}
int main(){
    char s[1000];
    scanf("%s",&s);
    int c=is_palindrome(s);
    if(c==0){
        printf("Not Palindrome");
    }
    else if(c==1){
        printf("Palindrome");
    }
    return 0;
}