/* Discussion 2 question 1 */
#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    fgets(input, 1000, stdin);

    int length = strlen(input);
    
    if (input[length - 1] == '\n') {
        input[length - 1] = '\0';
        length--;
    }

    int left = 0;
    int right = length - 1;
    char reversed_char[length + 1];

    while (right >= 0) {
        reversed_char[left] = input[right];
        left++;
        right--;
    }
    reversed_char[left] = '\0';

    printf("Reversed: %s\n", reversed_char);
    return 0;
}
