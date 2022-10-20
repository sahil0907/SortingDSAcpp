#include <iostream>
using namespace std;
void merge(int *arr, int s, int e, int mid)
{
    int len1 = mid - s + 1;
    int len2 = e - mid;
    int arr1[len1];
    int arr2[len2];

    int i, k, j = 0;
    // copy values

    k = s;
    for (i = 0; i < len1; i++)
    {
        arr1[i] = arr[k++];
    }
    k = mid + 1;
    for (i = 0; i < len2; i++)
    {

        arr2[i] = arr[k++];
    }
    // merging
    i = 0, j = 0, k = s;
    while (i < len1 && j < len2)
    {
        if (arr1[i] > arr2[j])
        {

            arr[k++] = arr2[j++];
        }
        else
        {

            arr[k++] = arr1[i++];
        }
    }
    while (j < len2)
    {

        arr[k++] = arr2[j++];
    }
    while (i < len1)
    {

        arr[k++] = arr1[i++];
    }
}
int mergeSort(int *arr, int s, int e)
{
//base case
    if (s >= e)
    {

        return 0;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    // mergind sorted arrays

    merge(arr, s, e, mid);
}
void printArray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {

        cout << array[i] << ",";
    }
}
int main()
{
    int arr[10] = {10, 10, 9, 9, 7, 7, 6, 4, 3, 2};
    cout << "Before sorting" << endl;
    printArray(arr, 10);
    cout << endl
         << "After sorting" << endl;
    mergeSort(arr, 0, 9);
    printArray(arr, 10);
}