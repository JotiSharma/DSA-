#include<iostream>
using namespace std;
class Stack
{
 public:
 //properties
 int*arr;
 int top;
 int size;

 //behaviour
 Stack(int size)
 {
    this->size=size;
    //creating array dynamically
    arr=new int[size];
    top=-1;
 }
 void push(int element)
 { 
   if(size-top>1)
    {
    top++;
    arr[top]=element;
     }
   else
       {
    cout<<"stack overflow"<<endl;
         }
 }
 void pop()
 {
    if(top>=0)
        {
    top--;
        }
  else
          {
    cout<<"stack underflow"<<endl;
          }
 }
 int peek()
 {
  if(top>=0 &&top<size)
  {
    return arr[top];
  }
  else
  {
    cout<<"stack is empty"<<endl;
    return -1;
  }
 }
 bool isEmpty()
 {
   if(top==-1)
   {
    return true;

   }
   else
   {
    return false;
   }
 }
};
int main() {
Stack st(4);
st.push(22);
st.push(23);
st.push(34);
st.pop();
cout<<"the top element is : "<<st.peek()<<endl;
if(st.isEmpty())
{
    cout<<"stack is empty"<<endl;
}

return 0;}