#include<iostream>
using namespace std;
#define ll 		long long int
#define MAX 102


ll dp[MAX][MAX];

//Using Naive/ Brute-Force approach
ll solve(int m,int n){
	if(m == 1 && n == 1)
		return 1;
	if(m == 0 || n == 0)
		return 0;

	return solve(m-1,n) + solve(m,n-1);
}
//Using the concept of memoisation
ll solve_dp(int m,int n){
	if(!(dp[m][n])){
		if(m == 1 && n == 1)
			dp[m][n] = 1;
		else if(m == 0 || n == 0)
			dp[m][n] = 0;
		else
			dp[m][n] = solve(m-1,n) + solve(m,n-1);
	}
	return dp[m][n];
}

int main(){
	//This will work with Niave approach
	//cout<<solve(9,1);
	//This will fail with Naive approach
	//cout<<solve(9,100);

	//But will work fine with the DP approach
	cout<<solve_dp(9,50);
}

//Code contributed by:Abhishek Dutt 
//Queries, mail at duttabhishek0@gmail.com


/*
	(1,1) -->  1
	(0,x) || (x,0) --> 1

*/