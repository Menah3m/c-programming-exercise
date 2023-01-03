/*
 * @Author: yasuuuu
 * @Date: 2022-11-25 23:11:04
 * @LastEditTime: 2022-11-25 23:59:53
 * @FilePath: /c-tutorial/chapter1/exercise1-9.c
 * @Description: 编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替
 */


#include <stdio.h>



int main(){
    int c,flag;
    //设置flag ，代表 输出 这个动作的开关，为0则正常输出，为1则不做输出
    flag = 0;
    while((c=getchar())!=EOF)
    {
        // 如果是非空格字符，则正常输出，且flag置为0，相当于关闭开关
        // 如果是第一个空格，则正常输出，且flag置为1，相当于打开开关，开关开启时，后续的空格都不输出
        
        if(c!=' '&& c != '\t'&&c!='\n')
        {
            putchar(c);
            flag=0;
        }else if(c==' '&&flag==0){
            putchar(c);
            flag=1;
        }else{
            continue;
        }
    }
    return 0;
}


