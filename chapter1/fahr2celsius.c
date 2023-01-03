#include <stdio.h>

int main(){
    float fahr,celsius;
    int lower,upper,step;

    lower = 0;
    upper = 320;
    step = 20;

    fahr = lower;
    while (fahr <= upper){
        celsius = 5.0/9.0 * (fahr - 32.0);
        printf("%3d\t%6.1f\n",fahr,celsius);
        fahr = fahr + step;
    }
}