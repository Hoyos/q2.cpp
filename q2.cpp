#include <iostream>
#include <string>
using namespace std;

int upP (int n)
{
	int x;
	string letra = "T";
	for(x=0; x<n; x++)
	{
		cout<<letra<<endl;
		letra = letra + "T";
	}
}
int dowP (int n)
{
	char letra = 'T';
	while(n-1>=0)
	{
		cout<< string(n-1,'T')<<endl;
		n--;
	}
}


int main()
{
	int n;
	cout<<"Dame el numero de T´s"<<endl;
	cin>>n;
	upP(n);
	dowP(n);
}
