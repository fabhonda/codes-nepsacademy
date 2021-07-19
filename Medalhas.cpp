#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	int t1,t2,t3;
	vector<int> t,o;
	cin >> t1 >> t2 >> t3;
	t.pb(t1),t.pb(t2),t.pb(t3);
	o = t;
	sort(t.begin(),t.end());
	for(int i=0;i<3;i++) for(int j=0;j<3;j++) if(t[i]==o[j]) cout << j+1 << endl;
	return 0;
}
