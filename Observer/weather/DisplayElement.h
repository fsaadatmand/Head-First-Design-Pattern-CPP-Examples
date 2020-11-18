#ifndef DISPLAY_ELEMENT
#define DISPLAY_ELEMENT

class DisplayElement {
	public:
		virtual ~DisplayElement() = default;
		virtual void display() const = 0;
};

#endif /* ifndef DISPLAY_ELEMENT */
