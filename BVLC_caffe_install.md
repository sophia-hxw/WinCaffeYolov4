# �ر�����
- win10
- vs2015 update3
- cmake 3.19.2
- git
- miniconda
- cuda8.0
- cuDNNv7.1

���˱���ʹ�õ������������صĴ��ļ���baidu�����ˣ��ɹ����أ�   
[����](https://pan.baidu.com/s/1ZiL1Q6tLwvrfneuKGFkfSA)   
��ȡ�룺q80t 

# Դ�뼰��������
- Դ��   
[github_link](https://github.com/BVLC/caffe/tree/windows)   
**NOTE: ����windows��֧**
- caffe/scripts/build_win.cmd
```
    :: ʹ�õ����Ǹ�Python�汾�������ĸ�·��
    :: Set python 2.7 with conda as the default python
    if !PYTHON_VERSION! EQU 2 (
        set CONDA_ROOT=C:\Miniconda-x64
    )
    :: Set python 3.5 with conda as the default python
    if !PYTHON_VERSION! EQU 3 (
        set CONDA_ROOT=C:\Miniconda\envs\py35
    )
    set PATH=!CONDA_ROOT!;!CONDA_ROOT!\Scripts;!CONDA_ROOT!\Library\bin;!PATH!

    ...������֮��

    :: Change the settings here to match your setup
    :: Change MSVC_VERSION to 12 to use VS 2013
    :: vs2015��Ӧ����14
    if NOT DEFINED MSVC_VERSION set MSVC_VERSION=14
    :: Change to 1 to use Ninja generator (builds much faster)
    :: vs2015����Ҫninja���ο�������blog��I do not know why
    if NOT DEFINED WITH_NINJA set WITH_NINJA=0
    :: Change to 1 to build caffe without CUDA support������ý�����
    if NOT DEFINED CPU_ONLY set CPU_ONLY=1
    :: Change to generate CUDA code for one of the following GPU architectures
    :: ��GPU���޸�Ϊ�������֮һ
    :: [Fermi  Kepler  Maxwell  Pascal  All]
    if NOT DEFINED CUDA_ARCH_NAME set CUDA_ARCH_NAME=Auto
    :: Change to Debug to build Debug. This is only relevant for the Ninja generator the Visual Studio generator will generate both Debug and Release configs
    if NOT DEFINED CMAKE_CONFIG set CMAKE_CONFIG=Release
    :: Set to 1 to use NCCL
    if NOT DEFINED USE_NCCL set USE_NCCL=0
    :: Change to 1 to build a caffe.dll
    if NOT DEFINED CMAKE_BUILD_SHARED_LIBS set CMAKE_BUILD_SHARED_LIBS=0
    :: Change to 3 if using python 3.5 (only 2.7 and 3.5 are supported)
    :: ʹ��python3.5ʱΪ3���汾Ϊ2.7ʱΪ2
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

    ...�ܶ���֮�󣬴����160�����ҵ�λ��

    :: Configure using cmake and using the caffe-builder dependencies
    :: Add -DCUDNN_ROOT=C:/Projects/caffe/cudnn-8.0-windows10-x64-v5.1/cuda ^
    :: below to use cuDNN
    :: �������cudnn���ǵ����������·��
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

# ����vs�������
- ��ʽһ   
ֱ��˫��```caffe/scripts/build_win.cmd```�ļ��������ˣ�������cmake˵��ok��
- ��ʽ��
cmd�򿪣��л���scriptsĿ¼��Ȼ������```build_win.cmd```�������С�   
**NOTE: �и��Ƚ������ص���������ڿ�ͷ������baidu�������ˣ�������ʹ��**

# ����Caffe
- ����
��vs2015��```caffe/scripts/build/Caffe.sln```��Ȼ��```����```��ѡ��```all_build```��   
��������£�û��ʧ����Ŀ����ok��  
- c++���   
ͷ�ļ�λ�ã�caffe/include
��̬�⣺caffe/scripts/build/tools/Release
Դ�룺caffe/src/caffe
- python���   
caffe/python������caffeģ��Ͳ��ֲ��Դ���

# ����
- python   
�����ǽ�caffe/python���뵽ϵͳ��PYTHONPATH�У�Ȼ���cmd��python����������```import caffe```�������ok�� 
- c++   
[reference_link](https://github.com/sophia-hxw/WinCaffeYolov4/tree/main/yolov4_gpu)