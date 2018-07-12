#include <iostream> 
Using namespace std; 
enum TYPE{NORMAL, CASH_DISCOUNT, CASH_RETURN}; 
class CashSuper{ 
public:  virtual double acceptCash(double money)=0；
}; 
class CashNormal : public CashSuper { 
 ／／正常收费子类
 public: 
    double acceptCash(double money) 
{     retum  money;    } 
};   
class CashDiscount : public CashSuper { 
 private: 
    double  moneyDiscount;     //  折扣率
public: 
   CashDiscount(double  discount) {    moneyDiscount= discount;    } 
   double acceptCash(double money) { retum money * moneyDiscount;    } 
}; 
class CashRetum : public CashSuper { 
// 满额返利
private:          
    double moneyCondition;      // 满额数额
    double moneyReturn;       // 返利数额
public: 
  CashRetnm(double;m otieyCondition, double moneyReturn) { 
     this=>moneyCondition - moneyCondition; 
     this=>m oneyRetumF moneyRetum; 
     }                                                                 . 
   double acceptCash(double money) { 
     double result = money; 
    if(money＞=moneyCondition) 
        result = money - (int)(money moneyCondition ) * moneyRetum; 
     Return  result  
  } 
}; 
class CashContext { 
private: 
   CashSuper *cs; 
public: 
   CashContext(inttype) { 
     switch(type) { 
           case NORMAL:           ／／正常收费
                    cs->new CashNormal();
            case RETURN       ／／满300返100                     
                    cs->new CashRetum();  
           Break; 
       case 
CASH 
DISCOUNT:     
／／打八折
        cs->new CashDiscount();       
break; 
   } 
} 
double GetResult(double money) { 
return cs->acceptCash(money);
    } 
};
