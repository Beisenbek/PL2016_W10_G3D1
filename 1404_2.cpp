#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct student{
	string name;
	string sname;
	string cls;
	string birthday;
};

bool f(student l, student r){
	if(l.cls > r.cls) return false;
	if(l.cls == r.cls){
		if(l.sname > r.sname) return false;
	}

	return true;
}

int main(){

	int n;
	cin >> n;

	vector<student> v;

	for(int i = 0; i < n; ++i){
		student s;
		cin >> s.sname >> s.name >> s.cls >> s.birthday;
		v.push_back(s);
	}

	sort(v.begin(),v.end(),f);

	for(int i = 0; i < n; ++i){
		cout << v[i].cls << " " << v[i].sname << " " << v[i].name << " " << v[i].birthday << endl; 
	}

	return 0;
}