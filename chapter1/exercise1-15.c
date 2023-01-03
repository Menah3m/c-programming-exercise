/*
 * @Author: yasuuuu
 * @Date: 2022-11-30 22:20:32
 * @LastEditTime: 2023-01-03 15:51:17
 * @FilePath: /c-tutorial/chapter1/exercise1-15.c
 * @Description: 编写一个程序，使用函数完成温度转换程序。
 */

#include <stdio.h>

float fc(float fahr){
    return (5.0/9.0)*(fahr - 32.0);
}


int main(){
    int lower,upper,step;
    float fahr;

    lower = 0;
    upper =300;
    step = 20;

    fahr = 0;
    while (fahr <= upper){
        printf("%0.0f\t%0.2f\n",fahr,fc(fahr));
        fahr = fahr + step;
    }
    
    return 0;
}

