#include "animated_widget.hpp"
namespace sfWgts {
	AnimatedWidget::AnimatedWidget() {
		sprite = nullptr;
	}
	AnimatedWidget::AnimatedWidget(sf::Sprite* sprite_, point p_, point dims_, int framerate_) {
		sprite = sprite_; p = p_;
		dims = dims_;
		sf::IntRect rect = sprite_->getTextureRect();
		frames_amount = rect.width / dims.x;
		states_amount = rect.height / dims.y;
		framerate = framerate_;

		framecounter = 0;
		current_frame = 0;
		current_state = 0;
	}
}