#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {84, 32, 45, 23, 72, 64, 5, 35};
    int nums = 8;
    int ElementToSearch = 72;
    for (int i = 0; i < nums; i++)
    {
        if (arr[i] == ElementToSearch)
        {
            cout << "Element found at index number : " << i;
        }
    }
    cout << "\nLinear Searching complete...";
}