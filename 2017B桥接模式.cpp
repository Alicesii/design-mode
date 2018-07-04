class matrix{//各种格式的文件最终都被转化为像素矩阵
//此处代码省略
}；
class Implement{
Public:
Virtual Void doPaint(Matrix m)=0;//显示像素矩阵m
}；
class WinImp:public Implementor{
Public:
Void doPaint(Matrix m){/*调用Windows系统的绘制函数绘制像素矩阵*/}
};
class LinuxImp: public Implementor{
public:
Void doPaint(Matrix m){/*调用Linux系统的绘制函数绘制像素矩阵*/}
};
class Imag{
public:
void setImp(Implementor *imp){this.imp=imp;}
virtual void parseFile(String fileName)=0;
protected: 
Implenentor *imp;
};
class BMPImage:public Image{
//此处代码省略
}；
class GIFImage:public Image{
public:
void parseFile(String fileName){
//此处解析GIF文件并获取一个像素矩阵对象m
  imp->doPaint(Matrix m);//显示像素矩阵m
}
}；
class JPEGImage:public Image{
//此处代码省略
};
int main(){
public static void main(String[] args){
//在Linux操作系统上查看demo.gif图像文件
Imag imag= new GIFImage();
Implementor imageImp= new LinuxImp()   ;
imp.setImp("imageImp");
image.parseFile(“demo.gif”);
} 
}