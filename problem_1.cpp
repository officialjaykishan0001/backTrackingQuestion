//problem : given an n as input . generates all the strings that are palindrome
//with the number of digits of as n for example the palindrome of size 3 is 
//121 010 313.

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void palindrome(int n,string s,int i )
{

    if(i<=(n+1)/2)
    {
       for(char x  = '0';x<='9';x++ )
       {
        s.push_back(x);
        palindrome(n,s,i+1);
        s.pop_back();
       }
    }

    else{
        string temp = s;
        if(n%2==1) temp.pop_back();
        reverse(temp.begin(),temp.end());

        cout<<s+temp<<" , "<<endl;
    }
}
int main()
{
    int n;
    cin>>n;

    palindrome(n,"",0);

    return 0;
}