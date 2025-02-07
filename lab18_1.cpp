#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(){

 	int tx[] = {T.x,T.x+T.w,T.x,T.x+T.w};
    int Rx[] = {R.x,R.x+R.w,R.x,R.x+R.w};
    int ty[] = {T.y,T.y-T.h,T.y,T.y-T.w};
    int Ry[] = {R.y,R.y-R.h,R.y,R.y-R.w};

}

int main{

	Rect R1 = {1,1,5,5};
	Rect R2 = {2,2,5,5};	
	cout << overlap(R1,R2);	
}