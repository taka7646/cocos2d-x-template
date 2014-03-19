//
//  ___FILENAME___
//  ___PROJECTNAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#include "___FILEBASENAME___.h"

USING_NS_CC;


bool ___FILEBASENAME___::init(){
    if (!Layer::init()) {
        return false;
    }

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    auto label = LabelTTF::create("Hello ___FILEBASENAME___", "Arial", 24);

    // position the label on the center of the screen
    label->setPosition(Point(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - label->getContentSize().height));

    this->addChild(label, 1);

    // ここで初期スプライトなど


    // 毎フレームupdateメソッドを呼ぶ。
    this->scheduleUpdate();
    return true;
}


void ___FILEBASENAME___::update(float delta){
}
