#include<iostream>
#include<set>
#include<vector>

using namespace std;

vector<vector<int>> subset;

void getSubSet(vector<int> &v,int idx,vector<int> temp)
{
    if(idx==v.size())
    {
        subset.push_back(temp);
        return ;
    }

    temp.push_back(v[idx]);
    getSubSet(v,idx+1,temp);
    temp.pop_back();

    getSubSet(v,idx+1,temp);

    return ;
}


int main()
{
    int n;
    cout<<"Enter the size of the vector  : ";
    cin>>n;

    vector<int> v(n);

    cout<<"Enter the elements of the vector : "<<endl;

    for(int i = 0;i < n ;i++)
    {
        cin>>v[i];
    }

    getSubSet(v,0,{});


    set<vector<int>> temp;

    for(auto s : subset)
    {
  

        temp.insert(s);
    }
    vector<vector<int>> result;
    for(auto a : temp)
    {
        vector<int> res;
        res.insert(res.end(),a.begin(),a.end());
        result.push_back(res);

    }


    cout<<"the non duplicate subsets are  : "<<endl;

    for(int i=0;i<result.size() ;i++)
    {
        for(int j  = 0 ; j<result[i].size();j++)
        {
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*Jai Jai Jai Bajarangbali....
this program coded by jaykishan kharwar
at
time: 2:54
date : 12-07-2023*/