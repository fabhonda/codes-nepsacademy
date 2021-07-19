#include<bits/stdc++.h>
using namespace std;

int main(){
	int x;
	cin >> x;
	for(int i=1;i<=x;i++){
		if(x%i==0){
			if(i==x) cout << i << endl;
			else cout << i << " ";
		}
	}  
	return 0;
}
