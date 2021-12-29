#pragma once
#include "widget.hpp"
#include "text_widget.hpp"
#include "rect_widget.hpp"
namespace sfWgts {
	class ButtonWidget : public RectWidget {
	protected:
		TextWidget* text;
		Widget* parent;
		void (*onclick)(Widget*);

		ButtonWidget();
	public:
		void set_text(std::string text_str);
		ButtonWidget(sf::Font& font_, int font_size_, sf::Color font_color, std::string content_,
			void (*onclick_)(Widget*), Widget* parent_, sf::Color rect_color, point dims_, point p_);
		virtual void on_click(point mouse);
	};
}