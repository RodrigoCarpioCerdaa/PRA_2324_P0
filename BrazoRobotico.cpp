#include <iostream>
#include "BrazoRobotico.h"	

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujeta_) {
	double coorx = x;
	double coory = y;
	double coorz = z; 
	bool sujeta = sujeta_;
}
double BrazoRobotico::damex(){
	return coorx;
}
double BrazoRobotico::damey(){
	return coory;
}
double BrazoRobotico::damez(){
	return coorz;
}

	return sujeta;
}
void BrazoRobotico::coger(){
	sujeta = true;
}
void BrazoRobotico::soltar(){
	sujeta = false;
}
void BrazoRobotico::mover(int X, int Y, int Z){
	coorx = X;
       	coory = Y; 
	coorz = Z;
}
