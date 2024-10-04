#include <iostream>
using namespace std;
void printing(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void sort(int *arr, int size)
{
    for (int i = 1; i <= size - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j] < arr[j - 1])
        {
            int tempV = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = tempV;
            j--;
        }
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    cout << endl;
    cout << "Enter the elements in the array : \n";
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i << "th element : ";
        cin >> array[i];
    }
    cout << "Array before sorting : ";
    printing(array, size);
    cout << endl;
    sort(array, size);
    cout << "Array after sorting : ";
    printing(array, size);
}