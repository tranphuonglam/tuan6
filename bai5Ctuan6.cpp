#include <iostream>
#include <cmath>

using namespace std;
void array(int j,int a[100])
{
	for(int i=1;i<=j;i++) {
	cout<<a[i]<<" ";
}
//cout << endl;
}
void partition(int n,int a[100],int b[100],int i)
{
	int j;
	for(int j=a[i-1];j<=(n-b[i-1]);j++)
	{
		a[i] = j;
		b[i] = b[i-1]+j;
		if(b[i]==n) {
		array(i,a);
		cout<<endl;
		}
		else  {
		partition(n,a,b,i+1); }
	}
}

int main() {
	int n;
	cin >> n;
	int a[100];
	int b[100];
	//for(int i=0;i<n;i++) {
//		cout << a[i] << " " << endl;
	//}
	a[0] = 1;
    b[0] = 0;
    partition(n,a,b,1);
	return 0;
}
