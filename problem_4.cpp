#include<iostream>
#include<vector>

using namespace std;
vector<string> res;

void solve(string &s,int idx,string temp)
{
    if(idx==s.size())
    {
      if(temp.size()>1)  res.push_back(temp);

        return ;
    }

    if(s[idx]>=97 && s[idx]<=122)
    {
        char x = toupper(s[idx]);
        temp += x;
        solve(s,idx+1,temp);
        temp.pop_back();

        
       // solve(s,idx+1,temp);
    }
    if(s[idx]>=65 && s[idx]<=90)
    {
        char  y = tolower(s[idx]);
        temp += y;
        solve(s,idx+1,temp);
        temp.pop_back();

       // solve(s,idx+1,temp);
    }
    else{
        temp += s[idx];
        solve(s,idx+1,temp);
        temp.pop_back();

        // solve(s,idx+1,temp);
    }

}
int main()
{
    string s;
    cout<<"Enter you string : ";
    cin>>s;

    solve(s,0,"");
cout<<endl<<"the final result is : "<<endl;
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }

    cout<<endl;
    return 0;
}
/*Jai Jai Jai Bajarangbali...
this program coded by Jay kishan kharwar
at
time : 3:31
date : 12-7-2023*/