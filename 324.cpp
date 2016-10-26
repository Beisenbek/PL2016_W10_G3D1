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
	
};

int main(){

	int n;
	cin >> n;
	
	double d = 0;

	vector<point> arr;

	for(int i =0 ; i < n; ++i){
		point p;
		cin >>  p.x >> p.y;
		arr.push_back(p);
	}

	for(int i = 0 ; i < arr.size() - 1; ++i){
		point p1 = arr[i];
		for(int j = i + 1; j < arr.size(); ++j){
			point p2 = arr[j];
			double t = sqrt(s(p1.x-p2.x)+s(p1.y-p2.y));
			if(t > d){
				d = t;
			}
		}
	}

	printf("%.15f\n",d);

	return 0;
}