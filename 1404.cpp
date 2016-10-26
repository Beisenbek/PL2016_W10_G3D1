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

int main(){

	int n;
	cin >> n;

	vector<student> v;
	vector<string> u_cls;

	for(int i = 0; i < n; ++i){
		student s;
		cin >> s.sname >> s.name >> s.cls >> s.birthday;
		v.push_back(s);

		bool found = false;
		for(int j = 0; j < u_cls.size(); ++j){
			if(u_cls[j] == s.cls){
				found = true;
			}
		}
		if(!found){
			u_cls.push_back(s.cls);
		}
	}

	for(int j = 0; j < u_cls.size(); ++j){
			cout << u_cls[j] << endl;
	}

	return 0;
}