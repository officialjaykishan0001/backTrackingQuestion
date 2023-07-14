#include<iostream>
#include<vector>

using namespace std;
vector<vector<int>> combinations;
void  generateCombinations(int n ,int k ,vector<int> curr_comb , int start)
{
    if(curr_comb.size()==k)
    {
        combinations.push_back(curr_comb);
        return ;
    }

    for(int i = start ;i<=n ;  i++)
    {
        curr_comb.push_back(i);
        generateCombinations(n,k,curr_comb,i+1);
        curr_comb.pop_back();
    }


}
int main()
{
    int n; 
    cout<<"Enter the value of the n :  ";
    cin>>n;

    int k;
    cout<<"\nEnter the value of the k : ";
    cin>>k;


    generateCombinations(n,k,{},1);


    for(int i=0;i<combinations.size();i++)
    {
        for(int j = 0;j<combinations[i].size(); j ++)
        {
            cout<<combinations[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}