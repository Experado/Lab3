#include <algorithm>
#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ifstream fin("file.in",ios::in);
	if(!fin)	{	cout<<"File Open Failed!!"<<endl;	exit(1);	}

	int sum=0;
	int kinds;

	fin>>kinds;

	vector<int>vec(kinds);

	for (int i=0;i<kinds;i++)
	{
		fin>>vec[i];
	}

	sort(vec.begin(),vec.end());

	for (int i=0;i<5;i++)

	{
		sum=sum+vec.at((kinds-i-1));
	}
	return 0;
}
