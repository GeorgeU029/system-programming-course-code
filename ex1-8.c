#include <stdio.h>
/*count characters in input*/
int main(){
    int c ,nl,blanks,tabs;
    
    nl = 0;
    while((c = getchar()) != EOF){
        if(c=='\t'){
            printf("\\t");

        }else if(c=='\b'){

            printf("\\b");
        }else if (c=='\\'){

            printf("\\\\");
        }else
            putchar(c);
    }

    return 0;
}