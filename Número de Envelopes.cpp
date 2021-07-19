#include<bits/stdc++.h>
#define pb push_back
using namespace std;

int main(){
	int n,min,rotulos;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> rotulos;
		if(i==0) min=rotulos;
		else if(rotulos<min) min=rotulos;
	}
	cout << min << endl;
	return 0;
}
