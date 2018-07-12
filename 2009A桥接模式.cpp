class Matrix{    // 各种格式的文件最终都被转化为像素矩阵
    }；
    class Imagelmp{
    public：
       virtual void doPaint (Matrix m)=0；  // 显示像素矩阵m
    }；
    class WinImp ：public ImageImp{
    public：
    void doPaint (Matrix m) { /*调用Windows系统的绘制函数绘制像素矩阵*/)
    };
    class LinuxImp : public ImageImp{
    public:
        void doPaint(Matrix m) { /*调用 Linux系统的绘制函数绘制像素矩阵*/ }
    };
    class Image {
    public:
    void setImp (Image Imp *imp){this.imp = imp;}
    virtual void parseFile(string file Name)=0;
    protected:ImageImp;
    };
    class BMP : public Image{
    public:
        void parse File(string fileName) {
              // 此处解析BMP文件并获得一个像素矩阵对象m
        imp->doPaint (fileName);// 显示像素矩阵m
       }
    };
    class  GIF : public Image{
        // 此处代码省略
    };
    class  JPEG : public Image{
       // 此处代码省略
    };
    void main(){
         //在Windows操作系统上查看demo. bmp图像文件
         Image *imagel = new BMP();
         ImageImp *imageImpl = new WinImp();
         imagel-＞setImp(imageImpl) ;
         imagel-＞parseFile("demo.bmp")；
    }
 <!--   现假设该系统需要支持10种格式的图像文件和5种操作系统，不考虑类Matrix，若采用桥接设计模式则至少需要设计17个类。-->
