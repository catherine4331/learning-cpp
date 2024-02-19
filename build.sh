# At some point I will set up something like CMake but right now, this will do

g++-13.2.0 -std=c++2b -fmodules-ts -c -x c++ employee.cppm

g++-13.2.0 -std=c++2b -fmodules-ts -Wall -o app main.cpp