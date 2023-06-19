// #include<iostream>
// using namespace std;
// //paramereterrized recurisve way to print sum of First N natural number


void func(int i,int sum)
{
if(i<1){
    cout<<sum;
    return ;
}
func(i-1, sum+i);
}

// //functional way to recursively print sum of first N natural numbers
int func2(int n)
{ 
  if(n==0)
  {
    return 0;
  }
  return n+func2(n-1);
}
int main() {
int n;
cin>>n;
// func(n,0);
cout<<func2(n);
return 0;}

