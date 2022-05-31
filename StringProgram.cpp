#include<iostream>
#include<string>
using namespace std;
int main()
{
	//Mayank
	string str;
    //cin>>str;
    getline(cin,str);
    cout<<str.length();
	for(int i=0;str[i]!='\0'&&i<str.length();i=i+2)
	{
		
		cout<<str[i];
		
	}
	return 0;
}
