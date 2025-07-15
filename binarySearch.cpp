#include<iostream>
using namespace std;
int main(){
    int size, trget;
    cout << "enter the size:";
    cin >> size;
    int ar[size];
    cout << "Enter the elements:\n";
    for (int i = 0; i < size;i++){
        cin >> ar[i];
    }
    cout << "elemnts are:";
    for (int i = 0; i < size;i++){
        cout << ar[i]<<" ";
    }
    cout << "enter the target";
    cin >> trget;
    int i;
    int l = sizeof(ar) / sizeof(ar[0]);
    int mid = l / 2;
    for (i = 0; i < size;i++){
        if(mid>>trget){

        }
        else if(mid<<trget){

        }
        else{
            cout << trget << " is located at " << mid;
        }
    }
        return 0;
}
//wap to find out fctorial of given number using recursion
