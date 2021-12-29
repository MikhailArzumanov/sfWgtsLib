#include "checkbox_widget.hpp"
namespace sfWgts {
	void CheckboxWidget::on_click(point mouse) {
		setValue(!value);
	}
}