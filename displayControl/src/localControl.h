//
//  localControl.h
//  displayWrapper
//
//  Created by Christian Vessaz on 08.08.18.
//  Copyright © 2018 Christian Vessaz. All rights reserved.
//

#ifndef localControl_h
#define localControl_h

#ifdef RPI
#include "led-matrix.h"
using namespace rgb_matrix;
#else
#include "rgb_matrix.h"
#endif

void displayControl(RGBMatrix &canvas);

#endif /* localControl_h */
