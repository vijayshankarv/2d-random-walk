#ifndef RANDOM
#define RANDOM
#include <boost/random/linear_congruential.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <boost/random/uniform_01.hpp>

//BAD LCG: a= 106, c = 1283, m =6075
typedef boost::random::linear_congruential<int, 106, 1283, 6075> B_ENG;
typedef boost::mt19937 ENG; //Mersenne Twister

typedef boost::uniform_01<double> U_DIST; //Uniform distributio from 0 to 1

//Random number generators
typedef boost::variate_generator<ENG, U_DIST> U_GEN;
typedef boost::variate_generator<B_ENG, U_DIST>B_U_GEN;

#endif