#include<iostream>
using namespace std;

class Employee
{

private:
    double salary;

public:
    int empId;
    string name;
    char gender;

    Employee(int empID,string name,char gender,double salary)
    {
        this->empId =empID;
        this->name = name;
        this->gender = gender;
        this->salary = salary;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }
    void display()
    {
        cout << "ID: " << empId
             << "   Name: " << name
             << "   Gender: " << gender
             << "   Salary: " << salary<<"\n";
    }
};

void updateSalary(Employee empList[], int size)
{
    for (int i = 0; i < size; i++)
    {
        double newSalary;
        cout << "Enter new salary for " << empList[i].name << " (ID " << empList[i].empId << "): ";
        cin >> newSalary;
        empList[i].setSalary(newSalary);
    }
}

int main(){
    Employee empList[10] = {
        {101, "abc", 'F', 50000},
        {102, "cde", 'M', 52000},
        {103, "efg", 'M', 48000},
        {104, "ghi", 'F', 60000},
        {105, "ijk", 'M', 45000},
        {106, "klm", 'F', 55000},
        {107, "mno", 'M', 47000},
        {108, "opq", 'F', 51000},
        {109, "qrs", 'M', 53000},
        {110, "stu", 'F', 62000}
    };
    cout << "\nEmployee Database (Before Update)\n";
    for (int i = 0; i < 10; i++)
    {
        empList[i].display();
    }

    // Update salaries
    updateSalary(empList, 10);

    cout << "\nEmployee Database (After Update)\n";
    for (int i = 0; i < 10; i++)
    {
        empList[i].display();
    }

    return 0;
}