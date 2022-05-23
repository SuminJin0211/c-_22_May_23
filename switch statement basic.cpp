/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   int res;
   
   cout << "Enter the integer\n";
   
   cin >> res;
   
   switch(res){
       case 1:
       cout << "1 is entered.\n";
       break;
       
       case 2:
       cout << "2 is entered.\n";
       break;
       
       default:
       cout << "Please enter 1 or 2.\n";
       break;
   }
        return 0;
}

