#include <iostream>

class Room
{
                                       // default access specifier (private)
        int length;                    // properties 
        int breadth;

        public:                       // access specifier
        void setValues (int l, int b)  // function to set values
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
    Room r1;                            // defining object no 1 -like we shall many objects
    r1.setValues(10,5);
    std::cout << "Length = " << r1.getLength() << std::endl;    // print length
    std::cout << "Breadth = " << r1.getBreadth() << std::endl;  // print breadth
    std::cout << "Area = " << r1.getArea() << std::endl;      // print area
    return 0;
}