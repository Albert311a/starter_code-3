#include "GreyscalePixel.h"
#include <exception>
#include <stdexcept>


unsigned int & GreyscalePixel::operator[]( const char channel ){
    return intensity;
}

unsigned int GreyscalePixel::getBrightness( ) const {
    return intensity;
}
