#include "Cook.hpp"
#include "Waitress.hpp"
#include "Customer.hpp"

int main()
{
	auto cook = Cook();
	auto waitress = Waitress();
	auto customer = Customer(&waitress, &cook);

	customer.createOrder();
	customer.hungry();
	
	return 0;
}
