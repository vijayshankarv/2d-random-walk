//Include the typedefs for the boost random number library
#include "random.h"

// Defines the walker class
class walker{
	private: 
		double x, y;
		double range;
		double angle;
	public:
		walker(double range);
		walker(double, double);
 		~walker(); 		
		void coverTexas(B_U_GEN &gen);
		void coverTexas(U_GEN &gen);
		void startWalk();
		double getAngle();

};

