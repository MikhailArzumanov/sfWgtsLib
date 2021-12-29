#include "slider_widget.hpp"
#include "window.hpp"
namespace sfWgts {
	void SliderWidget::draw(point shift) {
		the_line->setPosition(shift.x + p.x, shift.y + p.y + dims.y / 3);
		the_slider->setPosition(shift.x + p.x + dims.x * percentage - 38.f / 2, shift.y + p.y);
		window->draw(*the_line);
		window->draw(*the_slider);
		Widget::draw(shift);
	}
}