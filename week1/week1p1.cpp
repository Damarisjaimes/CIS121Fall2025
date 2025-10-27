#include <iostream>

int main()
{
    // Define variables
    float no1, no2, s;

    // Input phase
    no1 = 10.50;
    no2 = 12.25;

    // Process phase
    s = no1 + no2;

    // Output phase
    std::cout << "The sum is " << s << std::endl;

    // A better way to pause the console on some systems
    std::cin.get(); 

    return 0;
}