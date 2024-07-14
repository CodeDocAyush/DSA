#include <iostream>
using namespace std;
void traversal(int arr[], int NumOfItration)
{
    for (int i = 0; i < NumOfItration; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
int BinarySearch(int arr[], int ElementToFind, int NumOfItration)
{
    int low = 0, mid, high = NumOfItration - 1;
    mid = (low + high) / 2;
    while (low <= high)
    {
        if (arr[mid] == ElementToFind)
        {
            return mid;
        }
        if (arr[mid] < ElementToFind)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 22, 45, 64, 75, 88, 99, 123, 126, 176, 272};
    int ElementToFind;
    int NumOfItration = sizeof(arr) / sizeof(int);
    traversal(arr, NumOfItration);
    cout << "Enter the element you want to find : ";
    cin >> ElementToFind;
    cout << endl;
    int index = BinarySearch(arr, ElementToFind, NumOfItration);
    cout << "The element " << ElementToFind << " was found at : " << index << "th" << " index number";
}