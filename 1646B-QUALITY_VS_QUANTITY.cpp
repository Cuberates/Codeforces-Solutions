// 1646B-QUALITY_VS_QUANTITY.cpp
#include <bits/stdc++.h>

#define ll long long

using namespace std;

void solution() { // JACK NGUYEN >:DDD
	/* The main observation of this problem is: When you color an item RED, you have
	 * to color another one BLUE. Initially, there will exist an item colored BLUE.
	 * It is also helpful to color the items with the highest values RED, 
	 * and the ones with the lowest values BLUE. This ensures SUM(RED) is maximized.
	 *
	 * We can just sort the items. Then, color the rightmost items BLUE and leftmost
	 * items RED. For each colored item, we add it to the sum of its respected color.
	 * Finally, we can evalate the two sums and conclude the answer.
	 *
	 * If at any point the SUM(RED) > SUM(BLUE), we terminate the coloring process.
	 * After the coloring process is finished and SUM(RED) <= SUM(BLUE), then it
	 * impossible to satisfy the coditions mentioned in the statement. 
   
   * Implementation: O(n log n) - sorting the array. 
	 * */
	ll n; cin >> n; vector<int> a;
	for(int i=0;i<n;i++) {
 		ll x; cin >> x;
 		a.push_back(x);
	}
	sort(a.begin(), a.end());
	if(a[0]==a[n-1]) cout << "NO \n";
	else {
		ll sum_red = 0, sum_blue = 0;
		sum_blue += a[0]; // Initially, there exist a blue item
		ll max_red_count, ok=1;
		// The following two lines compute the highest number of red items.
		if(n%2==0) max_red_count = n/2-1;
		else max_red_count = n/2;
		// Start coloring the elements and evaluating the two sums
		for(int i=0;i<max_red_count&&ok;i++) {
			if(sum_red > sum_blue) ok=0; 
			else {
				sum_red += a[n-1-i]; // Coloring the leftmost element RED (highest by value)
				sum_blue += a[i+1]; // Coloring the rightmost element BLUE (lowest by value)
			}	 
		}
		// Do one final check
		if(sum_red > sum_blue) ok=0;
		// Evaluate the answer
		if(ok) cout << "NO \n";
		else cout << "YES \n";
	}
		
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt; cin >> tt;
	for(int i=0;i<tt;i++) {
	//	cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}

