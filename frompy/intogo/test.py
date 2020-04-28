from ctypes import cdll
lib = cdll.LoadLibrary('./sum.so')
print(lib.Sum(1, 2))
