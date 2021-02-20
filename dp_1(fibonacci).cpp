#include<iostream>
#include<cstring>
using namespace std;
#define ll 	long long int
#define MAX 100


ll dp[MAX];

//Function to find the nth Fibonacci Number using Top-Down Approach or Memoization.
ll fib(int n){

	if(!dp[n]){
		if(n <= 1)
			dp[n] = n;
		else
			dp[n] = fib(n-1) + fib(n-2);
	}
	return dp[n];
}

int main(){
  //Initializing all the elemnets of the array as 0.
	memset(dp,0,sizeof(dp));
  
  
	cout<<fib(10);
}
