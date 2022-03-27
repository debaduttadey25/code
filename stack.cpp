#include<bits/stdc++.h>
using namespace std;
void pop(stack<int> a)
{
  while(!a.empty())
  {
    cout<<a.top()<<endl;
    a.pop();

  }

   

}
int main()
{
   stack<int> arr;
   arr.push(1);
   arr.push(11);
   arr.push(111);
   arr.push(1111);
   arr.push(11111);
   pop(arr);
return 0;
}
