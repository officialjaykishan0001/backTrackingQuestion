#include<iostream>

#include<vector>

using namespace std;
vector<string> res;

void wellFormedParenthesis (int open,int close,string temp)
{
    if(open==0 && close == 0)
    {
        res.push_back(temp);
        return ;
    }

    if(open>0)
    {
        wellFormedParenthesis(open-1,close,temp+'(');

    }

    if(close>open)
    {
        wellFormedParenthesis(open,close-1,temp+')');
    }


}

int main()
{
    int n;
    cout<<"enter the no of the parenthesis : ";
    cin>>n;


    wellFormedParenthesis(n,n,"");


    cout<<endl<<"The well formed parenthesis are : "<<endl;

    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
cout<<endl;
    return 0;
}
/*Jai Jai Jai Bajarangbali...
