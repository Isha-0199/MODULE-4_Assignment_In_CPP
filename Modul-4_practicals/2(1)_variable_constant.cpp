#include<iostream>
using namespace std;

int main()
{
	const float PI = 3.1416;
	
	int age = 18;
	float height = 5.4;
	char grade = 'A';
	double salary = 45000.00;
	
	cout << "Age is: " << age << endl;
	cout << "Heigth is: " << height << endl;
	cout << " Grade is: " << grade << endl;
	cout << "Salary is: " << salary << endl;
	cout << "PI(constant): " << PI << endl;
	
	float radius = 4.5;
    float area = PI * radius * radius;
    cout << "\nArea of circle with radius " << radius << " = " << area << endl;
	
	return 0;
}
