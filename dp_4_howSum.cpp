<<<<<<< HEAD
#include<iostream>
using namespace std;
#define ll 	long long int

//Brute Force Approach
bool canSum(int targetSum,int arr[],int size_ar){
	if(!(targetSum))	return true;
	if(targetSum < 0)	return false;
	
	for(int i = 0;i < size_ar;i++){
		int rem = targetSum - arr[i];
		if(canSum(rem,arr,size_ar)) return true;
	}
	return false;
}

int dp[100];
//It has over-lapping sub problems.
//Using Top-Down Memoization.
bool canSum_dp(int targetSum,int arr[],int size_ar){
	//Excusme for TOO MUCH base cases, you can still improve it!
	if(!(targetSum))
		return true;
	if(targetSum < 0)
		return false;
	if(dp[targetSum])
		return true;
	if(!(dp[targetSum]))
		return false;


	for(int i = 0;i < size_ar;i++){
		int rem = targetSum - arr[i];
		if(canSum_dp(rem,arr,size_ar)){
			dp[targetSum] = 1;
			return true;
		}
		else
			dp[targetSum] = 0;
	}
	return false;
}

int main(){
	int arr[] = {7,14};
	if(canSum_dp(300,arr,2))
		cout<<"Yes"<<"\n";
	else
		cout<<"No"<<"\n";
}
=======
#include<bits/stdc++.h>
#define        ll     long long int
using namespace std;
int check[10000];
vector<int>v;
bool howsum(int n,int m,int a[])
{
    if(n==0)
    {
        cout<<"hurrah"<<endl;
        return true;
    }
    if(n<0)return false;
    if(check[n]==1)return true;
    if(check[n]==-1)return false;
    for(int i=0; i<m; i++)
    {
        int r=n-a[i];
        if(howsum(r,m,a)==true)
        {
            v.push_back(a[i]);
            check[n]=1;
            return true;
        }
        else
        {
            check[n]=-1;
        }
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0; i<m; i++)
    {
        cin>>a[i];
    }
    if(howsum(n,m,a)==true){
            cout<<"yes"<<endl;
        for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"no ans"<<endl;
    return 0;
}
>>>>>>> 9dd83d1b50cfbb3941c6784c642960cb65d70b9a
