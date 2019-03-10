#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <string>

class Matrix
{
    public:
        friend std::ostream &operator<<( std::ostream &, const Matrix & );
        friend std::istream &operator>>( std::istream &, Matrix & );
    private:
        std::string n1;
        std::string n2;
        std::string n3;
        std::string n4;
        std::string n5;
        std::string n6;
        std::string n7;
        std::string n8;
        std::string n9;
        std::string n10;
        std::string n11;
        std::string n12;
};

#endif
