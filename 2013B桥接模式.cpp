class DP1{
public:
static void draw_aline(double x1,double y1,double x2,double y2){/*代码省略*/}
static void draw_a_circle(double x,double y,double r){/*代码省略*/}
};
class DP2{
public:
static void drawline(double x1,double x2,double y1,double y2){/*代码省略*/}
static void drawcircle(double x,double y,double r){/*代码省略*/}
};
class Drawing{
public:
virtual void drawLine(double x1,double y1,double x2,double y2);
virtual void drawCircle(double x,double y,double r);
};
class V1Drawing:public Drawing{
public:
void drawLine(double x1,double y1,double x2,double y2){/*代码省略*/}
void drawCircle(double x,double y,double r){ DP1::V1Drawing(x,y,r);}
};
class V2Drawing:public Drawing{
public:
void drawLine(double x1,double y1,double x2,double y2){/*代码省略*/}
void drawCircle(double x,double y,double r){ DP2::V2Drawing(x,y,r);}
};
class shape{
public:
virtual void draw()=0 ;
Shape(Drawing *dp){_dp=dp;}
void drawLine(double x1,double y1,double x2,double y2){
_dp->drawLine(x1,y1,x2,y2);}
void drawCircle(double x,double y,double r){_dp->drawCircle(x,y,r);}
private:Drawing *_dp;
};
class Rectangle:public Shape{ 
public:
void draw(){/*代码省略*/}
//其余代码省略
};
class Circle:public Shape{
private:double _x,_y,_r;
public:
Circle(Drawing *_dp,double x,double y,double r):  Shape(dp) { _x=x;_y=y;_r=r;
};
void draw(){drawCircle(_x,_y,_r); }
};
