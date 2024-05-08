#include<stdio.h>
#include<string.h>
int main(){
    
 char s[1001],t[1001];
 scanf("%s %s",s,t);
 int st=strlen(s);
 int st2=strlen(t);
//  int count=0;
//  for(int i=0;s[i]!='\0';i++){
//     count++;
//  }
 
//  int count2=0;
//  for(int i=0;t[i]!='\0';i++){
//     count2++;
//  } 
  
//  printf("%d %d\n",count,count2);
//  printf("%s %s",s,t); 
 printf("%d %d\n",st,st2);
 printf("%s %s",s,t); 

return 0;
}