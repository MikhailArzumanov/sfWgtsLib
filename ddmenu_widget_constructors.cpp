#include "ddmenu_widget.hpp"
namespace sfWgts {
	DDMenuWidget::DDMenuWidget() {}
	DDMenuWidget::DDMenuWidget(int vals_amount_, std::string* vals_, std::string plchldr_,
		sf::Font& font_, int font_size_, sf::Color color, sf::Color bgrnd_color,
		Widget* parent_, void (*onchange_)(Widget*, std::string), int tile_height_,
		point dims_, point p_) :Widget(dims_, p_) {
		is_collapsed = true;
		parent = parent_; onchange = onchange_;

		tile_height = tile_height_; font = &font_;
		vals = vals_; vals_amount = vals_amount_; plchldr = plchldr_;

		expand_button = new ButtonWidget(font_, font_size_, color, plchldr, ddmenu_event_shwhd, this, bgrnd_color, dims, { 0,0 });
		children.push_back(expand_button);

		options = new DDMenuOptionWidget * [vals_amount];
		for (int i = 0; i < vals_amount; i++) {
			options[i] = new DDMenuOptionWidget(font_, font_size_, color, bgrnd_color, i, vals[i], this,
				point{ dims.x, (float)tile_height }, point{ 0.f, dims.y + tile_height * i });
			options[i]->set_visibility(false);
			children.push_back(options[i]);
		}

	}
}