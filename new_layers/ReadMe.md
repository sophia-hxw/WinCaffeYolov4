# 头文件
添加路径：caffe/include/caffe/layers

# 源码文件
添加路径：caffe/src/caffe/layers

# 修改描述文件proto
待修改文件路径：caffe/src/caffe/proto/caffe.proto
## message LayerParameter中添加
```
optional UpsampleParameter upsample_param = 149; //added by chen for Yolov3, make sure this id 149 not the same as before.数字
optional MishParameter mish_param = 150; //added by chen for yolov4,make sure this id 150 not the same as before.
```
## 外层添加
- mish
```
message MishParameter {
  enum Engine {
    DEFAULT = 0;
    CAFFE = 1;
    CUDNN = 2;
  }
  optional Engine engine = 2 [default = DEFAULT];
}
```
- upsample
```
message UpsampleParameter{
  optional int32 scale = 1 [default = 1];
}
```

# 重新编译
前面操作完成后，重新生成Caffe.sln及再次编译caffe即可。   
[ref_link](https://github.com/sophia-hxw/WinCaffeYolov4/blob/main/BVLC_caffe_install.md)