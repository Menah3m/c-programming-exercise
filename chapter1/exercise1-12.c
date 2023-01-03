/*
 * @Author: yasuuuu
 * @Date: 2022-11-27 23:35:30
 * @LastEditTime: 2022-11-27 23:44:16
 * @FilePath: /c-tutorial/chapter1/exercise1-12.c
 * @Description: 编写一个程序，以每行一个单词的形式打印其输入
 */

#include <stdio.h>



int main(){
    int state,c;
    

    while((c=getchar())!=EOF)
    {
        if(c==' '||c=='\t'||c=='\n')
        {
         printf("\n");    
        } else{
            putchar(c);
        }
    }
    return 0;
}