#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool compare ( int  a,int b)
{
    return a>b;
}

bool canWeFormSquare(vector<int> matchSticks,int i,vector<int> sides,int targetLength)
{
    
    if(i==matchSticks.size())
    {
        for(int i=0;i<sides.size();i++)
        {
            if(sides[i]!=targetLength)
            {
                return false;
            }
        }
         return true;
    }

    
    for(int idx=0;idx<sides.size();idx++)
    {
        if(sides[idx] + matchSticks[i] <= targetLength)
        {
            sides[idx] += matchSticks[i];
        }
        if(canWeFormSquare(matchSticks,i+1,sides,targetLength))
        {
            return true;
        }
        sides[idx] -= matchSticks[i];
    }

    return false;
}
int main()
{
    int n ;
    cout<<"Enter the matchsticks vector array size : ";
    cin>>n;

    vector<int> matchSticks(n);

    for(int i=0;i<n;i++)
    {
        cin>>matchSticks[i];
    }
int sum = 0;
    for(int i = 0; i<matchSticks.size() ; i++)
    {
        sum += matchSticks[i];
    }
    int targetLength = sum/4;
    if(sum%4!=0)
    {
        cout<<"no"<<endl;

        return 0;
    }

    sort(matchSticks.begin(),matchSticks.end(),compare);

    

    vector<int> sides(4,0);
    bool flag = canWeFormSquare(matchSticks,0,sides,targetLength);

    if(flag)
    {
        cout<<"Yes "<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}//Jai Jai Jai Bajarangbali...
