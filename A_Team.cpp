#include <iostream>
using namespace std;

int main()
{
    int n;
    
    int count=0;
    do
    {
    cin>>n;
    } while (n<1 ^ n>1000);
    for (int i = 0; i < n; i++)
    {
        int z=0;
        for (int i = 0; i < 3; i++)
        {
            int x;
            cin>>x;
            if(x==1){
                z++;

        }
            
        
    }
    if((z)>1){
            count++;
    }
    }
    cout<<count<<endl;
    
    return 0;
}
