#include "animated_widget.hpp"
namespace sfWgts {
	void AnimatedWidget::draw(point shift) {
		sprite->setTextureRect(sf::IntRect(current_frame * dims.x,
			current_state * dims.y,
			dims.x, dims.y));
		ImageWidget::draw(shift);
	}
}