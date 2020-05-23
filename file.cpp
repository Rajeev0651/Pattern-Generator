#include<iostream>
#include<fstream>
using namespace std;
int x[10000000],y[10000000];
int main()
{
	int a=1,b=1;
	int word;
	fstream file;
	file.open("data.txt");
	while(file >> word)
	{
		x[a++] = word;
		file>>word;
		y[b++] = word;
	}
	int p=1,q=1,left=1,right=1,flag=1;
	int k=1;
	while(p<a)
	{
		left = x[p++];
		right = y[q++];
		if(flag==1)
		{
			for(int i=1; i<right; i++)
			{
				cout<<"   ";
			}	
		}
		else
		{
			for(int i=y[q-2]; i<right; i++)
				cout<<"   ";
			flag=0;	
		}
		cout<<"X";
		k = x[p];
		if(k>left)
		{
			cout<<"\n";
			flag=1;
		}
		else flag=0;	
	}
	return 0;
}
