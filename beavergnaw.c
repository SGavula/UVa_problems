#include <stdio.h>
#include <math.h>
 
#define PI 3.14159265358979323846

int main(){
    int D,V;

    double d;
    
    while(1){
        scanf("%d %d",&D,&V);

        if(D==0 && V==0) break;

        d=pow(D*D*D-6*V/PI,1.0/3);
        
        printf("%.3f\n",d);
    }
}