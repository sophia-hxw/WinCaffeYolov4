# ͷ�ļ�
���·����caffe/include/caffe/layers

# Դ���ļ�
���·����caffe/src/caffe/layers

# �޸������ļ�proto
���޸��ļ�·����caffe/src/caffe/proto/caffe.proto
## message LayerParameter�����
```
optional UpsampleParameter upsample_param = 149; //added by chen for Yolov3, make sure this id 149 not the same as before.����
optional MishParameter mish_param = 150; //added by chen for yolov4,make sure this id 150 not the same as before.
```
## ������
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

# ���±���
ǰ�������ɺ���������Caffe.sln���ٴα���caffe���ɡ�   
[ref_link](https://github.com/sophia-hxw/WinCaffeYolov4/blob/main/BVLC_caffe_install.md)