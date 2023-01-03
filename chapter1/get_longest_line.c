/*
 * @Author: yasuuuu
 * @Date: 2023-01-03 16:12:54
 * @LastEditTime: 2023-01-03 22:28:09
 * @FilePath: /c-tutorial/chapter1/get_longest_line.c
 * @Description: 读入一组文本行，返回最长的文本行
 */

#include <stdio.h>
#define MAXLINE 1000

int getlinee(char line[],int maxline);
void copy(char to[],char from[]);

int main(){
    int len; /* 当前行长度 */
    int max; /* 最大行长度 */
    char line[MAXLINE]; /*当前行*/
    char longest[MAXLINE]; /*最大行*/

    
    max = 0;
    while((len=getlinee(line,MAXLINE)) > 0){
        if (len>max){
            max = len;
            copy(longest,line);
        }
    }
    if (max >0){
        printf("%s",longest);
    }
    return 0;
}

int getlinee(char s[],int lim)
{
    int c,i;
    for(i = 0;i < lim-1 && (c=getchar())!= EOF && c != '\n';i++){
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