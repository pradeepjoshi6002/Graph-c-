#include <bits/stdc++.h>
using namespace std;

int main(){

	int n,m;
	cin>>n>>m;

	// int adj[n+1][n+1]={0};

	// for(int i=1;i<=m;i++){
	// 	int row,col,weight;
	// 	cout<<"row, col and weight:";
	// 	cin>>row>>col>>weight;
	// 	adj[row][col]=weight;
	// 	adj[col][row]=weight;
	// }
	// for(int i=1;i<=n;i++){
	// 	for(int j=1;j<=n;j++){
	// 		cout<<adj[i][j]<<' ';
	// 	}
	// 	cout<<endl;
	// }
	vector<pair<int,int>> adj[n+1];

	for(int i=1;i<=m;i++){

		int source,destination,weight;
		cin>>source>>destination>>weight;

		adj[source].push_back({destination,weight});
		adj[destination].push_back({source,weight});
	}
	for(int i=1;i<=n;i++){
		for(auto x:adj[i]){
			cout<<"{"<<x.first<<","<<x.second<<"}"<<" ";
		}
		cout<<endl;
	}
}
