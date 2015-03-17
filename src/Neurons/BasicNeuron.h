/*
 * BasicNeuron.h
 *
 *  Created on: 17.03.2015 г.
 *      Author: x000ff4
 */

#ifndef NEURONS_BASICNEURON_H_
#define NEURONS_BASICNEURON_H_

#include <vector>
namespace std {
	vector<float> weights;
class BasicNeuron {

public:
	BasicNeuron();
	virtual ~BasicNeuron();
};

} /* namespace std */

#endif /* NEURONS_BASICNEURON_H_ */
