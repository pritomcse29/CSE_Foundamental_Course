#include<stdio.h>
#include<string.h>
int main(){
    char s[1000001];
    fgets(s, sizeof(s), stdin);
    long long int st = strlen(s);
  
    for (long long int i = 0; s[i] != '\\'; i++){
        
        printf("%c",s[i]);
    }
    return 0;
}


// #include<stdio.h>
// #include<string.h>

// int main() {
//     char s[1000001];
//     printf("Enter a string: ");
//     fgets(s, sizeof(s), stdin);
    
//     long long int st = strlen(s);

//     for (long long int i = 0; s[i] != '\\'; i++) {
//         printf("%c", s[i]);
//     }

//     return 0;
// }
