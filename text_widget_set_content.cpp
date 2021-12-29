#include "text_widget.hpp"
namespace sfWgts {
	void TextWidget::set_content(std::string content_) {
		content = content_;
		text->setString(content);
	}
}