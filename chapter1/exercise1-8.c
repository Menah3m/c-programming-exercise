#include <stdio.h>

/*
编写一个统计空格、制表符和换行符个数的程序
*/

int main(){
    int blank_count,tab_count,enter_count,c;
    
    blank_count = 0;
    tab_count=0;
    enter_count=0;
    
    while((c=getchar())!= EOF)
    {
        if(c==' '){
            ++blank_count;
        }
        if(c=='\t'){
        ++tab_count;
        }
        if(c=='\n'){
        ++enter_count;
        }
    }

    printf("\nblank count: %d\n tab count: %d\n enter count: %d\n",blank_count,tab_count,enter_count);

    return 0;
}