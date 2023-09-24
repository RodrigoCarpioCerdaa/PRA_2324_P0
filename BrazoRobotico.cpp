#include <iostream>
#include "BrazoRobotico.h"	

BrazoRobotico::BrazoRobotico(double x, double y, double z, bool sujeta_) {
	this-> coorx = x;
	this->coory = y;
	this->coorz = z; 
	this->sujeta = sujeta_;
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
bool BrazoRobotico::damesujeta(){
	return sujeta;
}
void BrazoRobotico::coger(){
	sujeta = true;
}
void BrazoRobotico::soltar(){
	sujeta = false;
}
void BrazoRobotico::mover(double X, double Y, double Z){
	coorx = X;
       	coory = Y; 
	coorz = Z;
}
