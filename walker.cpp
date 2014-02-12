#include "walker.h"
#include <cmath>
#include <ctime>

walker::walker(){
	x = 0.0 ;
	y = 0.0;
	range = 4.0;
}

void walker::startWalk(){

x =0; y=0;

}

walker::~walker(){
	
};

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

double walker::getAngle(){

 return atan2(y, x);
}