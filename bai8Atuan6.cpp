#include <iostream>
#include <cmath>
using namespace std;
void tohop(int i,int m,int n,int a[100])
{
	int k;
	for(int k = a[i-1]+1;k<=n;k++) {
	a[i] = k;
	if(i==m) {
		int temp;
		cout<<"{";
		for(int temp=1;temp<=m;temp++)
		{
			cout<<a[temp]<<" ";
		}
		cout<<"}" << endl;
	}
	else tohop(i+1,m,n,a);
	}
}
int main() {
	int n, a[100];
	cin>>n;
	a[0] = 0;
	int i;
	for(int i=1;i<=n;i++)
	{
		cout<<"tap con co "<<i<<" phan tu la: " << endl;
		tohop(1,i,n,a);
		cout<<"\n";
	}
	return 0;
}
