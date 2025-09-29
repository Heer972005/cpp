#include <iostream>
using namespace std;

int mx(int ar[], int n)
{
    int max = ar[0];
    for (int i = 0; i < n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    return max;
}

int CountDigit(int mx)
{
    int c = 0;
    while (mx > 0)
    {
        mx /= 10;
        c++;
    }
    return c;
}
int main()
{
    int n;
    cout << "Enter the range of array:";
    cin >> n;
    int ar[n];

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int max = mx(ar, n);
    cout << "Maximum Number:" << max << endl;
    cout << "Number of Digits:" << CountDigit(max);
    return 0;
}