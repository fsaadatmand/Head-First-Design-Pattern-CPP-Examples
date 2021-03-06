# Head First Design Patterns: A Brain-Friendly Guide by Eric Freeman, Elisabeth Robson, Bert Bates and Kathy Sierra

These are my C++ implementations of all the exercises in Head First Design Pattern
I did them for my own learning. I hope that they will be useful to someone else.

Please let me know if you found a mistake or a bug. 

Cheers!

NOTE: stay tune for the rest of the patterns

### Contents

- [Chapter 1. Strategy](Strategy/)
- Chapter 2. Observer
  - [Weather-O-Rama: push model](Observer/weather/)
  - [Weather-O-Rama: pull model](Observer/weatherobservable/)
- Chapter 3. Decorator
  - [starBuzz Coffee Shop](Decorator/starbuzz/)
- Chapter 4. Factory
	- [Simple Factory](Factory/pizzas/)
	- [The Factory Method](Factory/pizzafm/)
	- [Abstract Factory](Factory/pizzaaf/)
- Chapter 5. Singleton
    - [Classic Singleton](Singleton/classic/)
	- [Chocolate Boiler](Singleton/stat/)
	- Thread Safe:
		- [Synchronized](Singleton/threadsafe/)
		- [Eagerly created instance](Singleton/stat/)
		- [Double-checked lock](Singleton/dcl/)
		- [Subclassed](Singleton/subclass/)
- Chapter 6. Command
    - [Simple Remote Control](Command/simpleremote/)
    - [Remote Control](Command/remote/)
    - [Remote Control with undo](Command/undo/)
    - [Remote Control Party Macros](Command/party/)
    - [Dinner Order using lambda function](Command/dinnerLambda/)
- Chapter 7. Adapter and Facade
    - Adapter
       - [Object Adapter](Adapter/ducks/object_adapter/)
       - [Class Adapter](Adapter/ducks/class_adapter/)
	- [Facade](Facade/hometheater/)
- [Chapter 8. Template Method](TemplateMethod/)
    - [Barista: Coffee and Tea](TemplateMethod/barista/)
    - [sort](TemplateMethod/sort/)
- Chapter 9. Iterator and Composite
	- Iterator
		- [Diner Merger](Iterator/dinermerger/)
		- [Diner Merger - built-in Java Iterator](Iterator/dinermergeri/)
		- [Diner/Cafe Merger](Iterator/dinermergercafe/)
	- Composite
		- [Menu](Composite/menu/)
		- [Menu Iterator](Composite/menuiterator/)
- Chapter 10. State
	- [Gumball Machine - without state pattern](State/gumball/)
	- [Gumball Machine - with state pattern](State/gumballstate/)
	- [Gumball Machine - with Winner State](State/gumballstatewinner/)
