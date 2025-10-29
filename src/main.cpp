#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MyMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) return false;

		auto myButton = CCMenuItemExt::createSpriteExtraWithFrameName("GJ_likeBtn_001.png", 1.f, [](auto){
			FLAlertLayer::create("Geode", "Hello from my custom mod!", "OK")->show(
		});
	    myButton->setID("my-button"_spr);

		auto menu = this->getChildByID("bottom-menu");
		menu->addChild(myButton);
		menu->updateLayout();
		return true;
	}
};
