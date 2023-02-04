#include <stdio.h>
#include <math.h>

int main() {
    int input1, input2, n = 0;

    scanf("%d",&n);

    while(scanf("%i%i", &input1, &input2) != EOF) {
        double side1 = ceil((input1 - 2) / 3.0);
        double side2 = ceil((input2 - 2) / 3.0);

        int result = side1 * side2;

        printf("%i\n", result);
   }

    return 0;
}