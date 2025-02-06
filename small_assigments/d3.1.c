#include <stdio.h>
#include <string.h>

int find_last_occurrence(char haystack[], char needle[]);
int find_first_occurrence(char haystack[], char needle[]);
int break_in_half( char input[],int size);
int main() {
    
    char haystack[] = "This is the way.";
    char needle[] = "is";

   
    printf("Last occurrence index: %d\n", find_last_occurrence(haystack, needle));
    printf("First occurance index: %d\n", find_first_occurrence(haystack,needle));


        
    char input[] = "Hello world";
    int size = strlen(input);
    break_in_half(input, size);
    printf("%dX%s", size, input);

    return 0;

}

int find_last_occurrence(char haystack[], char needle[]){
    char *last_occurrence = NULL;
    char *current_occurrence = strstr(haystack,needle);
       
    while (current_occurrence != NULL) {
        last_occurrence = current_occurrence;
        current_occurrence = strstr(current_occurrence + 1,needle);
        
    }
    return (last_occurrence != NULL) ? (last_occurrence - haystack) : -1;
}

int find_first_occurrence(char haystack[], char needle[]){
    char *first_occurrence = strstr(haystack,needle);


    return (first_occurrence != NULL) ? (first_occurrence - haystack) : -1;
}
int break_in_half(char arr[], int size){
   arr[size/2] = '\0';//halves the string
   size = size / 2;
   return size;
}