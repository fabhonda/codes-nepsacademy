#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;
	if(a==0){
		if(b==0){
			if(c==0){cout << "*" << endl;}
			else if(c==1){cout << "C" << endl;}
		}
		else if(b==1){
			if(c==0){cout << "B" << endl;}
			else if(c==1){cout << "A" << endl;}
		}
	}
	else if(a==1){
		if(b==0){
			if(c==0){cout << "A" << endl;}
			else if(c==1){cout << "B" << endl;}
		}
		else if(b==1){
			if(c==0){cout << "C" << endl;}
			else if(c==1){cout << "*" << endl;}
		}		
	}
	return 0;
}
