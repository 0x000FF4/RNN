/*
 * BasicGene.cpp
 *
 *  Created on: 16.03.2015 г.
 *      Author: x000ff4
 */

#include "BasicGene.h"

namespace std {

void BasicGene::randomMutation(){
	for(int i = 0 ; i < dna.size();i++){
		if(0 == rand()/frequency){
			dna.at(i) =rand() % 256;
		}
	}
}
BasicGene::BasicGene() {
	srand(time(0));

	frequency = 100;
}

BasicGene::~BasicGene() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
