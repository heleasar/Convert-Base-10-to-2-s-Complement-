#include <iostream>
#include <bitset>

int main() {
    int num;
    char choice;

    do {
        // Allowing the user to input a base 10 integer
        std::cout << "Enter a base 10 integer: ";
        std::cin >> num;

        // Computing the 2's complement binary number
        std::bitset<32> binary(num);

        // Outputting the equivalent 2's complement binary number
        std::cout << "2's Complement Binary: " << binary << std::endl;

        // Asking the user if they want to continue
        std::cout << "Do you want to continue (y/n)? ";
        std::cin >> choice;

        std::cout << std::endl;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
