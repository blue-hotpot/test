#include<stdio.h>
#include<string.h>
int main(int argc, char const *argv[])
{
    char password[]="0123456789";//字符串后面有一个“\0”
    char inpassw[11];//需要一个字节存放“\0”,才能和password字符串相等
    for(int timers=0;timers<3;timers++)
    {
        printf("input the password");
        scanf("%s",&inpassw);
        printf("%s\n",inpassw);
        if(strcmp(password,inpassw)==0)//若相等，则输出0
        {
            printf("the password is right\n");
            break;
        }
        else
        {
            printf("the password is err\n");
        }
    }
    return 0;
}
