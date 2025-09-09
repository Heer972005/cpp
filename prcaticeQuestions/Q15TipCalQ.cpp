#include<iostream>
using namespace std;

int main(){
    double amt;
    double tipPer;
    cout << "ENTER BILL and BILL PERCENTAGE:";
    cin >> amt >> tipPer;

    if(tipPer>30)
        cout << "WARNING: HIGH TIP";
    double tip;
    tip = (amt * tipPer) / 100;
    double totalBill = tip + amt;
    cout << "Tip:" << tip << " Total: " << totalBill;


}