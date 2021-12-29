#include "ddmenu_widget.hpp"
namespace sfWgts {
	void DDMenuWidget::show_hide() {
		if (is_collapsed) {
			dims += point{ 0.f, (float)vals_amount * tile_height };
			for (int i = 0; i < vals_amount; i++) {
				options[i]->set_visibility(true);
			}
		}
		else {
			dims -= point{ 0.f, (float)vals_amount * tile_height };
			for (int i = 0; i < vals_amount; i++) {
				options[i]->set_visibility(false);
			}
		}
		is_collapsed = !is_collapsed;
	}
}