/*
 * BasicGene.h
 *
 *  Created on: 16.03.2015 г.
 *      Author: x000ff4
 */

#ifndef POPULATIONS_BASICGENE_H_
#define POPULATIONS_BASICGENE_H_

#include <vector>
#include<cstdlib>
#include<ctime>
namespace std {

class BasicGene {
	int
	frequency;
	vector<char> dna;
public:
	void randomMutation();
	BasicGene();
	virtual ~BasicGene();
};

} /* namespace std */

#endif /* POPULATIONS_BASICGENE_H_ */
