#include "Veggies.hpp"
#include "Garlic.hpp"
#include <iostream>
#include <memory>
#include <vector>

int main()
{
	std::vector<std::unique_ptr<Veggies>> vVec;

//	auto garlic = std::make_unique<Garlic>();
	vVec.push_back(std::unique_ptr<Garlic>(new Garlic()));
	
	return 0;
}
