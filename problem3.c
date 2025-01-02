#include <stdio.h>


int main(){
    int size = 0;
    int size2 = 0;
    int temp = 0;
    printf("Enter a box size:");
    scanf("%d", &size);
    size2 = size;
    while(size2 > 0){
        printf("*");
        if(size != 1){
            printf(" ");
        }
        size2 = size2 - 1;
    }
    size2 = size;
    printf("\n");
    while(size > 2){
        printf("*");
        while(temp < ((size2-2)*2)+1) {
            printf(" ");
            temp++;
        }
        temp = 0;
        printf("*\n");
        size--;
    }
    while(size2 > 0){
        printf("*");
        if(size != 1){
            printf(" ");
        }
        size2 = size2 - 1;
    }
}
