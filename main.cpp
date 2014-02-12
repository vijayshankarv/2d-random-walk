#include <iostream>
#include <walker.h>
#include <fstream>


int main()
{
	walker cordell;
	const int numWalks = 10000;
	double angle;
	std::ofstream dataFile("angle.dat");
	//Choice of random number generator default choice(0) is LCG
	
	U_DIST dist;
	B_ENG eng1;
	B_U_GEN gen(eng1, dist);
	
	//ENG eng2;
	//gen(eng2, dist);
	
	for (int i = 0; i < numWalks; ++i)
	{
        cordell.startWalk();
		cordell.coverTexas(gen); //Function is overloaded
		angle = cordell.getAngle();
		dataFile<<angle<<std::endl;
	}
	dataFile.close();
	return 0;
}