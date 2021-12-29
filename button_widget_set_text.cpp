#include "button_widget.hpp"
namespace sfWgts {
	void ButtonWidget::set_text(std::string text_str) {
		text->set_content(text_str);
		point pos = dims / 2.f;
		sf::FloatRect frect = text->getTextRect();
		pos -= point{ frect.width,frect.height } / 2.f;
		text->set_p(pos);
	}
}