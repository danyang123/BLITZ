/*
* Copyright 2019 Wenbin Yang <bysin7@gmail.com>
* This file is part of BLITZ (Behavioral Learning In The Zebrafish),
* which is adapted from MindControl (Andrew Leifer et al <leifer@fas.harvard.edu>
* Leifer, A.M., Fang-Yen, C., Gershow, M., Alkema, M., and Samuel A. D.T.,
* 	"Optogenetic manipulation of neural activity with high spatial resolution in
*	freely moving Caenorhabditis elegans," Nature Methods, Submitted (2010).
*
* BLITZ is a free software: you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation, either version 3 of the license, or
* (at your option) any later version.
*
* Filename: errorHandling.h
* Abstract: this file contains all declarations of functions that
*			used handle devices errors
*
* Current Version: 2.0
* Author: Wenbin Yang <bysin7@gmail.com>

* Created on: Apr. 15, 2018
*/
#ifndef ERRORHANDLING_H_DEF
#define ERRORHANDLING_H_DEF

#include <iostream>


class errorHandling()
{

  // Properties


}
// Methods
void waitUserInput2exit();

/* catch NULL value with any datatype*/
template <typename T>
void tryCatchNull(T value, string exceptionString)
{
  if (value == NULL)
    throw exceptionString;
}

/* catch false value with any datatype*/
template <typename T>
void tryCatchFalse(T value, string exceptionString)
{
  if (value == false)
    throw exceptionString;
}

/* catch empty value with any datatype; add this method if needed*/





#endif // ERRORHANDLING_H_DEF