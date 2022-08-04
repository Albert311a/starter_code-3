#include <exception>
#include <stdexcept>
#include "RGBPixel.h"


unsigned int& RGBPixel::operator[]( const char channel ) {
    switch( channel ){
        case 'r':
            return r;
        case 'g':
            return g;
    }
    return b;
}

unsigned int RGBPixel::getBrightness( ) const{
    unsigned int brt = ( r + g + b ) / 3;
    return brt;
}
