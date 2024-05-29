CUDAXX = nvcc -allow-unsupported-compiler -shared -Xcompiler -fPIC -c 
CXXFLAGS = -O3 -Wno-div-by-zero -std=c++17 -I ../../../thirdparty/astra
