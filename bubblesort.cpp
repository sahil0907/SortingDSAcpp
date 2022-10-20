// #include <iostream>
// using namespace std;
// int bubbleSort(int array[], int size)
// {
//     int key = 1;
//     for (int i = 1; i < 10; i++)
//     {

//         for (int j = 0; j < size - i; j++)
//         {

//             if (array[j] > array[j + 1])
//             {
//                 swap(array[j], array[j + 1]);
//                 cout << key << endl;
//                 key++;
//             }
//         }
//     }
// }

// void printarray(int array[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {

//         cout << array[i] << ",";
//     }
// }
// int main()
// {
//     int size = 10;

//     int array[size] = {1,2,3,4,5,6,7,8,9,10};
//     cout << "Before the sorting " << endl;
//     printarray(array, size);
//     bubbleSort(array, size);
//     cout << endl;
//     cout << "After the sorting " << endl;
//     printarray(array, size);
// }

#include <iostream>
using namespace std;
//   ----*Recursive Approach*----
// int bubbleSort(int array[], int size)
// {
//     int swapped;
//     for (int i = 0; i < size; i++)
//     {

//         if (array[i] > array[i + 1])
//         {

//             swap(array[i], array[i + 1]);
//             swapped = 1;
//         }

//     bubbleSort(array, size - 1);
//     }
// }

// ----* Iterative Approach *----
int bubbleSort(int array[], int size)
{
    int swapped = 0;
    int k = 0;
    for (int i = 0; i < size; i++)
    {
        swapped = 0;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (array[j] > array[j + 1])
            {

                swap(array[j], array[j + 1]);
                swapped = 1;
            }
        }
        // Optimised case as if the inner loop doesn't swap any then array is already sorted and break the loop
        if (swapped == 0)
        {
            break;
        }
    }
    return k;
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
    int i;

    int array[5] = {5, 4, 3, 2, 1};
    cout << "The array before sorting" << endl;
    printArray(array, size);
    bubbleSort(array, size);
    cout << endl
         << "The array after sorting" << endl;
    printArray(array, size);
}
// Time complexity :: best case -> O(n) and worst case -> O(n^2) this is best for small data only