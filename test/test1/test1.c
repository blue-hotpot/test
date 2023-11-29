#include<stdio.h>

int is_leap_year(int value)
{
	if((value%4==0&&value%100!=0)||(value%400==0))
	{
		return 1;
	}
	return 0;
}

int is_prime(int value)
{
	int i;
	if(value==1||value==2||value==3)
	return 1;
	else if(value%2==0)
	return 0;
	for(i=3;i<(value/2);i+=2)
	{
		if(value%i==0)
		return 0;
	}
	return 1;
}

int binary_search(int arr[],int value,int size)
{
    // int size=sizeof(arr)/sizeof(arr[0]);
    //
    int left=0;
    int right=size-1;
    int mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(value<arr[mid])
        right=mid-1;
        if(value>arr[mid])
        left=mid+1;
        if(value==arr[mid])
        return mid;
        
    }
    return -1;
}

int main(void)
{
	int data;
    int ret;
    int a[10]={0,1,2,3,4,5,7,8,9,10};
    int size=sizeof(a)/sizeof(a[0]);//还是有点不懂
	scanf("%d",&data);
    //是闰年输出1，不是闰年输出0
	// if(is_leap_year(data)==1)//判断闰年
    // {
    //     printf("the year is leap year\n");
    // }
    //是素数输出1，不是素数输出0
	// if(is_prime(data)==1)//判断素数
	// {
	// 	printf("the data that you input is prime\n");
	// }
    //如果找到，返回序号,如果没找到，返回-1
    //第一个a为数组，第二个7为查找的数，第三个size为数组里面的元素个数
    ret=binary_search(a,data,size);
    if(ret==-1)
    {
        printf("the data you input is not found\n");
    }
    else
    {
        printf("the data is the %d",ret);
    }
	return 0;
}
