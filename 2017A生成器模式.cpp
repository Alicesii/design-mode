#include<iostream>
#include <string>
using namespace std;
class Pizza {
	private: string parts;
	public:
		void setParts(string parts) { this->parts=parts; }
		string getParts() { return parts; }
	};
class PizzaBuilder {
	protected:Pizza* pizza;
	public:
		Pizza* getPizza() { retum pizza; }
		void createNewPizza() { pizza = new Pizza(); }
		virtual void buildParts();
}
class HawaiianPizzaBuilder :public PizzaBuilder {
	public:
		void buildParts() {
			pizza->setParts("cross +mild + ham&pineapple");
		}
}
class SpicyPizzaBuider: public PizzaBuilder {
	public:
		void buildParts() {
			pizza->setParts("pan baked +hot + ham&pineapple");
		}
}
Class Waiter{
	Private:
		PizzaBuilder* pizzaBuilder;
	public:
		void setPizzaBuilder(PizzaBuilder* pizzaBuilder) { /*ÉèÖÃ¹¹½¨Æ÷*/
	this->pizzaBuilder=pizzaBuilder;
}
Pizza* getPizza() { return pizzaBuilder->getPizza(); }
	void construct() { /*¹¹½¨*/
		pizzaBuilder->createNewPizza();
		pizzaBuilder->builderParts();
	}
};
int main(){
	Waiter*waiter=new Waiter();
	PizzaBuilder*hawaiian pizzabuilder=new
	HawaiianPizzaBuilder()
	waiter->setPizzaBuilder(hawaiian_pizzabuilder);
	waiter->construct();
	cout<< "pizza: "<< waiter->getPizza()->getParts()<< endl;
}

