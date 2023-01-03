/*
 * @Author: yasuuuu
 * @Date: 2022-11-30 22:20:32
 * @LastEditTime: 2022-11-30 23:18:26
 * @FilePath: /c-tutorial/chapter1/exercise1-14.c
 * @Description: 编写一个程序，打印输入中各个字符出现频度的直方图。
 */

#include <stdio.h>

int main(){

    int c,i,j;
    int wordlist[27];

    for (i = 0;i<27;i++)
    {
        wordlist[i] =0;
    }

    while ((c=getchar())!=EOF)
    {
        if (c==' '|c=='\t'|c=='\n')
        {
            continue;
        } else if(c >='a' && c<='z'){
            ++wordlist[c-'a'+1];
        } else {
            continue;
        }
    }
    
    printf("字符频度直方图：\n");
    for (i = 1; i < 27; i++)
    {
        printf("%c| ",'a'+i-1);
        if (wordlist[i]==0)
        {
            printf(" \n");
        } else{
            for (j = 0; j < wordlist[i]; j++)
            {
        
                if(j==(wordlist[i]-1)){
                    printf("*\n");
                } else{
                    printf("*");
                }
                
            }
        }
        // printf("%4d\n",wordlist[i]);

    }
    return 0;
}