#pragma once

#include <darknet.h>

extern image new_darknet_image();
extern image prepare_image(image img, int w, int h, int c);
extern image new_image(int w, int h, int c);