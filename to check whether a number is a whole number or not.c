#include<stdio.h>
int main() {
    float number;
    int truncated_number;
    printf("Enter a number: ");
    scanf("%f", &number);
    truncated_number = (int)number;
    if(number == truncated_number)
    {
              printf("%f is a whole number.\n", number);
    }
    else
    {
        printf("%f is not a whole number.\n", number);
    }
    return 0;
}
    
