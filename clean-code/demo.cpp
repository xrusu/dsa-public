#include "demo.h"

// this is a demo on how to write clean code
// the following code represents a simple console program
// that is an in-memory to-do list

int main() {
    std::cout << "Welcome to your ToDo list." << std::endl;

    // the actual functionality here is left unimplemented
    // due to the fact that it would be out of scope for this demo
    while (true) {
        std::cout << "Please enter a number: ";
        int number;
        std::cin >> number;
        switch (number) {
            case 1:
                // add a new to-do
                std::cout << "Will add a new to-do" << std::endl;
                break;
            case 2:
                // delete a to-do
                std::cout << "Will delete a to-do" << std::endl;
                break;
            case 3:
                // mark a to-do as done
                std::cout << "Will mark a to-do as done" << std::endl;
                break;
            case 4:
                // mark a to-do as undone
                std::cout << "Will mark a to-do as undone" << std::endl;
                break;
            case 5:
                // edit a to-do
                std::cout << "Will edit a to-do" << std::endl;
                break;
            case 6:
                // exit the program
                return 0;
            default:
                std::cout << "Invalid selection. Please try again." << std::endl;
                break;
        }
    }
}
