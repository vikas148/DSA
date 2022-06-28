//array deletion 
#include<stdio.h>
void display(int arr[],int n)
{
for (int i = 0; i < n; i++)
{
    printf("\t%d\n",arr[i]);
}
}
void deletion(int arr[] ,int size, int index)
{
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    
}

int main()
{
    int arr[100]={7,90,5,61,9};
    int size=5,index=0;
    display(arr,size);
    deletion(arr,size, index);
    size-=1;
    printf("\n");
    display(arr,size);
    return 0;
}
