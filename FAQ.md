# Microsoft visual studio 2015的目录里没有vcvarsall.bat
- 可能原因   
如果你在安装VS2015时选择了默认安装方式，将不具备Visual C++   
- 解决办法   
首先打开VS，然后点击新建项目，选择Visual C++； 出现两个安装选项，选择其中一个安装； 安装完成重新启动VS

# 关于python的小trick
- 安装miniconda，然后新建py35环境
```
conda create -n py35 python=3.5 anaconda
activate py35      #但是当退出之后仍然是默认的3.6 命令行执行：
conda info --envs    #可以看到有一个root,一个py35，找到py35这个包的安装路径。
```
- 环境变量   
将下面的路径添加到path系统变量中去即可使用python3.5
```
C:\Miniconda\envs\py35
C:\Miniconda\envs\py35\Scripts
C:\Miniconda\envs\py35\Library\bin
C:\Miniconda\envs\py35\Library\mingw-w64\bin
```

# VS2015生成自定义没有cuda选项
将cuda安装路径
```
C:\Program Files\NVIDIA GPU Computing Toolkit\CUDA\v8.0\extras\visual_studio_integration\MSBuildExtensions
```
下的所有文件拷贝到
```
C:\Program Files (x86)\MSBuild\Microsoft.Cpp\v4.0\V140\BuildCustomizations
```
即可解决。


