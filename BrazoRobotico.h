#include <iostream>

using namespace std;

class BrazoRobotico{
	private:
		double coorx;
		double coory;
		double coorz;
		bool sujeta;

	public:
		BrazoRobotico(double coorx, double coory, double coorz, bool sujeta){
		this->coorx = coorx;
		this->coory = coory;
		this->coorz = coorz;
		this->sujeta = sujeta;
		}
		double damex();
		double damey();
		double damez();
		double damesujeta();
		void coger();
}
