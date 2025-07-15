/*#include <iostream> // Includes the input/output stream library
//stream--continuous stream

int main()
{                                             
    std::cout << "Hello, World!" << std::endl;
    // standard
    // cout--console output
    //::--scope resolution operator
    std::cout << "hi";
    int a;
    std::cin >> a;
    std::cout << a ;
    return 0;   
    //return 0--successufully done
    //return 1--runtime problem    
}
//two numbers from user and perform arithmetic operations
*/

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

 