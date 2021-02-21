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