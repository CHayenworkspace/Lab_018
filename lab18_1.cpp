#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R,Rect T){

 	double tsx[] = {T.x+T.w,T.x+T.h,T.x+T.w,T.x+T.h};
    double rsx[] = {R.x,R.x+R.w,R.x,R.x+R.w};
    double tsy[] = {T.y-T.w,T.y-T.h,T.y-T.w,T.y-T.h};
    double rsy[] = {R.y-R.w,R.y-R.h,R.y-R.w,R.y-R.w};
    if (tsy[1]/tsy[1]==-1||rsy[1]/rsy[1]==-1){
    int x = tsy[1]-rsy[1] ;}
}