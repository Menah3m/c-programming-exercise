/*
 * @Author: yasuuuu
 * @Date: 2022-11-29 16:31:52
 * @LastEditTime: 2022-11-29 17:39:18
 * @FilePath: /c-tutorial/chapter1/exercise1-13.c
 * @Description: 编写一个程序，打印输入中单词长度的直方图。
 */


#include <stdio.h>

int main(){
    int c,i,j;
    int wlength[11];
    int count = 0; 
    int clength=0;
    //初始化
    for(i=0;i<12;i++)
    {
        wlength[i] = 0;
    }
    //统计单词长度出现次数
    while((c=getchar())!=EOF)
    {   
        if(c==' '||c=='\n'||c=='\t')
        {
            if(clength>10){
                ++wlength[11];
            } else{
                ++wlength[clength];
            }

            clength=0;
        } else {
            ++clength;
        }
    }
    // 输出绘制直方图
    printf("单词长度直方图（水平）：\n");
    for(i=1;i<12;i++)
    {

        if(i==11){
            printf("长度大于10|");
            if(wlength[i]!=0){
                for ( j = 0; j < wlength[i]; j++)
                {
                    if(j<wlength[i]-1)
                    {
                        printf("*");
                    } else
                    {
                        printf("*\n");
                    }
                }
            }else{
                printf(" \n");
            }

            
        } else{
            printf("长度为%d|",i);

            if(wlength[i]!=0){
                for ( j = 0; j < wlength[i]; j++)
                {
                    if(j<wlength[i]-1)
                    {
                        printf("*");
                    } else
                    {
                        printf("*\n");
                    }
                }
            } else{
                printf(" \n");
            }
        }

    }

    return 0;
}
