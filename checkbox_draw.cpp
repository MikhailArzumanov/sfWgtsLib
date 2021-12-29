#include "checkbox_widget.hpp"
#include "window.hpp"
namespace sfWgts {
	void CheckboxWidget::draw(point shift) {
		(shift + p) >> box;
		window->draw(*box);
		if (value) {
			delete[] left_line, right_line;
			init_lines(shift + p);
			window->draw(left_line, 2, sf::Lines);
			window->draw(right_line, 2, sf::Lines);
		}
		Widget::draw(shift);
	}
}