#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    static vector<int> lcmAndGcd(int a,int b){
        if(b==0){
            return {a, a};
        }
        vector<int> res = lcmAndGcd(b, a % b);
        int gcd = res[1];
        int lcm = (a * b) / gcd;
        return {lcm, gcd};
    }
};
int main(){
    int a = 12, b = 18;
    vector<int> result = Solution::lcmAndGcd(a, b);
    cout << "LCM: " << result[0] << ", GCD: " << result[1] << endl;
    return 0;
}