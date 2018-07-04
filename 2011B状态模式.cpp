 #include ＜iostream＞
    using namespace std;
    //以下为类的定义部分
    class TissueMachine;    //类的提前引用
    class State  {
    public：
        virtual void insertQuarter()=0; //投币
        virtual void ejectQuarter()=0;  //退币
        virtual  void  turnCrank()=0;   //按下“出纸巾”按钮
        virtual void dispense()=0;     //出纸巾
    };
    /*类SoldOutState、NoQuarterState、HasQuarterState、SoldState的定义省略，
    每个类中均定义了私有数据成员TissueMachine* tissueMachine;*/
    class TissueMachine  {
    private：
          State *soldOutState, *noQuarterState, *hasQuarterState,*soldState,
    *state;
        int count;    //纸巾数
    public：
        TissueMachine (int numbers);
        void setState (State*  state);
        State* getHasQuarterState();
        State* getNoQuarterState();
        State* getSoldState();
        State* getSoldOutState();
        int  getCount();
        //其余代码省略
    };
    //以下为类的实现部分
    void NoQuarterState  ::insertQuarter(){
    tissueMachine-＞setState(tissueMachine->getHasQuarterState());
    }
    void  HasQuarterState  ::ejectQuarter(){
    tissueMachine-＞setState(tissueMachine->getNoQuarterState());
    }
    void SoldState  ::dispense(){
        if (tissueMachine-＞getCount()＞0)  {
            tissueMachine-＞setState(tissueMachine->getNoQuarterState());
    }
    else  {
            tissueMachine-＞setState(tissueMachine->getSoldOutState());
    }
    }  //其余代码省略