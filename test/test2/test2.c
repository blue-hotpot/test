#include<stdio.h>

void print(int value)
{
    // if(value!=0)//当输入为个位数后，再进入一次print后value为0，程序结束
    // //printf则要放入if之中
    // {
    //     print(value/10);
    //     printf("%d\t",value%10);
    // }
    if(value>9)//大于9就进入print
    //最后printf需要放在if外面，不然最后一位不能打印
    print(value/10);
    printf("%d\t",value%10);
    // value%10;//末尾数字
    // value/10;//下一个传入数字
}

int main()
{
    int data;
    printf("please input:");
    scanf("%d",&data);
    //把data中每一位数打印
    print(data);
    return 0;
}