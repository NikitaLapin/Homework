#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("How many elements do you want to see in your array?(minimum - 9)\n");
    int a;
    scanf("%d", &a);
    if(a < 9){
        printf("Number of elements is incorrect. Minimal number of elements = 9\n");
        scanf("%d", &a);
    }
    int array[a];

    printf("Enter these %d elements from 0 to 1000\n", a);
    for(int i = 0; i < a; i++){
        scanf("%d", array[i]);
        if(array[i] < 0 || array[i] > 1000){
            printf("This number is incorrect. Enter another one");
            i--;
        }
    }
    int mult = 0;
    int max_mult = 0;
    int i = 0;
    while(i != a){
        if(a - i >= 8){
            mult = array[a] * array[i];
            if(mult > max_mult){
                max_mult = mult;
            }
        }
        else{
            printf("You have incorrect number of elements. Restart this program to enter another number of elements\n");
        }
        i++;
    }
    printf("%d", &max_mult);
    return 0;
}
