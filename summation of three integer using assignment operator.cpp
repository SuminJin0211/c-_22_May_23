/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int sum = 0;
   int num = 0;
   
   cout << "Enter the first num\n";
   cin >> num;
   sum += num;
   cout << "Enter the second num\n";
   cin >> num;
   sum +=num;
   cout<<"Enter the third one\n";
   cin >> num;
   sum += num;
   
   cout << "The summation of 3 integer is "<<sum<<"\n";
   
    return 0;
}
