import ctypes
import os
lib=ctypes.CDLL("./add.so", mode = ctypes.RTLD_GLOBAL)
print(lib.add(1,2))
