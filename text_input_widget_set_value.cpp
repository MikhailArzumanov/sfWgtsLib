#include "text_input_widget.hpp"
namespace sfWgts {
	void TextInputWidget::set_value(std::string value_) {
		value = value_;
		if (value != "")
			text->set_content(value);
		else text->set_content(placeholder);
		if (onchange != nullptr)
			onchange(parent, value);
	}
}