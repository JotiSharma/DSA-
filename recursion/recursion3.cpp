#include<iostream>
#include<math.h>
//check if the given number can be expressed in terms of power of 4
using namespace std;
 bool isPowerOfFour(int n) {
  
      for(int i=0;i<n;i++)
      {
        if(pow(4,i)==n)
        {
            return true;
        }
      }
       
    return false;
    }
int main() 
{
cout<<isPowerOfFour(5);

return 0;
}