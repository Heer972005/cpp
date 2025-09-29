#include<iostream>
int main(){
    float a, b;
    std::cout << "Enter two numbers";
    std::cin >> a>>b;
    std::cout << a+b<<"\n";
    std::cout << a - b<<"\n";
    std::cout << a * b<<"\n";
    std::cout << a / b<<"\n";
    std::cout << ((int) a % (int) b);
}

 