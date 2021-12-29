#include "progress_bar_widget.hpp"
#include "window.hpp"
namespace sfWgts {
	void ProgressBarWidget::draw(point shift) {
		(shift + p) >> bground;
		(shift + p + paddings) >> the_bar;
		the_bar->setScale(ratio, 1.0f);
		window->draw(*bground);
		window->draw(*the_bar);
		Widget::draw(shift);
	}
}