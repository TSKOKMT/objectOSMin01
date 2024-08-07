#pragma once

#include "ofMain.h"

//screen
#include "vipGrid.h"
#include "slideGrid.h"
#include "pushGrid.h"
#include "emergeScreen.h"

//graphic
#include "badMode.h"
#include "nuWit.h"
#include "togeToge.h"

//video
#include "videoCloud.h"

//word
#include "wordCloud.h"

//palette
#include "colorCloud.h"

//chrome
#include "twoTone.h"
#include "colorWorld.h"

//cover
#include "flashCover.h"
#include "oddCover.h"
#include "pikaCover.h"
#include "blackCover.h"

class objectOS {

public:
    objectOS();
    
    void draw(ofRectangle frame_, float time_);
    
    float newTime_ = 0;
    
    int screenIndex = 0;
    int moduleIndex = 0;
    int paletteIndex = 0;
    int chromeIndex = 0;
    int coverIndex = 0;
    
    int frameRate = -1;
    int paletteShift = 0;
    float screenDelay = 0;
    float paletteShiftTerm = -1;
    
    //module
    void previousGraphic();
    void nextGraphic();
    
    //color
    void setColorNothing();
    void setColorMono();
    void setColorRGBTwo();
    void setColorRGBWorld();
    void setColorSakamotoTwo();
    void setColorSakamotoWorld();
    void setColorIkkoTwo();
    void setColorIkkoWorld();
    
private:
    float previousTime = 0;
    
    //screen
    vipGrid myVipGrid;
    slideGrid mySlideGrid;
    pushGrid myPushGrid;
    emergeScreen myEmergeScreen;
    
    //module
    badMode myBadMode;
    nuWit myNuWit;
    togeToge myTogeToge;
    
    //palette
    colorCloud myColorCloud;
    
    //chrome
    twoTone myTwoTone;
    colorWorld myColorWorld;
    
    //cover
    flashCover myFlashCover;
    oddCover myOddCover;
    pikaCover myPikaCover;
    blackCover myBlackCover;
};
