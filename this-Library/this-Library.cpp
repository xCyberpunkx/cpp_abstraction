// this-Library.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual double area() const = 0; // Pure virtual function
    virtual double perimeter() const = 0; // Pure virtual function
    virtual void display() const = 0; // Pure virtual function
};

// Derived class: Circle
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementing pure virtual functions
    double area() const override {
        return 3.14159 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14159 * radius;
    }

    void display() const override {
        std::cout << "Circle: Area = " << area() << ", Perimeter = " << perimeter() << std::endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    // Implementing pure virtual functions
    double area() const override {
        return length * width;
    }

    double perimeter() const override {
        return 2 * (length + width);
    }

    void display() const override {
        std::cout << "Rectangle: Area = " << area() << ", Perimeter = " << perimeter() << std::endl;
    }
};

int main() {
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    Shape* shape1 = &circle;
    Shape* shape2 = &rectangle;

    shape1->display(); // Polymorphic behavior
    shape2->display(); // Polymorphic behavior

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
