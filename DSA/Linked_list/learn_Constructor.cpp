#include <iostream>

class MyClass {
public:
    // Default constructor
    MyClass() {
        std::cout << "Default constructor called." << std::endl;
    }

    // Parameterized constructor
    MyClass(int x) {
        std::cout << "Parameterized constructor called with value: " << x << std::endl;
    }
};

int main() {
    // Creating objects of MyClass
    MyClass obj1;        // Calls the default constructor
    MyClass obj2(42);    // Calls the parameterized constructor

    return 0;
}
