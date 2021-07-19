#include<bits/stdc++.h>
using namespace std;

int main(){
	double p1,p2;
	cin >> p1 >> p2;
	if((p1+p2)/2 >= 7) cout << "Aprovado" << endl;
	else if((p1+p2)/2 < 7 && (p1+p2)/2 >= 4) cout << "Recuperacao" << endl;
	else cout << "Reprovado" << endl;
}
