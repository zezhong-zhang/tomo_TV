#Makefile
#!/bin/sh
include ./make.inc

GPUCONFIG = astra_ctvlib`python3-config --extension-suffix`
MMGPUCONFIG = mm_astra`python3-config --extension-suffix`
MPIGPUCONFIG = mpi_astra_ctvlib`python3-config --extension-suffix`
MMTVCONFIG = MM_tv`python3-config --extension-suffix`

all: shared_library mm_astra 

shared_library:
	cd container; make; cd ..
	cd regularizers; make; cd ..
	nvcc -allow-unsupported-compiler -shared container/*.o regularizers/*.o -o aux_func.so

mm_astra: mm_astra.cpp mm_astra.hpp
	$(CXX) $(CXXFLAGS) $(EIGEN) $(ASTRA) $(CUDA) $(NonPAR_HDF5_INC) mm_astra.cpp -o $(MMGPUCONFIG) $(ASTRA_LIB) /home/zzhang/OneDrive/code/tomo_TV/fused_multi_modal/Utils/aux_func.so

clean:
	rm -rf *.so *.o


