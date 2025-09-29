#include<iostream>
using namespace std;

string stackArr[10];
int top = -1;
void printStack(int i)
{
    if (i < 0)
        return;
    printStack(i - 1);
    cout << stackArr[i] << " ";
}
int main()
{
    string st;
    cin >> st;
    while(st!="end"){
        if(st=="call"){
            string name;
            cin >> name;
            if(name.length()>20){
                cout << "name lenght should not exceed length 20";
                return 0;
            }
            if(top<9)
                stackArr[++top] = name;
        }
        else if(st=="return"){
            if(top>=0)
                cout << "Returning from: " << stackArr[top--];
        }
        else
            cout << "no function";
        cin >> st;
    }
    cout << " Stack: ";
            printStack(top);
    return 0;
}
