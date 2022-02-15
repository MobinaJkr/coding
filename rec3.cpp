//IN THE NAME OF ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mxn=1e5+10;
int a[mxn];

int rec(int x,int y){
	if(x<y && a[x]%2==0){
		cout<<a[x];	
	}
	rec(x+1,y);
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	rec(0,n);
	return 0;
} 
