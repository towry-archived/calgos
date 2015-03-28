// Copyright 2015 Towry Wang (http://towry.me)
// MIT Licensed

#ifndef _INCLUDE_WALLTIME_HPP
#define _INCLUDE_WALLTIME_HPP

#include <iostream>
#include <chrono>

namespace walltime {
  static std::chrono::time_point<std::chrono::system_clock> _start, _end;

  inline void start () {
    _start = std::chrono::system_clock::now();
  }

  inline void end () {
    _end = std::chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = _end - _start;
    std::cout << "elapsed time: " << std::chrono::duration_cast<std::chrono::milliseconds>(elapsed_seconds).count() << "ms\n";
  }
}

#endif
