#include "text_widget.hpp"
namespace sfWgts {
	sf::FloatRect TextWidget::getTextRect() {
		return text->getLocalBounds();
	}
}