# 模型文件
github放大文件不方便，网络文件和模型文件都放baidu云盘了，自行下载。   
[链接](https://pan.baidu.com/s/1nRkQC-CnCWdfV-S_mJcrGA)   
提取码：4nvh 

# 测试
main函数在demo.cpp中

# vs环境
- [VC++目录][可执行文件目录]
```
C:\Users\xinwen\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\bin
```
- [VC++目录][库目录]
```
C:\Users\xinwen\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib
```
- [c/c++][常规][附加包含目录]
```
D:\Program Files\caffe\scripts\build\include
D:\Program Files\caffe\scripts\build
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\include\boost-1_61
C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v8.0\include
D:\Program Files\caffe\include
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\include
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\include\opencv
```
- [c/c++][常规][警告等级]
```
等级 (/W3)
```
- [c/c++][常规][将警告视为错误]
```
否 (/WX-)
```
-  [c/c++][常规][预处理器]
```
WIN32
_WINDOWS
NDEBUG
CAFFE_VERSION=1.0.0
BOOST_ALL_NO_LIB
USE_LMDB
USE_LEVELDB
USE_CUDNN
USE_OPENCV
CMAKE_WINDOWS_BUILD
GLOG_NO_ABBREVIATED_SEVERITIES
GOOGLE_GLOG_DLL_DECL=__declspec(dllimport)
GOOGLE_GLOG_DLL_DECL_FOR_UNITTESTS=__declspec(dllimport)
H5_BUILT_AS_DYNAMIC_LIB=1
CMAKE_INTDIR="Release"
```
- [链接器][常规][附加库目录]
```
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib
```
- [链接器][输入][附加依赖项]
```
D:\Program Files\caffe\scripts\build\lib\Release\caffe.lib
D:\Program Files\caffe\scripts\build\lib\Release\caffeproto.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\boost_system-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\boost_thread-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\boost_filesystem-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\boost_chrono-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\boost_date_time-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\boost_atomic-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\glog.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\Lib\gflags.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\libprotobuf.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\caffehdf5_hl.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\caffehdf5.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\cmake\..\lib\caffezlib.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\lmdb.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\leveldb.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\cmake\..\lib\boost_date_time-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\cmake\..\lib\boost_filesystem-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\cmake\..\lib\boost_system-vc140-mt-1_61.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\snappy_static.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\caffezlib.lib
C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v8.0\lib\x64\cudart.lib
C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v8.0\lib\x64\curand.lib
C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v8.0\lib\x64\cublas.lib
C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v8.0\lib\x64\cublas_device.lib
C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v8.0\lib\x64\cudnn.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\x64\vc14\lib\opencv_highgui310.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\x64\vc14\lib\opencv_imgcodecs310.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\x64\vc14\lib\opencv_imgproc310.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\x64\vc14\lib\opencv_core310.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\libopenblas.dll.a
C:\Miniconda\envs\py35\libs\python35.lib
C:\Users\xinwe\.caffe\dependencies\libraries_v140_x64_py35_1.1.0\libraries\lib\boost_python-vc140-mt-1_61.lib
shlwapi.lib
ntdll.lib
```

# vs环境与CUDA相关部分
- 使用cuda编译
项目右键->生成依赖项->生成自定义
勾选CUDA 8.0(.targets, .props)
- 对所有cu文件
文件右键->属性
常规->项类型->CUDA C/C++