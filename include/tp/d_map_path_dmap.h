/**	@file d_map_path_dmap.h
 *	@brief Symbols of the d_map_path_dmap field
 *
 *	@author Zephiles
 *	@bug No known bugs.
 */

#pragma once

#include "../types.h"

namespace tp::d_map_path_dmap
{
    extern "C"
    {
        /**
         *	@brief Gets the current XYZ coordinates for Links current position
         *
         *	@param posOut The 3 floats which will hold the respective X, Y and Z
         *coordinate
         */
        void getMapPlayerPos(float posOut[3]);
    }
}  // namespace tp::d_map_path_dmap