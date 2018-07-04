#include <iostream> 
using namespace std; 
class Address{ 
public: 
    void stree()    { /*  实现代码省略  */  } 
    void zip()      { /*  实现代码省略  */  } 
    void city()     { /*  实现代码省略  */  } 
∥其他成员省略 
}; 
     
class DutchAddress { 
public: 
    virtual void straat()=0; 
    virtual void postcode()=0; 
    virtual void plaats()=0;     
//其他成员省略 
}; 
  
class DutchAddressAdapter : public DutchAddress { 
private:          
      Address*  address ; 
public: 
    DutchAddressAdapter(Address *addr) { 
        address = addr; 
    } 
    void straat() {   
          addr->stree() ; 
    } 
    void postcode(){ 
          addr->postcode() ; 
            } 
    void plaat(){    
         addr->plaats(); 
    } 
//其他成员省略 
}; 
  
void testDutch(DutchAddress *addr){ 
       addr->straat(); 
       addr->postcode(); 
       addr->plaats(); 
} 
  
int main(){ 
    Address*addr = new Address();   
    DutchAddress *addr=new DutchAddressAdaptor(addr); ;                        
    cout<< "\n The DutchAddress\n"<< endl; 
    testDutch(addrAdapter); 
    return 0; 
} 