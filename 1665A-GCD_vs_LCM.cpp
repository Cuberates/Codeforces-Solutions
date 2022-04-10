#include <bits/stdc++.h>

#define ll long long
#define debug(x) cout << #x << ": "; _print(x); cout << endl;

using namespace std;

void solution() { // JACK NGUYEN >:DDD
	int n; cin >> n;
	// Observation: GCD(1, a) = 1 and LCM(1, 1) = 1
	// Answer: 1 a-3 1 1
	cout << 1 << " " << n-3 << " " << 1 << " " << 1 << "\n";			 		
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt;
	for(int i=0;i<tt;i++) {
		//cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}

