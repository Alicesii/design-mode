 class MenuComponent  {
    protected: string name;
    public:
    MenuComponent(string name)  {this-＞name=name;  }
    String getName(){return name;}
    virtual void add(MenuComponent* menuComponent)=0//添加新菜单
    virtual void print()=0;    //打印菜单信息
};
    class MenuItem: public MenuComponent  {
    private: double price;
    public:
    Menultem(string name, double price): MenuComponent(name){this-＞price=price;}
    double getPrice(){return price;}
    void add(MenuComponent* menuComponent)  {return;  }  //添加新菜单
    void print()  { cout＜＜" "＜＜getName()＜＜", "＜＜getPrice()＜＜end1;}
};
    class Menu: public MenuComponent  {
    private: list＜MenuComponent*＞ menuComponents;
    pubiic:
    Menu(string name): MenuC0mponent(name){}
    void add(MenuComponent* menuComponent)    //添加新菜单
    {  menuComponents.add(menuComponent); }
    void print(){
    cout＜＜"\n"＜＜getName()＜＜"\n-------------------------"＜＜end1;
    std::list＜MenuC0mponent*＞::iterator iter;
    for(iter=menuComponents.begin(); iter!=menuComponents. end(); iter++)
    (*iter)-＞print();
    }
};
    void main(){
    MenuComponent* allMenus=new Menu("ALL MENUS");
    MenuComponent* dinerMenu=new Menu("DINER MENU");
    …//创建更多的Menu对象，此处代码省略
    allMenus-＞add(dinerMenu);    //将dinerMenu添加到餐厅菜单中
    …//为餐厅增加更多的菜单，此处代码省略
    allMenus-＞print();   //打印饭店所有菜单的信息
    }
