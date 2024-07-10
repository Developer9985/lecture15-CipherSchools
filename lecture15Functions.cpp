#include <iostream>

// Function to compare two numbers and return the larger one
int compareNumbers(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int num1, num2;

    // Get input from the user
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Call the compareNumbers function
    int largerNumber = compareNumbers(num1, num2);

    // Print the result
    std::cout << "The larger number is: " << largerNumber << std::endl;

    return 0;
}
