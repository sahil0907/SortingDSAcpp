#include <iostream>
using namespace std;
void insSort(int array[], int size)
{
    int temp;

    for (int i = 1; i < size; i++)
    {
        temp = array[i];
        int j = i - 1;
        // With while loop
        while (array[j] >= 0)
        {
            if (array[j] > temp)
            {

                array[j + 1] = array[j];
            }
            j--;
        }
        // --With For loop--
        // int j = i - 1;
        // for (; j >= 0; j--)
        // {
        //     if (array[j] > temp)
        //     {

        //         array[j + 1] = array[j];
        //     }
        //     else
        //     {
        //         break;
        //     }
        // }
        array[j + 1] = temp;
    }
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

    int array[] = {5, 4, 3, 2, 1};
    cout << "Before sorting" << endl;
    printArray(array, 5);
    cout << endl
         << "After sorting " << endl;
    insSort(array, 5);
    printArray(array, 5);
}