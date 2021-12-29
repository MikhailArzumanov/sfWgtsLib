#pragma once
#include "widget.hpp"
namespace sfWgts {
	class VerticalSliderWidget : public Widget {
		void (*onchange)(Widget*, float);
		sf::RectangleShape* the_slider;
		sf::RectangleShape* the_line;
	protected:
		Widget* parent;
		float percentage;
	public:
		float get_precentage() { return percentage; };
		void on_click(point mouse);
		void draw(point shift);
		VerticalSliderWidget();
		VerticalSliderWidget(Widget* parent_, void (*onchange_)(Widget*, float), point dims_, point p_);
		VerticalSliderWidget(Widget* parent_, sf::Color slider_color, sf::Color line_color, void (*onchange_)(Widget*, float), point dims_, point p_);
	};
}