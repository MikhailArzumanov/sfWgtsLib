#include "button_widget.hpp"
namespace sfWgts {
	void ButtonWidget::on_click(point mouse) {
		if (onclick != nullptr)
			onclick(parent);
	}
}