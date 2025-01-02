#include <stdio.h>

int main(){
    int integer1 = 0, integer2 = 0, integer3 = 0, integer4 = 0, integer5 = 0;
    float float1 = 0, float2 = 0, float3 = 0, float4 = 0, float5 = 0;

    printf("Enter a float: ");
    scanf("%f", &float1);
    fflush(stdin);

    printf("Enter a float: ");
    scanf(" %f", &float2);
    fflush(stdin);

    printf("Enter a float: ");
    scanf(" %f", &float3);
    fflush(stdin);

    printf("Enter a float: ");
    scanf(" %f", &float4);
    fflush(stdin);

    printf("Enter a float: ");
    scanf(" %f", &float5);
    fflush(stdin);

    printf("Enter an integer: ");
    scanf(" %d", &integer1);
    fflush(stdin);

    printf("Enter an integer: ");
    scanf(" %d", &integer2);
    fflush(stdin);

    printf("Enter an integer: ");
    scanf(" %d", &integer3);
    fflush(stdin);

    printf("Enter an integer: ");
    scanf(" %d", &integer4);
    fflush(stdin);

    printf("Enter an integer: ");
    scanf(" %d", &integer5);
    fflush(stdin);

    int integerSum = integer1 + integer2 + integer3 + integer4 + integer5;
    float floatSum = float1 + float2 + float3 + float4 + float5;

    int integerAvg = integerSum / 5;
    float floatAvg = floatSum / 5;

    printf("The sum is: %.2f", floatSum);

    printf("\n");

    printf("The average is: %.2f", floatAvg);

    printf("\n");

    if(floatSum > 45.5){
        printf("The sum is greater than 45.5");
    } else if(floatSum < 45.5){
        printf("The sum is less than 45.5");
    } else {
        printf("The sum is equal to 45.5");
    }

    printf("\n");

    printf("The sum is: %d", integerSum);

    printf("\n");

    printf("The average is: %d", integerAvg);

    printf("\n");

    if(integerSum % 2 == 0){
        printf("The sum is even");
    } else {
        printf("The sum is odd");
    }
}
