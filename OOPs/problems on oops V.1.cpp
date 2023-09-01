/* 

5.    Implement a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'. Assign the value of roll_no as '2' and that of name as "John" by creating an object of the class Student in c++.

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
};

int main() {
    Student student;
    student.name = "John";
    student.roll_no = 2;

    cout << "Student Name: " << student.name << endl;
    cout << "Student Roll No: " << student.roll_no << endl;

    return 0;
}



6.    Assign and print the roll number, phone number and address of two students having names "Sam" and "John" respectively by creating two objects of the class 'Student'.


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll_no;
    string phone_number;
    string address;
};

int main() {
    Student student1;
    student1.name = "Sam";
    student1.roll_no = 1;
    student1.phone_number = "1234567890";
    student1.address = "123 Main St, Anytown USA";

    Student student2;
    student2.name = "John";
    student2.roll_no = 2;
    student2.phone_number = "9876543210";
    student2.address = "456 Oak Ave, Anycity USA";

    cout << "Student 1:" << endl;
    cout << "Name: " << student1.name << endl;
    cout << "Roll No: " << student1.roll_no << endl;
    cout << "Phone Number: " << student1.phone_number << endl;
    cout << "Address: " << student1.address << endl << endl;

    cout << "Student 2:" << endl;
    cout << "Name: " << student2.name << endl;
    cout << "Roll No: " << student2.roll_no << endl;
    cout << "Phone Number: " << student2.phone_number << endl;
    cout << "Address: " << student2.address << endl;

    return 0;
}




7.    Implement a program to print the average of three numbers entered by the user by creating a class named 'Average' having a function to calculate and print the average without creating any object of the Average class.


#include <iostream>
using namespace std;

class Average {
public:
    static void printAverage(float num1, float num2, float num3) {
        float average = (num1 + num2 + num3) / 3.0;
        cout << "The average of " << num1 << ", " << num2 << ", and " << num3 << " is " << average << endl;
    }
};

int main() {
    float num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    Average::printAverage(num1, num2, num3);

    return 0;
}



9.    Demonstrate a program to print the volume of a box by creating a class named 'Volume' with an initialization list to initialize its length, breadth and height. 

#include <iostream>
using namespace std;

class Volume {
private:
    float length;
    float breadth;
    float height;

public:
    Volume(float len, float brd, float hgt) : length(len), breadth(brd), height(hgt) {}

    float calculateVolume() {
        return length * breadth * height;
    }
};

int main() {
    Volume box(10.5, 3.6, 5.2);

    cout << "The volume of the box is: " << box.calculateVolume() << endl;

    return 0;
}




10.   Implement a  program to print the sum, difference and product of two complex numbers by creating a class named 'Complex' with separate functions for each operation by taking the real and imaginary parts from the user.

#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void getValues() {
        cout << "Enter the real and imaginary parts of the complex number: ";
        cin >> real >> imag;
    }

    void printComplex() {
        if(imag < 0)
            cout << real << " - " << -imag << "i";
        else
            cout << real << " + " << imag << "i";
    }

    Complex add(Complex c2) {
        Complex res;
        res.real = real + c2.real;
        res.imag = imag + c2.imag;
        return res;
    }

    Complex subtract(Complex c2) {
        Complex res;
        res.real = real - c2.real;
        res.imag = imag - c2.imag;
        return res;
    }

    Complex multiply(Complex c2) {
        Complex res;
        res.real = (real * c2.real) - (imag * c2.imag);
        res.imag = (real * c2.imag) + (imag * c2.real);
        return res;
    }
};

int main() {
    Complex c1, c2, sum, difference, product;

    cout << "Enter the first complex number:" << endl;
    c1.getValues();

    cout << "Enter the second complex number:" << endl;
    c2.getValues();

    sum = c1.add(c2);
    difference = c1.subtract(c2);
    product = c1.multiply(c2);

    cout << "Sum: ";
    sum.printComplex();
    cout << endl;

    cout << "Difference: ";
    difference.printComplex();
    cout << endl;

    cout << "Product: ";
    product.printComplex();
    cout << endl;

    return 0;
}




25.         Demonstrate through a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' and use set function in class having sides as its parameters. (Using encapsulation and abstraction concept)

#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    double a, b, c;

public:
    void setSides(double sideA, double sideB, double sideC) {
        a = sideA;
        b = sideB;
        c = sideC;
    }

    double getPerimeter() {
        return a + b + c;
    }

    double getArea() {
        double s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
};

int main() {
    Triangle tri;
    tri.setSides(3, 4, 5);

    cout << "Triangle perimeter: " << tri.getPerimeter() << endl;
    cout << "Triangle area: " << tri.getArea() << endl;

    return 0;
}


27.   Implement a program that would print the information (name, year of joining, salary, address) of three employees by creating a class named 'Employee'. The output should be as follows: Name        Year of joining        Address Robert        1994             64C- WallsStreat       Sam            2000                  68D- WallsStreat  John           1999                 26B- WallsStreat


#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int year_of_joining;
    double salary;
    string address;

public:
    Employee(string name, int year_of_joining, double salary, string address) {
        this->name = name;
        this->year_of_joining = year_of_joining;
        this->salary = salary;
        this->address = address;
    }

    void printInfo() {
        cout << name << "\t" << year_of_joining << "\t\t$" << salary << "\t" << address << endl;
    }
};

int main() {
    Employee emp1("Robert", 1994, 50000.0, "64C- WallsStreat");
    Employee emp2("Sam", 2000, 60000.0, "68D- WallsStreat");
    Employee emp3("John", 1999, 45000.0, "26B- WallsStreat");

    cout << "Name\tYear of joining\tSalary\t\tAddress" << endl;
    emp1.printInfo();
    emp2.printInfo();
    emp3.printInfo();

    return 0;
}


38.   Implement a program to create a class of employee to store its detail (Emp no, name, designation, department, monthly salary). Take input of 10 such emplyees and print the details of all employees whose salary is >50,000. (keep salary as private member)


#include <iostream>
using namespace std;

class Employee {
    private:
        int empNo;
        string name;
        string designation;
        string department;
        double monthlySalary;

    public:
        void setData(int empNo, string name, string designation, string department, double monthlySalary) {
            this->empNo = empNo;
            this->name = name;
            this->designation = designation;
            this->department = department;
            this->monthlySalary = monthlySalary;
        }

        int getEmpNo() {
            return empNo;
        }

        string getName() {
            return name;
        }

        string getDesignation() {
            return designation;
        }

        string getDepartment() {
            return department;
        }

        double getMonthlySalary() {
            return monthlySalary;
        }
};

int main() {
    Employee emp[10];

    // Taking input for 10 employees
    for (int i = 0; i < 10; i++) {
        int empNo;
        string name, designation, department;
        double monthlySalary;

        cout << "Enter employee details: " << endl;
        cout << "Employee No: ";
        cin >> empNo;

        cout << "Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Designation: ";
        getline(cin, designation);

        cout << "Department: ";
        getline(cin, department);

        cout << "Monthly Salary: ";
        cin >> monthlySalary;

        emp[i].setData(empNo, name, designation, department, monthlySalary);
    }

    // Printing details of employees with salary greater than 50,000
    for (int i = 0; i < 10; i++) {
        if (emp[i].getMonthlySalary() > 50000) {
            cout << "Employee No: " << emp[i].getEmpNo() << endl;
            cout << "Name: " << emp[i].getName() << endl;
            cout << "Designation: " << emp[i].getDesignation() << endl;
            cout << "Department: " << emp[i].getDepartment() << endl;
            cout << "Monthly Salary: " << emp[i].getMonthlySalary() << endl;
        }
    }

    return 0;
}


*/
