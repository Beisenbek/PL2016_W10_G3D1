#include <iostream>
#include <vector>

using namespace std;

struct point{
	int x;
	int y;
};

int main(){

	int n;
	cin >> n;
	
	double sx = 0;
	double sy = 0;

	vector<point> arr;

	for(int i =0 ; i < n; ++i){
		point p;
		cin >>  p.x >> p.y;
		arr.push_back(p);
	}

	for(int i =0 ; i < arr.size(); ++i){
		sx += arr[i].x;
		sy += arr[i].y;
	}

	cout << sx/n << " " << sy/n;

	return 0;
}