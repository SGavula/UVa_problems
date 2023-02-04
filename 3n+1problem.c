#include <stdio.h>

int main()
{
    int number1, number2;

    while(scanf("%d%d", &number1, &number2) != EOF) {
        int n = 2;
        int a = 0;
        int i = 0;

        int cycle = 0;
        int max_cycle = 0;


        if(number1 != number2) {
            if(number1 > number2){
                n = number1 - number2;
            }
            else{
                n = number2 - number1;
            } 
        }

        for(i = 0; i <= n; i++){
            if(number1 != number2) {
                if(number1 > number2 || number1 == number2){
                    a = number2 + i;
                }
                else{
                    a = number1 + i;
                }
            }else {
                a = number1;
            }

            cycle = 1;

            while (a != 1){
                cycle = cycle + 1;
                if (a % 2 == 0) {
                    a = a / 2;
                }else {
                    a = (3 * a) + 1;
                }

            }

            if(cycle > max_cycle){
                max_cycle = cycle;
            }
        }

        printf("%d %d %d\n", number1, number2, max_cycle);
    }
    return 0;
}
