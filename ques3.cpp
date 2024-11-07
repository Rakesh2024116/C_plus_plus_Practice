#include <iostream>

using namespace std;

#include <cmath>

const double PI = 3.14159;

class Circle{
    private:
        double radius;

    public:
        // Constructor to initialize the Circle object with a radius
        Circle(double rad): radius(rad){}
    
    // Member function to calculate the area of the circle
    double calculateArea() {
      return PI * pow(radius, 2); // Formula to calculate the area of a circle
    }

    // Member function to calculate the circumference of the circle
    double calculateCircumference() {
      return 2 * PI * radius; // Formula to calculate the circumference of a circle
    }
};

using namespace std;

int main()
{
    double radius;
    cout << "Input the radius of the circle: \n";
    cin >> radius; // input from user
    Circle circle(radius); // Constructor Circle's object with the given radius
    double area = circle.calculateArea();
    cout << "Area = " << area << endl;

    double circumference = circle.calculateCircumference();
    cout << "Circumference = " << circumference << endl; // Output the calculated circumference

    return 0; // Return 0 to indicate successful completion

}