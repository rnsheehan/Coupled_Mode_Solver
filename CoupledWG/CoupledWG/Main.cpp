#ifndef ATTACH_H
#include "Attach.h"
#endif

// The aim of this project is to implement the calculations needed to examine the coupling between 2 non-identical optical WG
// The WG will have the same materials but will be topologically equivalent, i.e. they will be the same type of waveguide but the dimensions may change
// I'm going to base the calculations on the theory presented in Chuang, i'm going to assume what Chuang calls strong-coupling so that k_{ab} != k_{ba}
// I'm going to do the calculations using the effective index approximation
// Start with 2D waveguide descriptions
// Use EIM to reduce 2D WG to 1D slabs
// Perform coupling analysis on 1D slabs
// Coupling analysis will include computing overlap integrals and coupling coefficients based on semi-analytical slab solutions
// This should provide a reasonable approximation to the actual coupling that can exist between real 2D waveguides
// R. Sheehan 3 - 9 - 2020

int main()
{

	

	std::cout << "Press return to close\n";
	std::cin.get(); 
	return 0; 
}