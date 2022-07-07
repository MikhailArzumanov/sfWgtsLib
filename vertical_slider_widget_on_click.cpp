#include "vertical_slider_widget.hpp"
namespace sfWgts {
	void VerticalSliderWidget::on_click(point mouse) {
		point rel = mouse - p - (parent ? parent->get_p() : point{0, 0});
		float prcnt = rel.y / dims.y;
		percentage = prcnt;
		if (onchange != nullptr)
			onchange(parent, percentage);
	}
}