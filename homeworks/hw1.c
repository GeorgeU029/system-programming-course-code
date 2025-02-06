#include <hw1header.h>
int main(void){
    char line[MAX_LENGTH];

    while (fgets(line,MAX_LENGTH,stdin)){ //Gets a single line from the user input
    int length = strlen(line) - 1; // get length of the input from the user subtract one beuase of '\n'
    line[length] = '\0'; //dropping the new line so that we can correcly calculate what we want from the string

    //the rest of the code now checks for patterns 
    if(is_singleton(line)){
        printf("Singleton\n");
    }
    if(is_palindrome(line)){
        printf("Palindrome\n");
    }


    printf("\n");

    }
    return 0;
}