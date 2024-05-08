#include <stdio.h>
#include <string.h>
int is_palindrome(char *s){
    int len=strlen(s);
    char s2[1000];
    int c=0;
    for(int i=0,j=len-1;i<=len-1,j>=0;i++,j--){
           s2[j]=s[i];  
    }
    s2[len]='\0';
    for (int i=0; i<len; i++) {
        if (s[i] == s2[i]) {
            c = 1; 
            break;
        }
    }
   
  return c;
}
int main(){
    char s[1000];
    scanf("%s",&s);
    int c=is_palindrome(s);
    if(c==0){
        printf("Not Palindrome\n");
    }
    else if(c==1){
        printf("Palindrome\n");
    }
    return 0;
}