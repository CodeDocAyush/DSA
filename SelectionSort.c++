#include <iostream>
using namespace std;
void traverse(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
void sort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int indexofminele = i, temp;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[indexofminele])
            {
                indexofminele = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[indexofminele];
        arr[indexofminele] = temp;
    }
}
int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    cout << "Enter the element in array : \n";
    for (int a = 0; a < size; a++)
    {
        cout << "Enter the " << a << "th element : ";
        cin >> arr[a];
    }
    cout << "Before sorting : \n";
    traverse(arr, size);
    cout << "\nafter sorting : \n";
    sort(arr, size);
    traverse(arr, size);