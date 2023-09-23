#include <iostream.h>

using namespace std;

class BrazoRobotico{
	private:
		double coorx;
		double coory;
		double coorz;
		double sujeta;

	public:
		BrazoRobotico(double coorx, double coory, double coorz, bool sujeta){
		this->coorx = coorx;
		this->coory = coory;
		this->coorz = coorz;
		this->sujeta = sujeta;
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
		double damesujeta(){
			return sujeta;
		}
		void coger(){
			this->sujeta = true;
		}
		voidsoltar(){
			this->sujera = false;
		}
		void mover(double x, double y, double z){
			coorx = x;
			coory = y;
			coorz = z;
		}
}
