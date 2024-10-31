#include <iostream>
using namespace std;
int main()
{
    int row=0;
    int col=0;
    int moves=0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            {
                int n;
                cin>>n;
                if (n==1){
                    row = i+1;
                    col = j+1;
                }
            }
    }
    if (row>3)
    {
        moves+= (row-3);
    }
    else
    {
        moves+= (3-row);
    }
        if (col>3)
    {
        moves+= (col-3);
    }
    else
    {
        moves+= (3-col);
    }

    cout<<moves<<endl;
    
}
