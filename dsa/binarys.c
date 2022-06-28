//binary search
#include <stdio.h>
int binarysearch(int arr[], int size, int digit)
{
    int mid, high, low;
    mid = (low + high) / 2;
    if (arr[mid] == digit)

    {
        return mid;
    }
    if (arr[mid] < digit)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 56, 64, 73, 123, 225, 444};
    int size = sizeof(arr) / sizeof(int);
    int element = 56;
    int searchindex = binarysearch(arr, size, element);
    printf("the element %d was found at index %d", element, searchindex);
    return 0;
}
