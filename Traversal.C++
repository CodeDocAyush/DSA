#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter 5 elements of the array : \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter element no " << i << " : ";
        cin >> arr[i];
    }

    cout << "Here is our Array : ";
    for (int j = 0; j < 5; j++)
    {
        cout << arr[j] << " ";
    }
    cout << "\nTraversal succesfull...";
}