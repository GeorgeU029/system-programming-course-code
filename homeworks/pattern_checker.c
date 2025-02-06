#include <string.h>
// Only allowed to use strlen() to get the length of a string
// No other functions are allowed 

int is_palindrome(char str[]){
    int length = strlen(str);
    int left = 0;
    int right = length - 1;

    while (left < right){
        if (str[left] == str[right]){
            left = left + 1;
            right = right - 1;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int is_arithmetic(char str[]){
    int current = 0;
    int length = strlen(str);

    while (current < length - 1){
        if (str[current] + 1 == str[current + 1]){
            current = current + 1;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int is_reverse_arithmetic(char str[]){
    int current = 0;
    int length = strlen(str);

    while (current < length - 1){
        if (str[current] - 1 == str[current + 1]){
            current = current + 1;
        }
        else{
            return 0;
        }
    }
    return 1;
}

int is_balanced_tripartite(char str[]){
    int count = 0;
    int current = 0;
    int length = strlen(str);

    while(current < length){
        count = count + str[current];
        current = current + 1;
    }
    if(length % 3 != 0 || count % 3 != 0)
        return 0;


    int checker = count / 3;
    int section_length = length / 3;
    current = 0;
    int sum = 0;

    for (int i =0; i < 3; i++){
        sum = 0;
        for(int j = 0; j < section_length;j++){
            sum = sum + str[current];
            current++;
        }
        if (sum != checker){
            return 0;
        }
    } 
    return 1;
    
}
int is_balanced_bipartite(char str[]){
    int count = 0;
    int current = 0;
    int length = strlen(str);

    while(current < length){
        count = count + str[current];
        current = current + 1;
    }
    if(length % 2 != 0)
        return 0;

    int checker = count / 2;
    int section_length = length / 2;
    current = 0;
    int sum = 0;

    for (int i =0; i < 2; i++){
        sum = 0;
        for(int j = 0; j < section_length;j++){
            sum = sum + str[current];
            current++;
        }
        if (sum != checker){
            return 0;
        }
    } 
    return 1;
}

int is_singleton(char str[]){
    int length  = strlen(str);
    int current = 0;
    if (length <= 1){
        return 1;
    }
    while (current < length-1){
        if (str[current] != str[current + 1]){
            return 0;
        }
        current++;
    }
    return 1;
}