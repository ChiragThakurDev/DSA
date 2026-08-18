#include<iostream>
#include<vector>
using namespace std;

vector<int>pairSum(vector<int>& arr,int target){
    vector<int> ans;
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){

                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return { };

}
int main()
{
 vector<int> arr={2,3,5,6,7,8};
 int target=11;
 vector<int>ans=pairSum(arr,target);
 cout<<"Results: "<<ans[0]<<" "<<ans[1];
 return 0;
}
