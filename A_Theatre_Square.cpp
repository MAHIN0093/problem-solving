#include <iostream>
using namespace std;
int main()
{
    long n;
    long long m;
    long long a;
    long long row; 
    long long col;
    long long num;

    do
    {
        cin>>n>>m>>a;
    } while (a<1 or a>1e9);

if (n%a == 0)
{
    row = n/a;
}
else
{
    row = n/a + 1;
}

if (m%a == 0)
{
    col = m/a;
}
else
{
    col = m/a + 1;
}




num = row * col;
cout<<num<<endl;
   
}
