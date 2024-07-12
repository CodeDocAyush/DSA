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

void Insertion(int arr[], int ElementToInsert, int IndexWhereInserting, int TotalNumberOfElement)
{
    for (int i = TotalNumberOfElement + 1; i > IndexWhereInserting; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[IndexWhereInserting] = ElementToInsert;
}
int main()
{
    int arr[100] = {10, 98, 45, 32, 22};
    int ElementToInsert = 23;
    int IndexWhereInserting = 2;
    int TotalNumberOfElement = 5;
    int NumberOfItration = 5;
    traversal(arr, NumberOfItration);
    Insertion(arr, ElementToInsert, IndexWhereInserting, TotalNumberOfElement);
    TotalNumberOfElement += 1;
    NumberOfItration += 1;
    traversal(arr, NumberOfItration);
    cout<<"\n...Inserion succesfull...";
}