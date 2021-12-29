#include "vertical_slider_widget.hpp"
#include "window.hpp"
namespace sfWgts {
	void VerticalSliderWidget::draw(point shift) {
		the_line->setPosition(shift.x + p.x + dims.x / 3, shift.y + p.y);
		the_slider->setPosition(shift.x + p.x, shift.y + p.y + dims.y * percentage);
		window->draw(*the_line);
		window->draw(*the_slider);
		Widget::draw(shift);
	}
}