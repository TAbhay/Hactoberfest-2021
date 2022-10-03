#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string s1 = "fam";
	string s2 = "ily";
	string s3 = "", s4 = "nincompoop";
	string s5 = "786"; int s6 = 786;
	
	s1.append(s2);  //s1+s2
	s2.clear();
	s1.compare(s2);
	s1.size(); //length()
	 
	cout<<s1<<endl;
	cout<<s2<<endl;
	
	if(s3.empty())
	cout<<"s3 is empty"<<endl;
	
	s1.erase(1,3);
	cout<<s1<<endl;
	cout<<s4.find("com")<<endl;
	
	s4.insert(2, "lol");
	cout<<s4<<endl;
	
	cout<<s4.substr(6, 4);
	
	int x = stoi(s5);  //converts numeric string to integer
	cout<<x+2<<endl;
	
	cout<<to_string(x) + "2"<<endl;
	
	sort(s4.begin(), s4.end());
	cout<<s4<<endl;
	
	return 0;
}
