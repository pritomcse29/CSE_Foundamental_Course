#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    
    if(ch>=97 && ch<=121){
       
        printf("%c",ch+1);
    }
    else if (ch<=122)
    {
       
        printf("%c",ch-25);
    }

    return 0;
}