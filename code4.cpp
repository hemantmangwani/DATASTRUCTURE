#include <iostream>
using namespace std;
int main()
{
    char line[150];
    int i, vowels,n,t;
     cin>>t;   
   
while(t>0)
{
	cin>>n;
	 vowels  = 0;
	 cout<<"Enter a line of string: ";
    cin>>line;
    for(i=0; i<=n ;i=i+2)
    {
    	
        if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
           line[i]=='o' || line[i]=='u' )
        {
            vowels=vowels+1;
        }
    }
     cout<<"Vowels: "<<vowels;
 t--;
}
     return 0;
 }
