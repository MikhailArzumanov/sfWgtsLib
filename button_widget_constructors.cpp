#include "button_widget.hpp"
namespace sfWgts {
	ButtonWidget::ButtonWidget() {}
	ButtonWidget::ButtonWidget(sf::Font& font_, int font_size_, sf::Color font_color, std::string content_,
		void (*onclick_)(Widget*), Widget* parent_,
		sf::Color rect_color, point dims_, point p_) :RectWidget(dims_, p_, rect_color) {

		text = new TextWidget(font_, font_size_, font_color, "", { 0,0 }, { 0,0 });
		set_text(content_);
		add_child(text);

		onclick = onclick_;
		parent = parent_;
	}
}