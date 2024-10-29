#include <iostream>

int main(){
    int w;

    do
    {
        std::cin>>w;
    } while ((w<1) ^ (w>100));
    
    if(w%2==0 && w!=2){
        std::cout<<"YES";
    }
    else
    {
        std::cout<<"NO";
    }
    
}