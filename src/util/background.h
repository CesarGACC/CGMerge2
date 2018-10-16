#pragma once

#include <iostream>
#include <DevIL Windows SDK/include/IL/il.h>


#include "src/core/color/Color.h"

bool loadImage(const char *filename, Color * & buffer);
int getImageWidth();
int getImageHeight();
