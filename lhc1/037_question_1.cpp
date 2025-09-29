#include<iostream>
using namespace std;

double calculateBill(double n)
{
    //n=units-from main function
    double totlCost;
    if(n<=100)
        totlCost = n * 0.5;
    else if(n>100||n<=200)
        totlCost = (100*0.5)+(n-100) * 0.75;
    else
        totlCost = 100*0.5+(100*0.75)+(n-200)* 1.0;
    return totlCost;
}

int main(){
    int cusID;
    double units;
    cout << "Enter the customer ID and units:";
    cin >> cusID >> units;

    if(units<0||units>1000){
        cout << "Invalid Output";
        return 0;
    }

    cout << "Customer " << cusID << " Bill: " << calculateBill(units);
    return 0;
}
