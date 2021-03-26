#include <iostream>
using namespace std;
int F(int n) {
	int a[n];
	int i;
	for(i=0;i<n;i++) {
		cin >> a[i];
	}
	for(i = 0;i<n;i++) {
		cout << &a[i] << " ";
	
	}
		cout << endl;
	cout << &a[0] << endl;
}
int main() {
	int n;
	cin >> n;
	int a[10] = {1, 3, 5, 16, 7};
	//int a[n];
	F(n);
	//cout << endl << "a: ";
	for(int i=0;i<5;i++) {
		cout << &a[0] << " ";
		break;
	}
	return 0;
	//dia chi bien mang a va a[0] trong ham main la giong nhau va bang vi tri cua bien mang a trong f
//dia chi bien mang a trong f khac vi tri a[0].
}
