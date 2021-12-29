#pragma once
#include "widget.hpp"
#include "text_widget.hpp"
namespace sfWgts {
	class TextInputWidget : public Widget {
	protected:
		Widget* parent;
		TextWidget* text;
		sf::RectangleShape* background;
		std::string value;
		std::string placeholder;
		void (*onchange)(Widget*, std::string);

		TextInputWidget() {};
	public:
		TextInputWidget(sf::Font& font, int font_size, sf::Color background_color, sf::Color text_color,
			void (*onchange_)(Widget*, std::string), Widget* parent_, std::string placeholder_, point dims_, point p_);
		virtual void on_click(point mouse) {}
		virtual void keypressed(sf::Event key_event);
		virtual void set_value(std::string value_);
		virtual void draw(point shift);
	};
}