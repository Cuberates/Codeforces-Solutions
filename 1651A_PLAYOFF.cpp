// 1651A_PLAYOFF
#include <bits/stdc++.h>

using namespace std;

void solution() { 
	long long N; cin >> N;
	// The answer is 2^n-1, from simple observations
	cout << fixed << setprecision(0) << pow(2,N)-1 << "\n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt;
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
}
