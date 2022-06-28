//linear search
#include <stdio.h>
int linearsearch(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 56, 4, 3, 23, 5, 4, 51, 63, 56, 34};
    int size = sizeof(arr) / sizeof(int);
    int element = 23;
    int searchindex = linearsearch(arr, size, element);
    printf("The element %d is found at %d index \n", element, searchindex);

    return 0;
}
