#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double sales;
   double wage;


   cout << "Enter sales in dollars (-1 to end): ";
   cin >> sales;


   cout << fixed << setprecision( 2 );


   while ( sales != -1.0 )
   {
      wage = 200.0 + 0.09 * sales;
      cout << "Salary is: $" << wage;
      cout << "\n\nEnter sales in dollars (-1 to end): ";
      cin >> sales;
   }
}
