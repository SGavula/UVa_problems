#include <stdio.h>
#include <string.h>

int main() {
    int num1, num2, num3, num4, num5, num6, num7, num8, num9;
    int sum;

    int i;

    int a = 0;
    int min = 0;

    while(scanf("%d%d%d%d%d%d%d%d%d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9) != EOF) {        

        char order[] = "BGC";

        sum = num1 + num2 + num3 + num4 + num5 + num6 + num7 + num8 + num9;

        a = sum - num1 - num5 - num9;

        min = a;

        a = sum - num2 - num6 - num7;
        if(min >= a) {
            min = a;
            strcpy(order, "GCB");
        }

        a = sum - num2 - num4 - num9;
        if(min >= a) {
            min = a;
            strcpy(order, "GBC");
        }

        a = sum - num3 - num5 - num7;
        if(min >= a) {
            min = a;
            strcpy(order, "CGB");
        }

        a = sum - num3 - num4 - num8;
        if(min >= a) {
            min = a;
            strcpy(order, "CBG");
        }

        a = sum - num1 - num6 - num8;
        if(min >= a) {
            min = a;
            strcpy(order, "BCG");
        }

        printf("%s %i\n", order, min);

    }

    return 0;
}