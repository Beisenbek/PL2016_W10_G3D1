#include <iostream>

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

	point arr[n];

	for(int i =0 ; i < n; ++i){
		cin >>  arr[i].x >> arr[i].y;
	}

	for(int i =0 ; i < n; ++i){
		sx += arr[i].x;
		sy += arr[i].y;
	}

	cout << sx/n << " " << sy/n;

	return 0;
}