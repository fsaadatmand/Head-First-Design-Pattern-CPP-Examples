#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>

class Beverage {
	public:
		enum class Size { TALL, GRANDE, VENTI};
		Beverage() = default;
		virtual ~Beverage() = default;
		virtual std::string getDescription() const { return description; }
		virtual double cost() = 0;
		virtual void setSize(Size s) { size = s;}
		virtual Size getSize() const { return size; }
		virtual std::string getSizeString() const;
	protected:
		std::string description = "Unknown Beverage";
		Size size = Size::GRANDE;
};

inline
std::string
Beverage::getSizeString() const {
	std::string result;
	switch (size) {
		case Size::TALL:
			result = "Tall";
			break;
		case Size::GRANDE:
			result = "Grande";
			break;
		case Size::VENTI:
			result = "Venti";
			break;
		default:
			result = "Unknown size";
			break;
	}
	return result;
}

#endif /* ifndef BEVERAGE_H */
