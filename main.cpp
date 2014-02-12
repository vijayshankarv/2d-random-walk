#include <iostream>
#include <walker.h>
#include <fstream>


int main()
{
	walker cordell;
	const int numWalks = 10000;
	double angle;
	std::ofstream dataFile("angle.dat");
	//These are from random.h
	U_DIST dist;
	//LCG is used
	B_ENG eng1;
	B_U_GEN gen(eng1, dist);
	//Mersenne Twister
	//ENG eng2;
	//gen(eng2, dist);
	
	for (int i = 0; i < numWalks; ++i)
	{
        cordell.startWalk();
        //Function is overloaded to accept both LCG and MT
		cordell.coverTexas(gen); 
		angle = cordell.getAngle();
		dataFile<<angle<<std::endl;
	}
	dataFile.close();
	return 0;
}