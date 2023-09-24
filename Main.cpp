#include <iostream>
#include "BrazoRobotico.h"

using namespace std;

int main(){
double X; 
double Y; 
double Z; 
bool suje=false;

cout << "dame las coordenadas iniciales del robot en formato X, Y, Z: " << endl;

cin >> X ;
cin >> Y ;
cin >> Z ;


BrazoRobotico B1(X, Y, Z, suje);


cout << "el robot esta en la posicion: " << B1.damex() << " " << B1.damey() << " " << B1.damez() << endl;
cout << "vamos a mover el robot a la posición que quieras. Dime donde quieres moverlo: "<< endl;
cin >> X ;
cin>> Y ;
cin>> Z;
B1.mover(X, Y, Z);
cout << "el robot esta en la posicion: " << B1.damex() << " " << B1.damey() << " " << B1.damez() << endl;
cout << "ahora vamos a coger un objeto" << endl;
B1.coger();
if (B1.damesujeta() == true){
	cout << "el robot ha cogido el objeto con éxito" << endl;
}
else{
	cout << "el robot no ha cogido el objeto" << endl;
}
return 0;
}
