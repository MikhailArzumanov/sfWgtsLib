#include "vertical_slider_widget.hpp"
namespace sfWgts {
	VerticalSliderWidget::VerticalSliderWidget() {}
	VerticalSliderWidget::VerticalSliderWidget(Widget* parent_, void (*onchange_)(Widget*, float),
		point dims_, point p_) :Widget(dims_, p_) {
		percentage = 0;

		parent = parent_; onchange = onchange_;

		the_line = new sf::RectangleShape(sf::Vector2f(dims.x / 3, dims.y));
		the_slider = new sf::RectangleShape(sf::Vector2f(dims.x, 38.f));

		the_line->setFillColor(sf::Color::White);
		the_slider->setFillColor(sf::Color::Cyan);
	}
	VerticalSliderWidget::VerticalSliderWidget(Widget* parent_, sf::Color slider_color, sf::Color line_color, void (*onchange_)(Widget*, float),
		point dims_, point p_) :Widget(dims_, p_) {
		percentage = 0;

		parent = parent_; onchange = onchange_;

		the_line = new sf::RectangleShape(sf::Vector2f(dims.x / 3, dims.y));
		the_slider = new sf::RectangleShape(sf::Vector2f(dims.x, 38.f));

		the_line->setFillColor(line_color);
		the_slider->setFillColor(slider_color);
	}
}