#include "vertical_slider_widget.hpp"

namespace sfWgts {
	VerticalSliderWidget::~VerticalSliderWidget() {
		delete the_slider, the_line;
	}
}