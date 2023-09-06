交叉编译后，总是出问题
修改源代码，找到 ssh位置
使用patchelf 添加 rpath 
相对于LD_PRELOAD 来说，更精确些，不依赖环境变量