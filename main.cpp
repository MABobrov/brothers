#include <stdio.h>
int main ()
{
    int first_brother,second_brother;
    printf("how old is the first_brother=");
    scanf("%i",&first_brother);
    printf("how old is the second_brother=");
    scanf("%i",&second_brother);

    if (first_brother>second_brother){
        printf("first_brother older");
    }else{
        if(first_brother==second_brother){
            printf("they are the same age!");
        }else{
            printf("second_brother older");
        }
    }
    return 0;
}
