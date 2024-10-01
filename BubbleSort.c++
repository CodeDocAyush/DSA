#include <iostream>
using namespace std;
void traverse(int *arr, int MyArrSize)
{
    for (int i = 0; i < MyArrSize; i++)
    {
        cout << arr[i] << " ";
    }
}
void sort(int *arr, int MyArrSize)
{
    int IfSorted = 0;
    for (int i = 0; i < MyArrSize - 1; i++) // For the number of passes...
    {
        for (int j = 0; j < MyArrSize - 1 - i; j++) // For the number of comparisons...
        {
            if (arr[j] > arr[j + 1])
            {
                int tempV = arr[j]; // Swapping
                arr[j] = arr[j + 1];
                arr[j + 1] = tempV;
                IfSorted = 1;
            }
        }
        if (IfSorted == 0) // Checking if the swapping was used or not
        {
            cout << "The array is already Sorted \n";
            return;
        }
    }
}
int main()
{
    int MyArrSize;
    cout << "Enter the Size of Array : ";
    cin >> MyArrSize;
    int arr[MyArrSize];
    cout << "\nEnter the number of elements in the Array : \n";
    for (int a = 0; a < MyArrSize; a++)
    {
        cout << "Enter the " << a << "th element : ";
        cin >> arr[a];
    }
    cout << "Array before sorting : ";
    traverse(arr, MyArrSize);
    cout << endl;
    sort(arr, MyArrSize);
    cout << "Array after sorting : ";
    traverse(arr, MyArrSize);
    cout << endl;
}