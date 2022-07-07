#include "slider_widget.hpp"
namespace sfWgts {
	void SliderWidget::on_click(point mouse) {
		point rel = mouse - p - (parent ? parent->get_p() : point{ 0, 0 });
		float prcnt = rel.x / dims.x;
		percentage = prcnt;
		if (onchange != nullptr)
			onchange(parent, percentage);
	}
}