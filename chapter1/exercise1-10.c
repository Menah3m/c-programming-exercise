/*
 * @Author: yasuuuu
 * @Date: 2022-11-27 23:14:48
 * @LastEditTime: 2022-11-27 23:29:00
 * @FilePath: /c-tutorial/chapter1/exercise1-10.c
 * @Description: 编写一个将输入复制到输出的程序，并将其中的制表符替换为\t，把回退符替换为\b，把反斜杠替换为\\
 */


#include <stdio.h>

int main(){
    
    int c;

    while((c=getchar())!=EOF)
    {
        if(c=='\t')
        {
            printf("\\t");
        }
        if(c=='\b')
        {
            printf("\\b");
        }
        if(c=='\\')
        {
            printf("\\");
        }
        putchar(c);

    }
    return 0;
}
// 在键盘上，回退键可以使用 ctrl+H 
