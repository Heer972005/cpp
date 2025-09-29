//wap to create a series with 0,1,4,9...
#include<iostream>
using namespace std;

/*int main(){
    int limit;
    cout << "Enter the limit:";
    cin >>limit;
    for (int i = 0; i <=limit;i++){
        cout << (i*i) << " ";
    }
        return 0;
}
*/
//0,1,5,15,37
/*int main(){
    int sum1 = 0;
    int sum2 = 0;
    int limit;
    cout << "Enter the limit:";
    cin >> limit;
    for (int i = 0; i< limit;i++){
        i=i * i;
        sum1 = 0;
        for (int j = 0; j*j<=i;j++){
            sum1 += (j*j);
        }
        cout << sum1 << " ";
    }
        return 0;
}*/

//0 0 2 6 20
/*int main(){
    int limit;
    cout << "Enter the limit:";
    cin >> limit;
    for (int i = 0; i <= limit;i++){
        cout << (i * i) - i << " ";
    }
}*/

/*
shop1 
counter 1 1400
counter 2 600
counter 4 200
counter 3 100

shop 2
counter 2 700
counter 1 300
counter 3 250
counter 4 110
*/

struct counter 
{
    string name;
    double sale;
};

/*
job_name  arr_time  time_to_complete

 */

/*
coins:1     2       5       10
to get target amount how many coins needed
i.e.,
11-2 coins
10-1 coin
6-2 coins
7-2 coins
*/

