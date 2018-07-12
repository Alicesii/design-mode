#include <iostream>
using namespace std；
class invoice{
public：
	   virtual void printinvoice(){
	cout《 "This is the content of the invoice!"《 endl;
		}
};
class Decorator : public invoice {
	Invoice *ticket;
public:
	Decorator（lnvoice *t） { ticket = t; }
	void printinvoice(){
		if（ticket != NULL）
			ticket->printInvoice();
		}
};
class HeadDecorator : public Decorator{
public:
	HeadDecorator（lnvoice*t）: Decorator（t） { }
	void printinvoice() {
		cout《 "This is the header of the invoice! "<< endl;
		 Decorator::printInvoice();
		}
}；
	class FootDecorator : public Decorator{
public:
	FootDecorator（invoice *t）: Decorator（t） { }
	void printlnvoice（） {
		Decorator::printInvoice();
		cout《 "This is the footnote of the invoice!"《 endl;
	}
};
int main（void） {
	Invoice t;
	FootDecorator f（&t）;
	HeadDecorator h（&f）;
	H.printlnvoice（）;
	cout< < “_____”< < endl;
	FootDecorator a(NULL);
	HeadDecorator b((&a));
	B．printinvoice();
	return 0;
}
