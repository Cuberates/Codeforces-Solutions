// 1650A-DELETION_OF_TWO_ADJACENT_LETTERS
#include <bits/stdc++.h>

using namespace std;

void solution() { 
	
	string S; char C; 
	cin >> S >> C;

	/* The operation is always possible iff C is located at odd positions. The
	   statement can be proved by doing observations with strings of different sizes */

	int ans = 0, len = S.length();
	for(int i=0;i<len&&!ans;i++) {
		if(i%2==0&&S[i]==C) ans = 1;
	}
	if(ans) cout << "YES \n";
	else cout << "NO \n";
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
