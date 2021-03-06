#ifndef TRIPLET_H
#define TRIPLET_H

#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <limits.h>
#include <ft2build.h>
#include <gsl/gsl_poly.h>
#include "core/core.hpp"

#include "letter.h"
#include "FT.h"

class Triplet {

 public:
  Triplet(Letter* lLetter, Letter* cLetter, Letter* rLetter, FTengine* FTE);
  void findTripletFeatures(vector<vector<int>> *matrix, int combno);
  void fillTripletForceMatrix(vector<vector<int>> *matrix, int combno);
  void fillTripletYWeightMatrix(vector<vector<int>> *matrix, int combno);

 private:
  Letter* lL;
  Letter* cL;
  Letter* rL;

  int lWidth;
  int cWidth;
  int rWidth;

  int lSpacing; 
  int rSpacing; 
};

#endif
