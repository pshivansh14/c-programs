#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    switch(a){
        case 1:
        printf("sunday");
        break;

        case 2:
        printf("tuesday");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("thrusday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        default:
        printf("enter valid day number");
        break;
    }
    return 0;
}