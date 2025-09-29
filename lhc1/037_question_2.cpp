#include<iostream>
using namespace std;

int main(){
    string name[10];
    char atten[10][5];
    int count[10]={0};
    cout << "Enter students names and attendance for 5 days:\n";

    for (int i= 0; i< 10;i++){
        cin >> name[i];
        for (int j= 0; j< 5;j++){
            cin >> atten[i][j];
            if (atten[i][j] == 'P')
                count[i]++;
        }
    }
        for (int i = 0; i < 10; i++)
        {
            cout << name[i] << ": " << count[i] << endl;
        }
        return 0;
}