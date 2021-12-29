#include "scrollbox_widget.hpp"

#define let auto
#define of :
namespace sfWgts {
	void ScrollboxWidget::process_click(point mouse_shift, Widget*& result_pointer) {
		if (!isVisible) return;
		point scroll_shift = { 0, percentage * content_height };
		if (p < mouse_shift && mouse_shift - p < dims)
			result_pointer = this;
		for (let child of children)
			if (child != slider)
				child->process_click(mouse_shift - p + scroll_shift, result_pointer);
			else child->process_click(mouse_shift - p, result_pointer);
	}
}