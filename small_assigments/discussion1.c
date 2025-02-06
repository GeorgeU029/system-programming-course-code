#include<stdio.h>
int main(){
   int c;
   while( (c = getchar()) != '\n')
      if(c >= 'A' && c <= 'Z')
         putchar(c);
}