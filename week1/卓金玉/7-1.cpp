#include<iostream>
using namespace std;
int main()
{
	//�������� 
	int n;
	string s;
	scanf("%d",&n);
	cin>>s;
	 
	for(int i=0;i<n;++i)		 
	{
		string shortString;		//�����string 
		int cnt=0;				//�������� 
		cin>>shortString;		//�����string 
		int a=s.length()-shortString.length()+1;
		for(int j=0;j<a;++j)
		{
			string cutString = s.substr(j,shortString.length());
			if(!shortString.compare(cutString))
			{
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
} 

