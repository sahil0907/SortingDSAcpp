#include <iostream>
using namespace std;
int partition(int arr[], int s, int e)
{
    int pivotIndex;
    int count = 0;
    int pivot = arr[s];
    for (int i = s + 1; i <= e; i++)
    {

        if (arr[i] <= pivot)
        {

            count++;
        }
    }
    pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex)
    {

        while (arr[i] <= pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotIndex && j > pivotIndex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[], int s, int e)
{
    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);
    quickSort(arr, s, p - 1);
    quickSort(arr, p + 1, e);
}

int printArray(int array[], int size)

{

    for (int i = 0; i < size; i++)
    {

        cout << array[i] << ",";
    }
}
int main()
{

    int size = 5;
    int arr[size] = {5, 4, 3, 2, 1};
    int s = 0, e = size - 1;

    quickSort(arr, s, e);

    printArray(arr, size);
}
