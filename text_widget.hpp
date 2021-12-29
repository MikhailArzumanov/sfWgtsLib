#pragma once
#include "widget.hpp"
namespace sfWgts {
	class TextWidget : public Widget {
	protected:
		TextWidget() {}
		std::string content;
		sf::Text* text;

		int	 font_size;
		sf::Font* font;
	public:
		TextWidget(sf::Font& font_, int font_size_, sf::Color color, std::string content_, point dims_, point p_);
		virtual void draw(point shift);
		virtual void on_click(point mouse) {}
		virtual void set_content(std::string content_);
		void set_p(point p_);
		sf::FloatRect getTextRect();
	};
}