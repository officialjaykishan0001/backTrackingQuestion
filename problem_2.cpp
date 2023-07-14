#include<iostream>
#include<vector>
using namespace std;


vector<vector<int>> subset;

void  getSubSet(vector<int> &v,int i,vector<int> temp)
{
    if(i==v.size())
    {
        subset.push_back(temp);
        return ;
    }

    //inclusion ...
    temp.push_back(v[i]);
    getSubSet(v,i+1,temp);
    temp.pop_back();

    //exlusion .

    getSubSet(v,i+1,temp);

    return ;
}


bool  solution(int target)
 {
	   bool flag = false;

    for (int i = 0; i < subset.size(); i++) {
        int product = 1;

        if (target == subset[i][0]) {
            return true;
        }

        for (int j = 0; j < subset[i].size(); j++) {
            product *= subset[i][j];
        }

        if (product == target) {
            flag = true;
            return flag;
        }
    }

    return flag;
}
 

int main()
{
	int n;
	cin>>n;
	cout<<endl;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	
	cout<<endl;
	
	getSubSet(v,0,{});
	int target;
	cin>>target;
	
	cout<<endl;
	if(solution(target)== 1){
		cout<<"yes"<<" ";
	}
	else{
		cout<<"no";
	}
	
	return 0;
}

/*Jai Jai Jai Bajarangbali....