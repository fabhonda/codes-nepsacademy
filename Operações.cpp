#include<bits/stdc++.h>
using namespace std;

int main(){
	double n1,n2;
	char o;
	cin >> o;
	cin >> n1 >> n2;
	if(o=='M') cout << fixed << setprecision(2) << n1*n2 << endl;
	else if(o=='D') cout << fixed << setprecision(2) << n1/n2 << endl;
	return 0;
}
