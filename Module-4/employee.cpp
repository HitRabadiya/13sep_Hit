// Implement a class called Employee that has peivate member variables for name, employee ID, and salary.
#include <iostream>
#include <string>
using namespace std;

class Employee {
  private: string name;
  int employeeid;
  double salary;

  public:
    
    Employee(const string & empname, int empid, double empsalary): name(empname),
  employeeid(empid),
  salary(empsalary) {}

  
  void calculatesalary(double performancerating) {
    if (performancerating >= 0.0 && performancerating <= 1.4) {
      salary *= performancerating;
    } else {
      cout << "Invalid performance rating. Salary remains unchanged." << endl;
    }
  }

  
  void setsalary(double empsalary) {
    salary = empsalary;
  }

  
  string getname() const {
    return name;
  }

  
  int getemployeeid() const {
    return employeeid;
  }

  
  double getsalary() const {
    return salary;
  }
};

int main() {
  
  string empname;
  int empid;
  double empsalary;

  cout << "Input employee name: ";
  cin >> empname;

  cout << "Input employee ID: ";
  cin >> empid;

  cout << "Input employee salary: ";
  cin >> empsalary;

  Employee employee(empname, empid, empsalary);

  
  cout << "Initial salary: " << employee.getsalary() << endl;

  
  double performancerating;
  cout << "Input performance rating (0.0-1.2): ";
  cin >> performancerating;

  employee.calculatesalary(performancerating);

  
  cout << "Updated salary: " << employee.getsalary() << endl;

  return 0;
}