#include <bits/stdc++.h>

using namespace std;

void solution() { // JACK NGUYEN >:DDD
   
   /* Simplify: At operation i (1<=i<=n), we can swap the letter at one of two
    * indices A[i], or M+1-A[i], with letter 'A'. It all comes down to which indice
    * we choose at each operation. 
    *
    * Our strategy is simple, we compare the two indices and pick the lowest one
    * . If the letter at that indice is already altered, then we pick
    * the other one.
    *
    * */
    
   int n, m; 
   cin >> n >> m; vector<int> a;
   for(int i=0;i<n;i++) {
      int x; cin >> x;
      a.push_back(x);
   }
   string s; 
   for(int i=0;i<m;i++) s.push_back('B');
   for(int i=0;i<n;i++) {
      int x = a[i]-1,
          y = m-a[i];
     // Compare the two indices
      if(x<=y) {
         if(s[x]!='A') s[x]='A';
         else s[y] = 'A';
      } else {
         if(s[y]!='A') s[y]='A';
         else s[x] = 'A';
      }
   }
   cout << s << "\n";
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int tt = 1; 
	cin >> tt;
   for(int i=0;i<tt;i++) {
	//	cout << "TEST CASE #" << i << " : \n"; // For debugging purposes
		solution();
	}
	return 0;
}

