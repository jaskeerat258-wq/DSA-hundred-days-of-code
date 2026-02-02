#include <stdio.h>

int deleteAtIndex(int arr[], int size, int index)
{

    for(int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    return size - 1;   // new size
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5;
    int index = 2;   

    size = deleteAtIndex(arr, size, index);

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}
