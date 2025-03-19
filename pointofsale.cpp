#include <iostream>
#include <string>
#include <tuple>
using namespace std;

class PointOfSale {


 };



int main() {
	PointOfSale pos;

	std::tuple<std::string, std::string,
		std::string>
		tup("00295", "10342", "10557");
	std::cout << "Values of tuple: ";

	std::cout << std::get<0>(tup)
		<< " " << std::get<1>(tup)
		<< " " << std::get<2>(tup)
		<< std::endl;

	
}