#include<iostream>
#include<cstdio>
#include<string>
#include<set>
#include<cstring>
#include<cmath>
#include<algorithm> 
#include<sstream>
using namespace std;

int main(){
	string s;
	cin>>s;
	if(s[0]>='a'&&s[0]<='z') s[0]+=('A'-'a');
	cout<<s;
}