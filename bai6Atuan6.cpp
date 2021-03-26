#include <iostream>
#include <cmath>
using namespace std;
long int test(int i) {
		long int a[1000000];
	long int count = 0;
	if(i==1000000)  {a[i] = 5;}
	else {
	a[i] = a[i-1]+1;
	 cout<<test(i+1);
	 count++;
	 }
}
int main() {
	long int a[1000000];
	long int count = 0;
	test(10);
	 cout << endl << count;
	return 0;//chua bi tran
}
