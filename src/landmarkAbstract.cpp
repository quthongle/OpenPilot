/**
 * landmarkAbstract.cpp
 *
 * \date 10/03/2010
 * \author jsola@laas.fr
 *
 *  \file landmarkAbstract.cpp
 *
 *  ## Add a description here ##
 *
 * \ingroup rtslam
 */

#include "rtslam/landmarkAbstract.hpp"
#include "rtslam/observationAbstract.hpp"
#include "rtslam/mapAbstract.hpp"

namespace jafar {
	namespace rtslam {
		using namespace std;

		IdFactory LandmarkAbstract::landmarkIds = IdFactory();

		/*
		 * constructor.
		 */
		LandmarkAbstract::LandmarkAbstract(const map_ptr_t & _mapPtr, const size_t _size) :
			MapObject(_mapPtr, _size)
		{
			categoryName("LANDMARK");
		}

		LandmarkAbstract::LandmarkAbstract(const simulation_t dummy, const map_ptr_t & _mapPtr, const size_t _size) :
			MapObject(_mapPtr, _size, UNFILTERED)
		{
			categoryName("SIMU LANDMARK");
		}

		void LandmarkAbstract::reparametrize() {
			//TODO Implement reparametrize():
			// - create a new STD landmark.
			// - create its set of observations, one per sensor.
			// - Link the landmark to map and observations.
			// - Link the sensors to the new observations.
			// - call reparametrize_func()
			// - compute the new ind_array as a sub-set of the old one
			// - call filter->reparametrize()
			// - transfer info from the old lmk to the new one
			// - transfer info from old obs to new obs.
			// - delete old lmk <-- this may delete all old obs! If not:
			// - delete old obs
		}

	}
}
