#include <iostream>
#include <walker.h>
#include <fstream>


int main()
{
	//Create a walker object
	walker cordell(2.0);
	const int numWalks = 10000;
	double angle;
	//File for writing the angles
	std::ofstream dataFile("angle.dat");
	//These are from random.h
	U_DIST dist;
	//LCG is used
	B_ENG eng1;
	B_U_GEN gen(eng1, dist);
	//Mersenne Twister
	//ENG eng2;
	//U_GEN gen(eng2, dist);
	
	for (int i = 0; i < numWalks; ++i)
	{
		//Push walker back to origin
        cordell.startWalk();
        //Function is overloaded to accept both LCG and MT
		cordell.coverTexas(gen); 
		//Get the angle and write to file
		angle = cordell.getAngle();
		dataFile<<angle<<std::endl;
	}
	//Close file
	dataFile.close();
	return 0;
}