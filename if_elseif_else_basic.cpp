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
   
   if(res==1){
       cout << "1 is entered.\n";
   }
   
   else if (res ==2){
       cout << "2 is entered.\n";
   }
   
   else{
       cout << "Please enter 1 of 2.";
   }
        
}

