#include<iostream>
using namespace std;

int main(){
    double weight;
    double height;
    double BMI;

    cout << "Enter the weight in kgs";
    cin >> weight;
    cout << "Enter the height in meters";
    cin >> height;

    BMI = weight / (height * height);

    if (BMI < 18.5)
        cout<< "UNDERWEIGHT";

    else if(BMI>=18.5&&BMI<=24.9)
        cout << "NORMAL";
    else if(BMI>=25&&BMI<=29.9)
        cout << "Overweight";
    else
        cout << "Obese";
}