#include <stdio.h>

int main() {
    int y;
    printf("Enter a year: ");
    scanf("%d", &y);
    
    int flag=(y % 4 == 0 && ( y % 400 == 0 || y % 100 != 0));
    
    switch(flag) {
        case 1:
            printf("%d is a leap year\n", y);
            break;
        case 0:
            printf("%d is not a leap year\n", y);
            break;
        default :
            printf("invalid year \n");
    }

    return 0;
}