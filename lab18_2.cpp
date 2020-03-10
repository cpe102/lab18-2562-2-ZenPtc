//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *,Rect *);

int main(){
	Rect A,B;
	
	cout << "Please input Rect 1 (x y w h): ";
	cin >> A.x >> A.y >> A.w >> A.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin >> B.x >> B.y >> B.w >> B.h;
	
	cout << "Overlap area = " << overlap(&A,&B);
	return 0;
}

double overlap(Rect *A,Rect *B){
	double maxX,minX,maxY,minY,width,lenght,overlapp;

	maxX = max(A->x,B->x);
	minX = min(A->x+A->w,B->x+B->w);
	if(maxX<0) maxX*=-1;
	if(minX<0) minX*=-1;
	width = minX-maxX;

	minY = min(A->y,B->y);
	maxY = max(A->y-A->h,B->y-B->h);
	if(maxY<0) maxY*=-1;
	if(minY<0) minY*=-1;
	lenght = minY+maxY;

	overlapp = width*lenght;
	if(overlapp<0) overlapp=0 ;

	return overlapp;
}