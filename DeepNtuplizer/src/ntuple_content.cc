/*
 * ntuple_content.cc
 *
 *  Created on: 13 Feb 2017
 *      Author: jkiesele
 */


#include <stdexcept>
#include "../interface/ntuple_content.h"

ntuple_content::~ntuple_content(){


}


const reco::VertexCollection * ntuple_content::vertices()const{
	if(vertices_)
		return vertices_;
	throw std::runtime_error("ntuple_content: vertices not assigned");
}
