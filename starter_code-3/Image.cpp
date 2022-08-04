#include <exception>
#include <stdexcept>
#include "Image.h"


template<class T>
Image<T>::Image( int nRows, int nCols ){
    T p;
    std::vector<T> pix( nCols, p );
    for( int i = 0; i < nRows; i++ ){
       img.push_back( pix );
    }
}

template<class T>
T Image<T>::get( int row, int col ){
    return img[ row ][ col ];
}

template<class T>
void Image<T>::set( int row, int col, const T &pix ){
    img[ row ][ col ] = pix;
}

template<class T>
Image<T>::~Image( ){
    img.clear( );
}

