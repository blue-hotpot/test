#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    char a[]="hellow the word!";
    char b[]="################";
    int left=0;
    int right=strlen(a)-1;
    while(left<=right)
    {
        b[left]=a[left];
        b[right]=a[right];
        printf("%s\n",b);
        Sleep(1000);
        left++;
        right--;
    }
    return 0;
}
