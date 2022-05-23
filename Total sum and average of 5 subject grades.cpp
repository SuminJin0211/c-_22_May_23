/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int sub1,sub2,sub3,sub4,sub5,sum;
   
   cout << "Enter the grade of sub1\n";
   cin >> sub1;
   cout << "Enter the grade of sub2\n";
   cin >> sub2;
   cout << "Enter the grade of sub3\n";
   cin >> sub3;
   cout << "Enter the grade of sub4\n";
   cin >> sub4;
   cout << "Enter the grade of sub5\n";
   cin >> sub5;
   
   sum = sub1+sub2+sub3+sub4+sub5;
   cout << "The total grade of 5 subjects is " << sum<<"\n";
   cout << "The average grade of 5 subjects is "<<(double(sum)/5)<<"\n";
}
