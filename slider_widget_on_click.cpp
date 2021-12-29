#include "slider_widget.hpp"
namespace sfWgts {
	void SliderWidget::on_click(point mouse) {
		point rel = mouse - p;
		float prcnt = rel.x / dims.x;
		percentage = prcnt;
		if (onchange != nullptr)
			onchange(parent, percentage);
	}
}