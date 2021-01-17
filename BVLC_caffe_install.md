# 必备环境
- win10
- vs2015 update3
- cmake 3.19.2
- git
- miniconda
- cuda8.0
- cuDNNv7.1

本人编译使用的软件和其他相关的大文件放baidu云盘了，可供下载：   
[链接](https://pan.baidu.com/s/1ZiL1Q6tLwvrfneuKGFkfSA)   
提取码：q80t 

# 源码及依赖配置
- 源码   
[github_link](https://github.com/BVLC/caffe/tree/windows)   
**NOTE: 下载windows分支**
- caffe/scripts/build_win.cmd
```
    :: 使用的是那个Python版本就配置哪个路径
    :: Set python 2.7 with conda as the default python
    if !PYTHON_VERSION! EQU 2 (
        set CONDA_ROOT=C:\Miniconda-x64
    )
    :: Set python 3.5 with conda as the default python
    if !PYTHON_VERSION! EQU 3 (
        set CONDA_ROOT=C:\Miniconda\envs\py35
    )
    set PATH=!CONDA_ROOT!;!CONDA_ROOT!\Scripts;!CONDA_ROOT!\Library\bin;!PATH!

    ...部分行之后

    :: Change the settings here to match your setup
    :: Change MSVC_VERSION to 12 to use VS 2013
    :: vs2015对应的是14
    if NOT DEFINED MSVC_VERSION set MSVC_VERSION=14
    :: Change to 1 to use Ninja generator (builds much faster)
    :: vs2015不需要ninja，参考的其他blog，I do not know why
    if NOT DEFINED WITH_NINJA set WITH_NINJA=0
    :: Change to 1 to build caffe without CUDA support这个不用解释了
    if NOT DEFINED CPU_ONLY set CPU_ONLY=1
    :: Change to generate CUDA code for one of the following GPU architectures
    :: 带GPU就修改为下面参数之一
    :: [Fermi  Kepler  Maxwell  Pascal  All]
    if NOT DEFINED CUDA_ARCH_NAME set CUDA_ARCH_NAME=Auto
    :: Change to Debug to build Debug. This is only relevant for the Ninja generator the Visual Studio generator will generate both Debug and Release configs
    if NOT DEFINED CMAKE_CONFIG set CMAKE_CONFIG=Release
    :: Set to 1 to use NCCL
    if NOT DEFINED USE_NCCL set USE_NCCL=0
    :: Change to 1 to build a caffe.dll
    if NOT DEFINED CMAKE_BUILD_SHARED_LIBS set CMAKE_BUILD_SHARED_LIBS=0
    :: Change to 3 if using python 3.5 (only 2.7 and 3.5 are supported)
    :: 使用python3.5时为3，版本为2.7时为2
    if NOT DEFINED PYTHON_VERSION set PYTHON_VERSION=3
    :: Change these options for your needs.
    if NOT DEFINED BUILD_PYTHON set BUILD_PYTHON=1
    if NOT DEFINED BUILD_PYTHON_LAYER set BUILD_PYTHON_LAYER=1
    if NOT DEFINED BUILD_MATLAB set BUILD_MATLAB=0
    :: If python is on your path leave this alone
    if NOT DEFINED PYTHON_EXE set PYTHON_EXE=python
    :: Run the tests
    if NOT DEFINED RUN_TESTS set RUN_TESTS=0
    :: Run lint
    if NOT DEFINED RUN_LINT set RUN_LINT=0
    :: Build the install target
    if NOT DEFINED RUN_INSTALL set RUN_INSTALL=0

    ...很多行之后，大概在160行左右的位置

    :: Configure using cmake and using the caffe-builder dependencies
    :: Add -DCUDNN_ROOT=C:/Projects/caffe/cudnn-8.0-windows10-x64-v5.1/cuda ^
    :: below to use cuDNN
    :: 如果用了cudnn，记得新增后面的路径
    cmake -G"!CMAKE_GENERATOR!" ^
      -DBLAS=Open ^
      -DCMAKE_BUILD_TYPE:STRING=%CMAKE_CONFIG% ^
      -DBUILD_SHARED_LIBS:BOOL=%CMAKE_BUILD_SHARED_LIBS% ^
      -DBUILD_python:BOOL=%BUILD_PYTHON% ^
      -DBUILD_python_layer:BOOL=%BUILD_PYTHON_LAYER% ^
      -DBUILD_matlab:BOOL=%BUILD_MATLAB% ^
      -DCPU_ONLY:BOOL=%CPU_ONLY% ^
      -DCOPY_PREREQUISITES:BOOL=1 ^
      -DINSTALL_PREREQUISITES:BOOL=1 ^
      -DUSE_NCCL:BOOL=!USE_NCCL! ^
      -DCUDA_ARCH_NAME:STRING=%CUDA_ARCH_NAME% ^
      "%~dp0\.."
```

# 配置vs解决方案
- 方式一   
直接双击```caffe/scripts/build_win.cmd```文件，不闪退，能正常cmake说明ok；
- 方式二
cmd打开，切换到scripts目录，然后输入```build_win.cmd```就能运行。   
**NOTE: 有个比较难下载的依赖项，放在开头给出的baidu云链接了，供下载使用**

# 编译Caffe
- 编译
用vs2015打开```caffe/scripts/build/Caffe.sln```，然后```生成```，选择```all_build```；   
正常情况下，没有失败项目就算ok；  
- c++结果   
头文件位置：caffe/include
动态库：caffe/scripts/build/tools/Release
源码：caffe/src/caffe
- python结果   
caffe/python里面有caffe模块和部分测试代码

# 测试
- python   
最方便就是将caffe/python加入到系统的PYTHONPATH中，然后进cmd的python环境，输入```import caffe```不报错就ok； 
- c++   
[reference_link](https://github.com/sophia-hxw/WinCaffeYolov4/tree/main/yolov4_gpu)