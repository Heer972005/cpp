#include<iostream>
using namespace std;
int main(){
    int size;
    cout << "Enter the size:";
    cin >> size;
    int nums[size];
    cout << "enter the elements:\n";
    for (int i = 0; i <size;i++){
        cin >> nums[i];
    }
    cout << "entered elements are:\n";
    for (int i = 0; i < size;i++){
        cout << nums[i] << endl;
    }
        return 0;
}

//wap to perform linear search in array
