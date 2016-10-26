#include <iostream>
#include <vector>
#include <cmath>

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

	for(int i = 0 ; i < arr.size() - 1; ++i){
		for(int j = i + 1; j < arr.size(); ++j){
			if(arr[i].d > arr[j].d){
				swap(arr[i],arr[j]);
			}
		}
	}

	for(int i = 0 ; i < n; ++i){
		cout <<  arr[i].x << " " <<  arr[i].y << endl;
	}

	return 0;
}



