#include<iostream>
using namespace std;
int binarySearch(int num[],  int n, int key)
{ 
     int start=0;
     int end=n-1;
 int   mid = start + (end-start)/2;
   while(start<=end)
   {
    if(num[mid]==key)
    {
        return mid;
    }
   else if(num[mid]<key)
   {
      start=mid+1;
   }
   else 
   
    end=mid-1;
   
   mid = start + (end-start)/2;
   }

     return -1;
}
int main() {
int arr1[20],n,found;
cout<<"enter the number of elemments in an array"<<endl;
cin>>n;

for(int i=0;i<n;i++)
{
  cin>>arr1[i];
}
cout<<"enter the number you want to find"<<endl;
cin>>found;
int index=binarySearch(arr1,n,found);
cout<<"index of "<<found<<" is "<<index;

return 0;}