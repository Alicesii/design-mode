 #include ＜iostream＞
    #include ＜string＞
    using namespace std;
    consr int ESPRESSO_PRICE = 25;
    const int DRAKROAST_PRICE = 20;
    const int MOCHA_PRICE = 10;
    const int WHIP_PRICE = 8;
    class Beverage {       //饮料
       protected: string description;
        public:   virtual string getDescription() {return description;}
        virtual int cost()=0;};
    class CondimentDecorator: public Beverage {            //配料
                 protected:Beverage*beverage;};
    class Espresso: public Beverage {                    //蒸馏咖啡
        public:
              Espresso ()  { description="Espresso"; }
              int cost ()  { return ESPRESSO_PRICE; }
    };
    class DarkRoast: public Beverage {                     //深度烘培咖啡
        public: DarkRoast() { description = "DardRoast"; }
        int cost(){ return DRAKROAST_PRICE; }
    };
    class Mocha: public CondimentDecorator { //摩卡
         public: Mocha (Beverage*beverage) { this-＞beverage=beverage; }
         string getDescription(){ return beverage-＞getDescription()+",Mocha"; }
         int cost(){ return MOCHA_PRICE+beverage-＞cost(); }
    };
    class Whip: public CondimentDecorator {              //奶泡
         public: Whip (Beverage*beverage) { this-＞beverage=beverage; }
         string getDescription() { return beverage-＞getDescription()+",Whip"; }
         int cost(){ return WHIP_PRICE+beverage-＞cost(); }
    int main(){
         Beverage* beverage = new DarkRoast() ;
         beverage=new Mocha(beverage) ;
         beverage=new Whip (beverage) ;
         cout＜＜beverage-＞getDescription()＜＜"￥"＜＜beverage-＞cost() end1;
         return 0;
    }
