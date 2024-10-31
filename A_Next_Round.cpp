#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a;
    int b;

    do
    {
        cin>>a>>b;
    } while ((a<1) or (b<1) or (a>50) or (b>50) or (b>a));
    
    
    vector<int> numbers;
    
    int num;
    int count =0;
    for (int i = 0; i < a; i++)
    {
        cin>>num;
        numbers.push_back(num);
    }
    int k = numbers.at(b-1);
    for (int i = 0; i < a; i++)
    {
        int x = numbers.at(i);    
         if((x >= k) && (x>0)){
            count++;
         }   
        }
    
    
  
  cout << count << endl;
}
