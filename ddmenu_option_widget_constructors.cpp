#include "ddmenu_option_widget.hpp"
namespace sfWgts {
	DDMenuOptionWidget::DDMenuOptionWidget() {}
	DDMenuOptionWidget::DDMenuOptionWidget(sf::Font& font_, int font_size_, sf::Color color, sf::Color bgrnd_color,
		int index_, std::string value_, DDMenuWidget* parent_, point dims_, point p_)
		:ButtonWidget(font_, font_size_, color, value_, nullptr, parent_, bgrnd_color, dims_, p_) {

		point pos = dims_ / 2.f;
		sf::FloatRect frect = text->getTextRect();
		pos -= point{ frect.width,frect.height } / 2.f;
		text->set_p(pos);

		value = value_; index = index_;
	}
}