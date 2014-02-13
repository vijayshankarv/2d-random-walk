#include "walker.h"
#include <cmath>
#include <ctime>

//Default constructor
walker::walker(double radius){
	x = 0.0 ;
	y = 0.0;
	//Range = square of the radius of the circle which is 2.
	range = radius*radius;
}

//Push walker back to origin
void walker::startWalk(){

x =0; y=0;

}

//Default destructor
walker::~walker(){
	
};

//Overloaded function - this one accepts MT based random number generator
void walker::coverTexas(U_GEN &gen){
 
while((x*x + y*y) < range){

  double temp = gen();

	if( temp <= 0.5){
		x -=0.1;
	}
	else{
		x +=0.1;
	}

	temp = gen();

	if(temp <= 0.5){
		y -= 0.1;
	}
	else{
		y += 0.1;
	}
  }
		
}
//Accepts LCG based random number generator
void walker::coverTexas(B_U_GEN &gen){
 
while((x*x + y*y) < range){

  double temp = gen();
	if( temp <= 0.5){
		x -=0.1;
	}
	else{
		x +=0.1;
	}

	temp = gen();

	if(temp <= 0.5){
		y -= 0.1;
	}
	else{
		y += 0.1;
	}
  }
		
}

//Returns the angle - between -pi and pi
double walker::getAngle(){

 return atan2(y, x);
}