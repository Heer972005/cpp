#include<iostream>
using namespace std;
/*int main(){
    int size;
    int target;
    cout << "enter teh size of an array:";
    cin >> size;
    int arr[size];
    cout << "enter the elements:\n";
    for (int i=0; i < size;i++){
        cout << "enter the elemnets on the index " << (i + 1);
        cin >> arr[i];
    }
    cout << "the elements:\n";
    for (int i = 0; i < size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout << "\nenter the target:";
    cin >> target;
    int i;
    for ( i = 0; i < size; i++)
    {
        if(target==arr[i]){
            cout << target << " found at location " << (i + 1);
            break;
        }
    }
    if(i==size){
        cout << "Element not found";
    }
}*/

int linearSearch(int arr[],int tar,int size){
    for (int i = 0; i <size;i++){
        if(arr[i]==tar)
            return i;
    }
    return -1;
}
int main(){
    int size;
    int target;
    cout << "enter teh size of an array:";
    cin >> size;
    int arr[size];
    cout << "enter the elements\n";
    for (int i = 0; i < size; i++)
    {
        cout << "enter the elemnets on the index: " << (i + 1);
        cin >> arr[i];
    }
    cout << "the elements:\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nenter the target:";
    cin >> target;
    int ind = linearSearch(arr, target,size);
    if(ind==-1){
        cout << "Not found";
    }
    else{
        cout << "found at " << ind;
    }
    return 0;
}