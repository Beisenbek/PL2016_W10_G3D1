#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

double s(double x){
	return x * x;
}

struct point{
	int x;
	int y;
	double d;
	double dist(point p){
		return sqrt(s(p.x - x) + s(p.y-y));
	}
	void evaluateDistToOrigin(){
		d = sqrt(s(x) + s(y));
	}
};

bool f(point l, point r){
	if(l.d > r.d) return false;
	return true;
}

int main(){

	int n;
	cin >> n;
	
	vector<point> arr;

	for(int i =0 ; i < n; ++i){
		point p;
		cin >>  p.x >> p.y;
		p.evaluateDistToOrigin();
		arr.push_back(p);
	}

	sort(arr.begin(),arr.end(),f);

	for(int i = 0 ; i < n; ++i){
		cout <<  arr[i].x << " " <<  arr[i].y << endl;
	}

	return 0;
}