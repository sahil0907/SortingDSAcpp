#include <iostream>
using namespace std;
int printarray(int array[], int size)
{

    for (int i = 0; i < size; i++)
    {

        cout << array[i] << ",";
    }
}
void selSort(int array[], int size)
{

    for (int i = 0; i <size; i++)
    {
        int minElement = i;

        for (int j = i + 1; j < size; j++)
        {

            if (array[j] < array[minElement])
            {

                minElement = j;
            }
            swap(array[minElement], array[i]);
            // cout << endl;
            // printarray(array, size);
            // cout << endl
            //      << j;
        }
    }
}
int main()
{

    int array[5] = {64, 12, 25, 22, 11};
    cout
        << "Before " << endl;
    printarray(array, 5);
    selSort(array, 5);
    cout << endl
         << "After" << endl;
    printarray(array, 5);
}