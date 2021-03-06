/**
  Copyright (c) 2012-2015 "Bordeaux INP, Bertrand LE GAL"
  [http://legal.vvv.enseirb-matmeca.fr]

  This file is part of LDPC_C_Simulator.

  LDPC_C_Simulator is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CLASS_CFastFixConversion
#define CLASS_CFastFixConversion

#include <stdlib.h>
#include <stdio.h>
#include "CFixConversion.h"

class CFastFixConversion : public CFixConversion
{
    
protected:
//    int  _data;
//    double*  t_noise_data;      // taille (var)
//    int*  t_fpoint_data;   // taille (width)
    int FACTEUR_BETA;
    int vSAT_NEG_LLR;
    int vSAT_POS_LLR;

public:
    
    CFastFixConversion(CTrame *t, int _FACTEUR_BETA, int _vSAT_NEG_LLR, int _vSAT_POS_LLR);
    ~CFastFixConversion();
    virtual void generate();
};

#endif

