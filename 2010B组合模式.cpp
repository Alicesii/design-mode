 class Company {    //抽象类
    protected:
    string name;
    public:
    Company(string name) {this.name=name;}
    virtual void Add(Company* children)=0; //增加子公司、办事处或部门
    virtual void Delete (Company* children)=0;//删除子公司办事处或部门
};
    class ConcreteCompany: public Company  {
    private:
    list＜ Company*＞children;     //存储子公司、办事处或部门
    public:
    ConcreteCompany(string name):Company(name) {}
    void Add(Company* children) { children. push_back(c); }
    void Delete(Company* children) {  children. remove(c); }
};
    class HRDepartment : public Company  {
    public:
    HRDepartment(string name): Company(name) {}    //其他代码省略
};
    class  FinanceDepartment: public Company  {
    public:
    FinanceDepartment(string name): Company(name)  {}  //其他代码省略
}; 
    void main(){
    ConcreteCompany *root=new ConcreteCompany("北京总公司");
    root-＞Add(new HRDepartment("总公司人力资源部"));
    root-＞Add(new FinanceDepartment("总公司财务部"));
    ConcreteCompany *comp=new ConcreteCompany("上海分公司");
    comp-＞Add(new HRDepartment("上海分公司人力资源部"));
    comp-＞Add(new FinanceDepartment("上海分公司财务部"));
    root->Add(comp)  ;
    ConcreteCompany *comp1=new ConcreteCompany("南京办事处");
    comp1-＞Add(new HRDepartment("南京办事处人力资源部"));
    comp1-＞Add(new FinanceDepartment("南京办事处财务部"));
      comp->Add(comp1)  ;
    }