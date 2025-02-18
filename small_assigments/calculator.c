#include <stdio.h>

int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
float divide(int x, int y);

int main(){
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d", &x);
    scanf("%d", &y);

    int sum = add(x, y);
    int sub = subtract(x, y);
    int mult = multiply(x, y);
    

    printf("The addition of %d + %d = %d \n", x, y, sum);
    printf("The subtraction of %d - %d = %d \n", x, y, sub);
    printf("The multiplication of %d * %d = %d \n", x, y, mult);
    if(y != 0){
        float div = divide(x, y); 
        printf("The division of %d / %d = %.2f \n", x, y, div);
    }else{
        printf("Error divison by 0 is not allowed \n");
    }
    

    return 0;
}

int add(int x, int y){
    return x + y;
}

int subtract(int x, int y){
    return x - y;
}

int multiply(int x, int y){
    return x * y;
}

float divide(int x, int y){
    return (float)x / y;
}
