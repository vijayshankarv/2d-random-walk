#include <iostream>
#include <walker.h>

int main()
{
	walker cordell;
	const int numWalks = 10000;
	double angle;
	//Choice of random number generator default choice(0) is LCG
	int rngChoice =0; 
	std::ofstream dataFile("angle.dat");

	for (int i = 0; i < numWalks; ++i)
	{
        walker.initialize();
		walker.coverTexas(rngChoice);
		angle = walker.getAngle();
		dataFile<<angle<<endl;
	}
	dataFile.close();
	return 0;
}