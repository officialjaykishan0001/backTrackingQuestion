#include<vector>
#include<iostream>

using namespace std;
vector<string>  res;
void solve(string a,string b,int i,int j,string temp)
{
    if(i==a.size())
    {
        i = 0;
        return ;
    }
    if(j>=b.size())
    {
        i = i+1;
        j=0;
    }
    temp.push_back(a[i]);
    temp.push_back(b[j]);
    res.push_back(temp);
    
    solve(a,b,i,j+1,""); 
    return;
}
int main()
{
    vector<string> dialPaid = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    string str;
    cout<<"Enter the your digit string : ";
    cin>>str;

    if(str.size()>2) return ;//if str.size( ) > 2 then this program will through an error
    vector<int> idx;

    int n = str.size();
    for(int i = 0;i<n;i++)
    {
        
        idx.push_back(str[i] - '0');


    }


    vector<string> toBePassed ;

    for(int i=0;i<idx.size();i++)
    {
        string temp = dialPaid[idx[i]];
        toBePassed.push_back(temp);
    }

solve(toBePassed[0],toBePassed[1],0,0,"");

res.pop_back();
cout<<endl<<"The final answer is : "<<endl<<endl;

for(int i=0;i<res.size();i++)
{
    cout<<res[i]<<" ";
}
cout<<endl;


    return 0;
}
//Jai Jai Jai Bajarangbali....