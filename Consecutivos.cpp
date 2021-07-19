#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,cont,max_cont;
	long long int v,ant;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> v;
		if(i==0){cont=1;max_cont=1;ant=v;}
		else if(i!=0) if(v==ant) cont++; else{cont=1;ant=v;}
		if(cont>max_cont) max_cont = cont;
	}
	cout << max_cont << endl;
	return 0;
}
