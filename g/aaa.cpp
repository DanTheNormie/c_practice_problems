#include<bits/stdc++.h>
using namespace std;

void find(vector<vector<int>> &t_ans, vector<int> &v, vector<int> ans, int x, int sum)
{
    if (sum == x)
    {
        t_ans.push_back(ans);
        return;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if ((sum + v[i]) <= x)
        {
            ans.push_back(v[i]);
            sum += v[i];
            find(t_ans, v, ans, x, sum);
            ans.pop_back();
            sum -= v[i];
        }
    }
}

vector<vector<int>> combinationSum(vector<int>& v, int x) {
    vector<vector<int>> t_ans;
    vector<int> ans;
    find(t_ans,v,ans,x,0);
    return t_ans;
}  

int main(){
    

    

    vector<int> v{2,4,3,1};

    vector<vector<int>> ans = combinationSum(v,7);

    for(int i=0; i<ans.size();i++){
        for(int j=0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}