/*
 * aircraft.hpp
 *
 *  Created on: 04/09/2014
 *      Author: rhermoso
 */

//-----------------------------------------------------------------------------
#ifndef SYSTEM_HPP_
#define SYSTEM_HPP_
//-----------------------------------------------------------------------------
#include "uav_defs.hpp"
//-----------------------------------------------------------------------------

namespace nsUav
{
	//-------------------------------------------------------------------------

	class TSystem
	{
	private:
	protected:
	public:
		TSystem() {}
		virtual ~TSystem() {}

		virtual void configure(char* cParam) = 0;
	};
	//-------------------------------------------------------------------------
}
//-----------------------------------------------------------------------------
#endif /* SYSTEM_HPP_ */
//-----------------------------------------------------------------------------