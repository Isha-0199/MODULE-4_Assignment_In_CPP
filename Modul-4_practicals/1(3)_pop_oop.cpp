//. POP vs. OOP Comparison Program
//o Write two small programs: one using Procedural Programming (POP) to calculate the area of a rectangle,
// and another using Object-Oriented Programming (OOP) with a class and object for the same task.
//o Objective: Highlight the difference between POP and OOP approaches.

#include <iostream>
#include <stdio.h>
using namespace std;

//pop approach
float calculateArea_POP(float length, float width)
{
    return length * width; 
}

// OOP Approach 
class Rectangle {
private:
    float length, width; // Data members

public:

    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea_OOP()
	{
        return length * width;
    }
};

int main()
{
 
    float len1, wid1;
    
    printf("=== Procedural Programming (POP) ===\n");
    
    printf("Enter length: ");
    scanf("%f", &len1);
    
    printf("Enter width: ");
    scanf("%f", &wid1);

    float area_POP = calculateArea_POP(len1, wid1);
    printf("Area (POP) = %.2f\n\n", area_POP);

    float len2, wid2;
    
    cout << "=== Object-Oriented Programming (OOP) ===" << endl;
    
    cout << "Enter length: ";
    cin >> len2;
    
    cout << "Enter width: ";
    cin >> wid2;

    Rectangle rect; // Object create
    
    rect.setDimensions(len2, wid2);
    cout << "Area (OOP) = " << rect.calculateArea_OOP() << endl;

    return 0;
}

