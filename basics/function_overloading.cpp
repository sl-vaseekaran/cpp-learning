#include <iostream>

int absl(int A);
double absl(double A);  // also use absDouble

int main()
{
    int A = -5;
    double B = -3.5;
    std::cout << absl(A) << std::endl;  // absolute vaule function (+ve values)
    std::cout << absl(B) << std::endl;
    return 0;
}

int absl(int A)
{
    return A<0?-A:A;   //A is lesser than 0 means -A orelse +A
}

double absl(double B)
{
    return B<0?-B:B;
}
