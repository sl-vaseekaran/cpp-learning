#include <iostream>  // for inclding std
#include <cmath>  // for including sqrt

main ()
{
    int A;
    std::cout << "Enter the value of A:";
    std::cin >> A;
    int B;
    std::cout << "Enter the value of B:";
    std::cin >> B;
    int C;
    std::cout << "Enter the value of C:";
    std::cin >> C;

    int disc;
    disc = (B * B) - (4 * A * C);

    if (disc >= 0)
    {
        int root1 = (-B + sqrt(disc))/ 2* A;
        int root2 = (-B - sqrt(disc))/ 2* A;
        std::cout << "Root1 is" << root1 << std::endl;
        std::cout << "Root2 is" << root2 << std::endl;
    }
    else
    {
        int real = ((-B/2))*A;
        int imaginary = (sqrt(-disc))/2 * A;
        std::cout << "Root1 is " << real << "+" << imaginary << "i" << std::endl;
        std::cout << "Root2 is " << real << "-" << imaginary << "i" << std::endl;
    }
    return 0;
}
