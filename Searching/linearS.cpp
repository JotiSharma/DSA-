#include<iostream>
using namespace std;

void LinearSearch(int n, int num[],int k)
{    
    int position;
    int mid=n/2;
    for (int i = 0; i < n; i++)
    {
       if(num[i]==k)
       {
         position=i;
       cout<<"element is found at position "<<i+1<<" and index "<<i<<endl;
          if(i<mid)
          {
            cout<<"it has best time complexity O(1)"<<endl;
          }
          else if(i==mid)
          {
            cout<<"it has average time complexity O(n)"<<endl;
          }
          else{
          cout<<"it has worst time complexity O(n)"<<endl;
          }
       }
    }
  
}
int main() {
int size,arr[1000],key;
cout<<"enter the size of the array: "<<endl;
cin>>size;
cout<<"enter the elements of array of size "<<size<<endl;
for (int i = 0; i < size; i++)
{
  cin>>arr[i];
}
cout<<"enter the key"<<endl;
cin>>key;
LinearSearch(size,arr,key);

return 0;}