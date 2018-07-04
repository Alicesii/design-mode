 #include＜iostream＞
    using namespace std;
    class Department{/*代码省略*/};
    class IDepartment{
    public:
        virtual void Insert(Department* department)=0;
         virtual Department GetDepartment(int id)=0;
    };
    class SqlserverDepartment: public IDepartment{
    public:
       void Insert(Department* department){
            cout＜＜"Insert a record into Department in SQL Server!\n";
            //其余代码省略
       }
       Department GetDepartment(int id){
       }
    };
    class AccessDepartment:  public IDepartment{
    public:
        void Insert(Department* department){
             cout＜＜"Insert a record into Department in ACCESS!\n";
            //其余代码省略
       }
       Department GetDepartment(int id){
            /*代码省略*/
       }
    };
    class IFactory{
    public:
    virtual IDepartment* CreateDepartment()=0;
    };
    class SqlServerFactory: public IFactory{
    public:
       IDepartment* CreateDepartment() {return new SqlserverDepartment(); }
    };
    class AccessFactory:public IFactory{
    public:
       IDepartment* CreateDepartment() {  return new AccessDepartment() ;  }
       //其余代码省略
    };