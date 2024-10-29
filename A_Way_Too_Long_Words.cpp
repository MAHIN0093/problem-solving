#include <iostream>
#include <string.h>
using namespace std;
int main() {
int n;
do
{
    cin>>n;
} 
while (n<1 ^ n>100);
for (int i = 0; i < n; i++)
{
    string word;
    cin>> word;
    int len;
    len = word.size();
   if(len>10){
    
    char first;
    char last;
    
       
    first = *word.begin();
    last = word[word.size()-1];
    cout<<first<<len-2<<last<<endl;
   }
   else
   {
    cout<<word<<endl;
   }
   


}


    return 0;
}