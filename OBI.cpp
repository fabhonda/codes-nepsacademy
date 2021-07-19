#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,p,x,y,convidado=0;
	cin >> n >> p;
	while(n--){
		cin >> x >> y;
		if(x+y>=p) convidado++;
	}
	cout << convidado << endl;
	return 0;
}
