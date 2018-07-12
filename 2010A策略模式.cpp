class  FlyBehaVior  { 
    public: virtual void fly()=0; 
    }; 
    class  SubSonicFly: public FlyBehaVior{ 
    public: void fly(){cout＜＜"亚音速飞行!"＜＜endl;) 
    }; 
    class  SupersonicFly: public FlyBehaVior{ 
    public: void fly(){cout＜＜"超音速飞行!"＜＜endl;) 
    }; 
    class TakeOffBehavior{ 
    publie: virtual void takeOff()=0; 
    }; 
    class VerticalTakeOff: public TakeOffBehavior{ 
    public: void takeOff(){cout＜＜"垂直起飞!"＜＜endl'    } 
    }; 
    class LongDistanceTakeOff: public TakeOffBehavior{ 
    public: void takeOff(){cout＜＜"长距离起飞!"＜＜endl;} 
    }; 
    class AirCraft{ 
    protected: 
     FlyBehaVior *flyBehaVior; 
     TakeOffBehavior *takeoffBehavior;
    public: 
    void fly(){ flyBehaVior->fly(); } 
    void takeoff()  {takeoffBehavior-> takeoff();  }; 
    }; 
    class  Helicopter:  public AirCraft  { 
    public: 
    Helicopter (){ 
    flyBehavior=new   SubSonicFly() ; 
    takeoffBehavior=new  VerticalTakeOff() ; 
    }
 <!--C++中的"~"符号代表析构函数，-->
    ~Helicopter{ 
    if(!flyBehaVior)  delete  flyBehaVior(); 
    if(!takeoffBehavior)  delete takeoffBehaVior; 
    } 
    };
