#include<iostream>
using namespace std;

string stackArray[10];
int top = -1;

void printStack(int i)
{
    if (i < 0)
        return;
    cout << stackArray[i] << " ";
    printStack(i - 1);
}


int main(){
    string st;
    cin >> st;
    while (st != "exit")
    {
        if (st == "visit")
        {
            string URLname;
            cin >> URLname;
            if (top < 9)
                stackArray[++top] = URLname;
        }
        else if (st == "back")
        {
            if (top >= 0)
                cout << "Back to: " << stackArray[top--];
        }
        else
            cout << "No history";
        cin >> st;
    }
    return 0;
}