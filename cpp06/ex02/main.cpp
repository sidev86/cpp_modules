#include "Base.hpp"


int main()
{
	Base *cl = new Base();
	Base *cl2 = generate();
	identify(cl);
	identify(cl2);
	
	
	delete cl;


}
