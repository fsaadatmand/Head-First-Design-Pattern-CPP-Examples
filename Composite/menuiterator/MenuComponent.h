#ifndef MENU_COMPONENT_H
#define MENU_COMPONENT_H

#include <stdexcept>
#include <list>
#include <memory>

template <typename T> class Iterator; // template declaration

class MenuComponent {
	public:
		using menu_component_t = std::shared_ptr<MenuComponent>;
		using menu_component_iterator = std::shared_ptr<Iterator<MenuComponent>>;
		virtual ~MenuComponent() = default;
		virtual menu_component_iterator createIterator() = 0;
		virtual void add([[maybe_unused]]menu_component_t menuComponent) {
			throw std::invalid_argument("add(): Unsupported Operation"); }
		virtual void remove([[maybe_unused]]menu_component_t menuComponent) {
			throw std::invalid_argument("remove(): Unsupported Operation"); }
		virtual MenuComponent* getChid([[maybe_unused]]int i) const {
			throw std::invalid_argument("getChid(): Unsupported Operation"); }
		virtual std::string getName() const {
			throw std::invalid_argument("getName(): Unsupported Operation"); }
		virtual std::string getDescription() const {
			throw std::invalid_argument("getDescription(): Unsupported Operation"); }
		virtual double getPrice() const {
			throw std::invalid_argument("getPrice(): Unsupported Operation"); }
		virtual bool isVegetarian() const {
			throw std::invalid_argument("isVegetarian(): Unsupported Operation"); }
		virtual void print() const {
			throw std::invalid_argument("print(): Unsupported Operation"); }
};

#endif /* MENU_COMPONENT_H */
