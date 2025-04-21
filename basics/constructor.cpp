#include <iostream>

class Room
{
                                       // default access specifier (private)
        int length;                    // properties 
        int breadth;

        public:                       // access specifier
        Room (int l, int b)           // function -  the same as class name
        {
            length = l;
            breadth = b;
        }

        int getLength()
        {
            return length;
        }
        int getBreadth()
        {
            return breadth;
        }
        int getArea()            // function to caculate area
        {
            return length*breadth;
        }

};

int main()
{
    Room r1(10,5);                            // defining object no 1 -like we shall many objects //giving variables here itself
    std::cout << "Length = " << r1.getLength() << std::endl;    // print length
    std::cout << "Breadth = " << r1.getBreadth() << std::endl;  // print breadth
    std::cout << "Area = " << r1.getArea() << std::endl;      // print area
    return 0;
}
