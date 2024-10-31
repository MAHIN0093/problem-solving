#include <iostream>
#include <string.h>
using namespace std;


int main()
{
   int result=0; 
   int n;
   cin>>n;

   for (int i = 0; i < n; i++)
   {
    string x;
    cin>>x;
    if ((x == "X++") ^ (x == "++X"))
    {
    result++;
    }
    else if((x == "X--") ^ (x == "--X"))
    {
    result--;
    }
   }
   cout<<result<<endl;
}
