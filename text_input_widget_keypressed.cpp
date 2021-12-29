#include "text_input_widget.hpp"
namespace sfWgts {
	void TextInputWidget::keypressed(sf::Event key_event) {
		if (sf::Keyboard::A <= key_event.key.code && key_event.key.code <= sf::Keyboard::Z) {
			char c = 'a' + (key_event.key.code - sf::Keyboard::A);
			std::string new_val = value + c;
			set_value(new_val);
		}
		else if (key_event.key.code == sf::Keyboard::Backspace) {
			std::string new_val = value.substr(0, value.length() - 1);
			set_value(new_val);
		}
	}
}