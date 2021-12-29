#include "widget.hpp"

#define let auto
#define of :
namespace sfWgts {
	void Widget::process_click(point mouse_shift, Widget*& result_pointer) {
		if (!isVisible) return;
		if (p < mouse_shift && mouse_shift - p < dims)
			result_pointer = this;
		for (let child of children)
			child->process_click(mouse_shift - p, result_pointer);
	}
}