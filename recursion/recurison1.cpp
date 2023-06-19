//print your name N times
#include<iostream>
using namespace std;
void print(int i,int n)
{   
 
    if(i>n)
    {
     return ;
    }
    else
    {
    cout<<"jyoti"<<endl;
    
    print(i+1,n);
    }
}
int main() {
    int n;
    cin>>n;
print(1,n);
return 0;}


//print linearly from 1 to N
#include<iostream>
using namespace std;
void print(int i, int n)
{
    if(i>n)
    {
        return ;
    }
    cout<<i<<" ";
    print(i+1, n);
}
int main() {
int n;
cin>>n;
print(1,n);
return 0;}


//print N to 1 i.e in the reverse fashion 
#include<iostream>
using namespace std;
void print(int i, int n)
{
    if(i<1)
    {
        return ;
    }
    cout<<i<<" ";
    print(i-1, n);
}
int main() {
int n;
cin>>n;
print(n,n);
return 0;}

//print 1 to N by backtracking
#include<iostream>
using namespace std;
void print(int i, int n)
{
    if(i>n)
    {
        return ;
    }
  
    print(i+1, n);
      cout<<i<<" ";
}
int main()
{
int n;
cin>>n;
print(1,n);
return 0;
}
