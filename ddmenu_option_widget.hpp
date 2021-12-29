#pragma once
#include "button_widget.hpp"
#include "ddmenu_widget.hpp"
namespace sfWgts {
	class DDMenuWidget;

	class DDMenuOptionWidget : public ButtonWidget {
	protected:
		std::string value;
		int index;

	public:
		DDMenuOptionWidget();
		DDMenuOptionWidget(sf::Font& font_, int font_size_, sf::Color color, sf::Color bgrnd_color,
			int index_, std::string value_, DDMenuWidget* parent_, point dims_, point p_);
		virtual void on_click(point mouse);
	};
}