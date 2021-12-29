#include "checkbox_widget.hpp"
namespace sfWgts {
	void CheckboxWidget::init_lines(point p) {
		left_line = new sf::Vertex[2];
		left_line[0].position = sf::Vector2f({ p.x,p.y - dims.y / 4.f });
		left_line[1].position = sf::Vector2f({ p.x + dims.x / 2.f,p.y + dims.y / 2.f });
		right_line = new sf::Vertex[2];
		right_line[0].position = sf::Vector2f({ p.x + dims.x / 2.f,p.y + dims.y / 2.f });
		right_line[1].position = sf::Vector2f({ p.x + dims.x, p.y - dims.y / 2.f });
		for (int i = 0; i < 2; i++) {
			left_line[i].color = sf::Color::Black;
			right_line[i].color = sf::Color::Black;
		}
	}
}