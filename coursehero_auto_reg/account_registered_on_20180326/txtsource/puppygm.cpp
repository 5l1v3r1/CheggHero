#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t,a,b;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a%2==0 or b%2==0)
		cout<<"Tuzik"<<endl;
		else
		cout<<"Vanka"<<endl;
	}
	return 0;
}
