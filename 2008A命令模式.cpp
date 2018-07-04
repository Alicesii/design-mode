class Light{  //电灯类
public：
    void trunLight(int degree){//调整灯光亮度，0表示关灯，100表示亮度最大)；
}；
class TV{//电视机类
public：
vold setChannel(int channel]{//调整电视频道，0表示关机，1表示开机并切换到1频道}；
}；
class Command{//抽象命令类
public：
    virtual void on()=0；
    virtual void off()=0；
}；
class RemoteController{  //遥控器类
protected：
    Command* commands [4]；//遥控器有4个按钮，按照编号分别对应4个Command对象
public：
    void onPressButton(int button){  //按钮被按下时执行命令对象中的命令
        if(button % 2==0)commands[button]-＞on()；
        else commands[button]-＞off()；
    }
    void setCommand(int button，Command* command){
           commands[button]  =command；//设置每个按钮对应的命令对象
}
}；
class LightCommand：public Command{  //电灯命令类
protected：Light* light；  //指向要控制的电灯对象
public：
    void On(){light-＞trunLight(100)；)；
    void off()[light-＞  trunLight(0)；)；
    LightCommand(Light * light){this-＞light=light；)；
}；
class TVCommand：public Command{//电视机命令类
protected：    TV*tv；  //指向要控制的电视机对象
public：
    void on(){tv-＞  setChannel(1)  ；}；
    void off(){tv-＞setChannel(0)；)；
    TVCommand(TV *tv){this-＞tv=tv；)；
}；
void main(){
    Light light；TV tv；//创建电灯和电视对象
    LightCommand lightCommand (&light)；
    TVCommand tVCommand(&tv)；
    RemoteController remoteController；
remoteController. setCommand(0，&lightCommand);//设置按钮0的命令对象
}