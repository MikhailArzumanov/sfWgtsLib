#include "checkbox_widget.hpp"
namespace sfWgts {
	CheckboxWidget::CheckboxWidget() {}

	CheckboxWidget::CheckboxWidget(Widget* parent_, void (*onchange_)(Widget*, bool),
		point dims_, point p_) :Widget(dims_, p_) {
		parent = parent; onchange = onchange_;
		init_lines(p);
		box = new sf::RectangleShape({ dims.x,dims.y });
	}
}