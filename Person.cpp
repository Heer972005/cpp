#include<iostream>
using namespace std;
class Person{
private:
    int age;
    int mono;
    char *name;

public:
    void setAge(int age){
        this->age = age;
    }
    int getAge(){
        return this->age;
    }
};

int main(){
    Person p;
    p.setAge(20);
    cout << p.getAge();
    return 0;
}