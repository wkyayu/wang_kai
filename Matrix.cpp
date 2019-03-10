#include <iomanip>
#include "Matrix.h"
using namespace std;

ostream &operator<<( ostream &output, const Matrix &member )
{
    output << member.n1 << "\t" << member.n2<< "\t " << member.n3 << "\n"
           << member.n4 << "\t" << member.n5 << "\t" << member.n6<< "\n"
           << member.n7 << "\t" << member.n8 << "\t" << member.n9<< "\n"
           << member.n10 << "\t" << member.n11<< "\t" << member.n12;
    return output;
}

istream &operator>>( istream &input, Matrix &member )
{
    input >> setw(1)>> member.n1;
    input >> setw(1)>> member.n2;
    input >> setw(1)>> member.n3;
    input >> setw(1)>> member.n4;
    input >> setw(1)>> member.n5;
    input >> setw(1)>> member.n6;
    input >> setw(1)>> member.n7;
    input >> setw(1)>> member.n8;
    input >> setw(1)>> member.n9;
    input >> setw(1)>> member.n10;
    input >> setw(1)>> member.n11;
    input >> setw(1)>> member.n12;
    return input;
}
