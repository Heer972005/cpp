#include<iostream>
using namespace std;

int main(){
    double TotalAmt;
    double GSTR;
    double BaseAmt = 0;
    double GSTAmt = 0;
    cout << "Enter GST and GST Rate";
    cin >> TotalAmt >> GSTR;

    if(TotalAmt>20000.0||TotalAmt<0.0)
        cout << "enter gain out of range";
    if(GSTR<28.0||GSTR<0.0)
        cout << "GST Percentage is out range";
    
    //fomula-ta=basaAMT+(BaaseAmt*GST*0.01)
    //BaseAMT=TA/(1+GST*0.01)

    GSTAmt = (GSTR/2)*10;
    BaseAmt = TotalAmt / (1 + (GSTR * 0.01));

    cout << "BASE AMOUNT= " << BaseAmt<< "GST AMOUNT= " << GSTAmt;
    return 0;
}