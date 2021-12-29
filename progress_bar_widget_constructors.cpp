#include "progress_bar_widget.hpp"
namespace sfWgts {
	ProgressBarWidget::ProgressBarWidget() {}
	ProgressBarWidget::ProgressBarWidget(sf::Color bground_color, sf::Color bar_color, point paddings_,
		point dims_, point p_) :Widget(dims_, p_) {
		paddings = paddings_;
		bground = new sf::RectangleShape(sf::Vector2f(dims_.x, dims_.y));
		bground->setFillColor(bground_color);
		point bar_size = dims - paddings * 2;
		the_bar = new sf::RectangleShape(sf::Vector2f(bar_size.x, bar_size.y));
		the_bar->setFillColor(bar_color);
		ratio = 1.0f;
	}
}