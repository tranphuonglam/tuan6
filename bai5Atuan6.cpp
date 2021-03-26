#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

long int vonglap(int n,int a[100]) {
	//int a[100];
	a[0] = 0;
	a[1] = 1;
	for(int i=2;i<=n;i++) {
	a[i] = a[i-1]+a[i-2];
}

}
/*
long F(int n) {
 if (n == 0) return 0;
 if (n == 1) return 1;
 return F(n-1) + F(n-2);
}
*/

int main() {
	int n,i;
	int a[100];
	cin >> n;
	//cout << F(n);
     vonglap(n,a);
	cout << a[n];
	return 0;
	//dung vong lap voi n = 30 nhanh hon dung de quy 
}
