// Problem: https://codeforces.com/problemset/problem/1650/B
#include <bits/stdc++.h>

using namespace std;

long long Fa (long long X, long long A) {
	return (X / A) + (X % A);
}

void solution() { // CUBERATES - THE WORST PROGRAMMER OF ALL TIME
	long long L, R, A; 
	cin >> L >> R >> A;

	/* 
	   The simplest solution is iterating over the sequence [L;R].
	   However, this solution gets TLE for large test cases, so we
	   have to come up with a different approach.

	   The function Fa(x) has two parts: floor(x/a) and x mod a.

	   Finding x to maximize floor(x/a) is simple,
	   we just let x = R (the largest element).

	   However, it gets complicated when we evaluate
	   x mod a as well. This is because R mod a doesn't
	   always yield the maximum value. 

	   To resolve this issue, we find x' so that x' mod a = 0.
	   From there, (x'-1) mod a achieves the maximum value (
	   This can be concluded after doing observations). To 
	   compute x', we let: x' = R - (R mod a). Let k = x'-1,
	   k mod a yields the maximum value. 

	   All we have to do is to evaluate k. If k 
	   is not in the sequence [L,R], then the answer is just 
	   Fa(R) - as the most optimal answer is just plugging in the
	   maximum value.

	   If k happens to be in the sequence [L,R] then we have to
	   consider two choices: Either use Fa(k) - getting the maximum
	   x mod a, but sacrificing the value of floor(x/a), or
	   Fa(R) - getting the maximum floor(x/a), but sacrificing
	   the value of x mod a. The answer is simply the
	   maximum value of the two choices.
		
	   Implementation: O(1);	
	   */

	int RMA = R % A; 
	int X = R - RMA - 1; // X mod A is maximum 

	int ans;
	if(X >= L && X <= R) { // X is in the sequence
		ans = max(Fa(X,A), Fa(R,A));
	} else { // X is not in the sequence 
		ans = Fa(R,A); 
	}
	cout << ans << "\n";
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
