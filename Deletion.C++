#include <iostream>
using namespace std;
void traversal(int arr[], int NumberOfItration)
{
    cout << "Here is our Array : ";
    for (int j = 0; j < NumberOfItration; j++)
    {
        cout << arr[j] << " ";
    }
    cout << "\n";
}

void Deletion(int arr[], int ElementToDelete, int IndexWhereDeleting, int NumberOfItration)
{
    IndexWhereDeleting = 0;
    for (int k = 0; k < NumberOfItration; k++)
    {
        if (arr[k] == ElementToDelete)
        {
            IndexWhereDeleting = k;
            break;
        }
    }

    for (int i = IndexWhereDeleting; i < 5; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {10, 98, 45, 32, 22};
    int ElementToDelete;
    int NumberOfItration = 5;
    traversal(arr, NumberOfItration);
    cout << "Enter the element you want to delete : ";
    cin >> ElementToDelete;
    cout << endl;
    int IndexWhereDeleting = 2;
    Deletion(arr, ElementToDelete, IndexWhereDeleting, NumberOfItration);
    NumberOfItration -= 1;
    traversal(arr, NumberOfItration);
    cout << "\n...Deletion succesfull...";
}