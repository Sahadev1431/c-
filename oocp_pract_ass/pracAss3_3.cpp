#include <iostream>
#include <vector>

using namespace std;

class Person {
public:
    Person(string name, int age, string address)
        : name(name), age(age), address(address) {}

    void displayInfo() const {
        cout << "Name: " << name << ", Age: " << age << ", Address: " << address << endl;
    }

private:
    string name;
    int age;
    string address;
};

class Employee : public Person {
public:
    Employee(string name, int age, string address, string employeeId, double salary)
        : Person(name, age, address), employeeId(employeeId), salary(salary) {}

    void displayInfo() const override {
        Person::displayInfo();
        cout << "Employee ID: " << employeeId << ", Salary: $" << salary << endl;
    }

private:
    string employeeId;
    double salary;
};

class Department {
public:
    Department(string departmentName, string location)
        : departmentName(departmentName), location(location) {}

    void addEmployee(const Employee& employee) {
        employees.push_back(employee);
        cout << "Employee added to " << departmentName << endl;
    }

    void displayDepartmentInfo() const {
        cout << "Department: " << departmentName << ", Location: " << location << endl;
        cout << "Employees:" << endl;
        for (const auto& employee : employees) {
            employee.displayInfo();
        }
    }

private:
    string departmentName;
    string location;
    vector<Employee> employees;
};

int main() {
    // Example usage:

    // Creating a Person
    Person person("John Doe", 30, "123 Main St");
    person.displayInfo();

    cout << "\n";

    // Creating an Employee
    Employee employee("Alice Smith", 25, "456 Oak St", "E123", 50000);
    employee.displayInfo();

    cout << "\n";

    // Creating a Department and adding an Employee
    Department department("HR Department", "Headquarters");
    department.addEmployee(employee);
    department.displayDepartmentInfo();

    return 0;
}
