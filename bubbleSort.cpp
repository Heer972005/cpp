#include <iostream>
using namespace std;
int main()
{
    cout << "Enter size:";
    int size;
    cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter value of index " << i<<":";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        bool isSwapped = false;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
                isSwapped = true;
            }
        }
        if (!isSwapped)
            break;
    }

    for (int i = 0; i < size;i++){
        cout << arr[i]<<" ";
    }
        return 0;
}