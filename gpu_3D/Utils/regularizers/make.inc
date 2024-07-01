CXX = g++ -fPIC -shared 
MPXX = mpicxx -fPIC -fopenmp
CUDAXX = nvcc -allow-unsupported-compiler -shared -Xcompiler -fPIC -c
CXXFLAGS = -O3 -Wno-div-by-zero -std=c++11 -I ../../../thirdparty/eigen3
