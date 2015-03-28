// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#ifndef _INCLUDE_SWAP_HPP
#define _INCLUDE_SWAP_HPP

template<typename T>
void swap (T *source, int i, int j)
{
  T tmp;

  tmp = source[i];
  source[i] = source[j];
  source[j] = tmp;
}

#endif
