import ctypes
so = ctypes.cdll.LoadLibrary 
lib = so("./libpycall.so") 



# print('display()')
# lib.display()
# print('display(100)')
# lib.display_int(100)
print(lib.sum(1,2))
print(lib.sub(2,1))