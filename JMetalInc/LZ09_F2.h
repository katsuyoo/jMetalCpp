//  LZ09_F2.h
//
//  Author:
//       Antonio J. Nebro <antonio@lcc.uma.es>
//
//  Copyright (c) 2011 Antonio J. Nebro, Juan J. Durillo
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU Lesser General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU Lesser General Public License for more details.
//
//  You should have received a copy of the GNU Lesser General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef __LZ09_F2_H__
#define __LZ09_F2_H__

#include <math.h>
#include <string>
#include <JMetalInc/Problem.h>
#include <JMetalInc/BinaryRealSolutionType.h>
#include <JMetalInc/RealSolutionType.h>
#include <JMetalInc/ArrayRealSolutionType.h>
#include <JMetalInc/XReal.h>
#include <JMetalInc/Solution.h>
#include <JMetalInc/LZ09.h>

class LZ09_F2 : public Problem {
public:
	LZ09_F2(string solutionType, int ptype=21, int dtype=1, int ltype=22);
	void evaluate(Solution *solution);

	virtual ~LZ09_F2();
private:
	LZ09 * LZ09_ ;
	double * fx_ ;
  double * x_  ;
};

#endif /* __LZ09_F2_H__ */
