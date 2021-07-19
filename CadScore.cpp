#include<bits/stdc++.h>
using namespace std;

int main(){
	int p,n,f;
	cin >> p >> n;
	for(int i=0;i<n;i++){
	cin>>f;
	p+=f;
	if(p<0) p=0;
	if(p>100) p=100;
	}
	cout << p << endl;
	return 0;
}
