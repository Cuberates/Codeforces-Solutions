// 1651B-PROVE_HIM_WRONG
#include <bits/stdc++.h>

using namespace std;

void solution() { 
	long long N; cin >> N; long long MAX_VAL = 1e9;

	/* The next element - let's call it b - must be larger than or equal to 3 times the previous element 
	   - let's call it a -. 
	   This is because after the operation, the new sum S = 2*(b-a) has to be larger or equal to the previous
	   sum S' = a+b. This can be represented by the inequality: 2*(b-a) >= a+b.
	   After simplification, we have b >= 3a. Now, we can just evaluate b for the next N-1 elements. For each
	   iteration, we let b = 3*a.
	   If b > 1e9 -> There is no counter example */

	long long cur_val = 1, possible = 1; vector<long long> ans;
	ans.push_back(cur_val);
	for(int i=1;i<N&&possible;i++) {
	 	cur_val *= 3;
		if(cur_val > MAX_VAL) possible = 0;
		ans.push_back(cur_val);
	}
	if(possible) {
		cout << "YES \n";
		for(auto x : ans) cout << x << " ";
		cout << "\n";
	} else cout << "NO \n";
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt;
	for(int i=0;i<tt;i++) {
		// cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}
