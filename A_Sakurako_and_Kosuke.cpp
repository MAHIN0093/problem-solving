#include <iostream>

int main(){
    int t;
    int n;
    do
    {
    std::cin>>t;
    } while (t<1 ^ t>100);

        do
    {
    std::cin>>n;
    } while (n<1 ^ n>100);

    bool toggle = true;//true for sakura
    int x = 0;
    for (int i = 0; i < t; i++)
    {
    if (x>=0)
    {
        if (x>n){
            break;
        }
    }
    else if(x<0)
    {
        if (x<(-n)){
            break;
        }
    }
    if (i%2==0)
        {
            x-= (2*i-1);
            toggle = true;
        }
    else
        {
            x+= (2*i-1);
            toggle = false;

        }
        
 }

    if (toggle==true){
        std::cout<<"Sakurako"<<'/n';
    }

    else if (toggle==false){
        std::cout<<"Kosuke"<<'/n';
    }


    
    
    
}