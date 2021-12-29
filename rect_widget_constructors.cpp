#include "rect_widget.hpp"
namespace sfWgts {
	RectWidget::RectWidget() {
		rect = new sf::RectangleShape({ 0,0 });
	}
	RectWidget::RectWidget(point dims_, point p_, sf::Color color_) :Widget(dims_, p_) {
		rect = new sf::RectangleShape({ dims.x, dims.y });
		rect->setFillColor(color_);
	}
}