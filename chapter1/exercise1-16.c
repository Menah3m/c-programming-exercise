/*
 * @Author: yasuuuu
 * @Date: 2023-01-03 16:12:54
 * @LastEditTime: 2023-01-03 16:54:26
 * @FilePath: /c-tutorial/chapter1/exercise1-16.c
 * @Description: 读入一组文本行，可以打印任意长度的输入行的长度，并尽可能多地打印文本
 */

#include <stdio.h>
#define MAXLINE 1000

int getline(char line[],int maxline);
void copy(char to[],char from[]);

int main(){
    int len,max;
    char line[MAXLINE],longest[MAXLINE];

    max = 0;
    while((len-getline(line,MAXLINE)) > 0){
        if (len>max){
            max = len;
            copy(longest,line);
        }
    }
    if (max > 0){
        printf("%s",longest);
    }
    return 0;
}

int getline(char s[],int lim)
{
    int c,i;
    for(i=0;i<lim-1 && (c=getchar())!=EOF && c!= '\n';i++){
        s[i] = c;
    }
    if(c == '\n'){
        s[i]=c;
        i++;
    }
    s[i]='\0';
    return i;
}

void copy(char to[],char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
    
}