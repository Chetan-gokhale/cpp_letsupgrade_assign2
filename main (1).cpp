/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    cout<<"enter the number to be checked if prime or not"<<endl;
    int a;
    cin>>a;
    int verify=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
          verify=verify+1;
    }
    
    if(verify==2)
      cout<<"the number "<<a<<" is a prime number"<<endl;
    else
      cout<<"the number "<<a<<" is  not a prime number"<<endl;

    return 0;
}
