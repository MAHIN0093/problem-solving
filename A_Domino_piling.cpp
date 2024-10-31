#include <iostream>
using namespace std;
int main()
{
    int row;
    int col;
    int count;
    do
    {
        cin>>row>>col;
    } 
    while ((row<1) or (row>16) or (col<1) or (col>16));

    if (row%2==0){
        count= (row/2) * col;
        cout<<count<<endl;
        return 0;
    }
    
    count= (row/2) * col + col/2 ;
    cout<<count<<endl;
}
