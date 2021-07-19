#include<bits/stdc++.h>
using namespace std;

int main(){
	int l1,a1,l2,a2;
	cin >> l1 >> a1 >> l2 >> a2;
	if(l1*a1>l2*a2) cout << "Primeiro" << endl;
	else if(l1*a1<l2*a2) cout << "Segundo" << endl;
	else cout << "Empate" << endl;
}
