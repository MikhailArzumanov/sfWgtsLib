#include "image_button_widget.hpp"
#include <iostream>
namespace sfWgts {
	ImageButtonWidget::ImageButtonWidget() {}
	ImageButtonWidget::ImageButtonWidget(sf::Sprite* sprite_, point p_, point frame_size, int framerate_,
		void (*onclick_)(Widget*), Widget* parent_) :AnimatedWidget(sprite_, p_, frame_size, framerate_) {
		onclick = onclick_; parent = parent_;
	}
}