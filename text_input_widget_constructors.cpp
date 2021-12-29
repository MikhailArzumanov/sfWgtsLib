#include "text_input_widget.hpp"
namespace sfWgts {
	TextInputWidget::TextInputWidget(sf::Font& font, int font_size, sf::Color background_color, sf::Color text_color,
		void (*onchange_)(Widget*, std::string), Widget* parent_, std::string placeholder_,
		point dims_, point p_) :Widget(dims_, p_) {
		placeholder = placeholder_;
		parent = parent_; value = ""; onchange = onchange_;

		text = new TextWidget(font, font_size, text_color, placeholder, { 0,0 }, { 0,0 });
		add_child(text);

		background = new sf::RectangleShape({ dims.x, dims.y });
		background->setFillColor(background_color);
	}
}