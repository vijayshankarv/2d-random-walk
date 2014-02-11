#include "walker.h"
#include "random.h"
#include <cmath>

walker::walker(){
	x = 0.0 ;
	y = 0.0;
}

void walker::startWalk(){

x =0; y=0;

}

void walker::coverTexas(int rngChoice){
	
	if (rngChoice == 0){
		B_ENG eng;
		U_DIST dist;
		B_U_GEN gen(eng, dist);
	}
	else if (rngChoice == 1){
		ENG eng;
		U_DIST dist;
		U_GEN genx(eng, dist);
		U_GEN geny(eng, dist);
		genx.seed(std::time(0));
		geny.seed(std::time(0));
	}
	else {
		std::cout<<"Invalid random number choice "<<endl;
	 std::cout<<"Exiting program" <<endl;
	 exit(1);
	}

	while((x**2 + y**2) < range){
		
		if(genx()<= 0.5)
			x -=0.1;
		}
		else{
			x +=0.1;
		}
		if(geny()<= 0.5)
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