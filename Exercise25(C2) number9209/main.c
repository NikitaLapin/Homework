#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("How many elements do you want to see in your array?\n");
    scanf("%d", &a);
    int array[a];

    for(int i = 0; i < a; i++){
        scanf("%d ", &array[i]);
        if(array[i] < 0){
            printf("This number is incorrect. Enter number bigger than 0\n");
            i--;
        }
    }

    int sum = 0;
    for(int i = 0; i < a; i++){
        sum += array[i];
    }

    int count = 0;
    if(sum % 2 == 0){
        for(int i = 0; i < a; i++){
            if(array[i] % 2 == 0){
                count++;
            }
        }
        printf("Number of countable numbers : %d\n", count);
    }

    if(sum % 2 != 0){
        for(int i = 0; i < a; i++){
            if(array[i] % 2 != 0){
                count++;
            }
        }
        printf("Number of uncountable numbers : %d\n", count);
    }
    return 0;
}
