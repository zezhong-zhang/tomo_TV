CXX = g++ -fPIC -fopenmp
MPXX = mpicxx -fPIC -fopenmp
CUDAXX = nvcc -allow-unsupported-compiler -shared -Xcompiler -fPIC -c
CXXFLAGS = -O3 -Wno-div-by-zero -shared -std=c++11 `python3 -m pybind11 --includes`
EIGEN = -I ../../thirdparty/eigen 
ASTRA = -DASTRA_CUDA -I ../../thirdparty/astra-toolbox -I ../../thirdparty/astra-toolbox/include
ASTRA_LIB = -L /home/zzhang/OneDrive/code/tomo_TV/thirdparty/astra/lib/ -lastra
CUDA = -I /opt/cuda/include -L /opt/cuda/lib64 -lcudart -lz
HDF5_INC = -I /usr/include
HDF5_LIBS= -L /usr/lib -lhdf5 -lhdf5_hl
