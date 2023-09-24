#include <iostream>

using namespace std;

class BrazoRobotico{
	private:
		double coorx;
		double coory;
		double coorz;
		bool sujeta;

	public:
		BrazoRobotico(double x, double y, double z, bool sujeta_);
		double damex();
		double damey();
		double damez();
		void soltar();
		bool damesujeta();
		void coger();
		void mover(double , double , double );
	
};	
