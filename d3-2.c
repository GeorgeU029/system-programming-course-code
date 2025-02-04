#include <stdio.h>
#include <string.h>

int main(){
    return 0;
}
int caps_count(char original_char[]){
    int length = strlen(original_char);
    int count = 0;

    for(int i =0; i < length; i++) {
        if (original_char[i] >= 'A' && original_char[i] <= 'Z'){
            count++;
        }
    }
    return count;

}

double average (int values[], int count){
    int total = 0;
    for(int i = 0;i < count;i++){
        total += values[i];
    }
    return total / count;
}