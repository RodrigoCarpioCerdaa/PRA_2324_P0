#include <iostream>
#include "BrazoRobotico.h"	

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujeta_) {
	double coorx = x;
	double coory = y;
	double coorz = z; 
	bool sujeta = sujeta_;
}
double damex(){
	return coorx;
}
double damey(){
	return coory;
}
double damez(){
	return coorz;
}
bool  samesujeta(){
	return sujeta;
}
void coger(){
	sujeta = true;
}
void soltar(){
	sujeta = false;
}
void mover(int X, int Y, int Z){
	coorx = X;
       	coory = Y; 
	coorz = Z;
}
