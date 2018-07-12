# include＜string＞
    Using namespace std;
    Class Clonealole{
    Public:
    virtual Cloneable*Clone()=0;
    Class WorkExperience:public Cloneable{    //经历
    Private:
        String workDate;
        String company;
    Public:
      Cloneable*Clone(){
    WorkExperience *obj=new WorkExperience();
    Obj-＞workDate=this-＞workDate;
    Obj-＞company=this-＞company;
    Return obj;
        }                                                    //其余代码省略
      };
    Class Resume:public Cloneable{                     //简历
    Private:
    String name; string sex; string age;
    WorkExperience*work;
    Resume(WorkExperience*work){
        This-＞work=( WorkExperience*)work->clone();
    Public:
    Resume(string name){  /*实现省略*/  }
    Void  SetPersonallnfo(string sex, string age){  /*实现省略*/  }
    Void setWorkExperience(string   workDate,string company) {  /*实现省略*/  }
        Cloneable*Clone(){
    Resume *obj=new Resume();
    obj-＞name=this-＞name;
    obj-＞sex=this-＞sex;
    0bj-＞age=this-＞age;
    Return obj;
        }
    };
    Int main(){
    Resume*a=new Resrune("张三");
    A-＞SetPersonalInfo("男", "29");
    A-＞SetWorkExperience("1998～2000", "XXX公司");
    Resume*b=(Reasume*)a->Clone();
    B-＞SetWorkExperience("2001～2006","YYY公司");
    Return 0;
    }
