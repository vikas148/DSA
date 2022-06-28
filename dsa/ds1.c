//insertion in an array

#include<stdio.h>
void display(int arr[],int n)
{
for ( int i = 0; i < n; i++)
{
    printf("\t%d\n",arr[i]);
}
}
//insertion code
int insertion(int arr[],int size,int element,int capacity,int index)
{
if (size>=capacity)
{
    return -1;
}
else
for (int i = size-1; i >=index; i--)
{
    arr[i+1]=arr[i];
}
arr[index]=element;
return index;

}

int main()
{
    int arr[100]={7,8,12,27,88,9,78};
    int size=7,element=45,index=3;
    display( arr ,size);
    insertion(arr,size,element,100,index);
    printf("\n");
    size+=1;
    display( arr ,size);
    return 0;
}
