/**********************************************************\

  Auto-generated OOCaller.cpp

  This file contains the auto-generated main plugin object
  implementation for the OOCaller project

\**********************************************************/
#ifndef H_OOCallerPLUGIN
#define H_OOCallerPLUGIN

#include "PluginWindow.h"
#include "PluginEvents/MouseEvents.h"
#include "PluginEvents/AttachedEvent.h"

#include "PluginCore.h"

class OOCaller : public FB::PluginCore
{
public:
    static void StaticInitialize();
    static void StaticDeinitialize();

public:
    OOCaller();
    virtual ~OOCaller();

public:
    void onPluginReady();
    virtual FB::JSAPIPtr createJSAPI();
    virtual bool IsWindowless() { return false; }

    BEGIN_PLUGIN_EVENT_MAP()
        EVENTTYPE_CASE(FB::MouseDownEvent, onMouseDown, FB::PluginWindow)
        EVENTTYPE_CASE(FB::MouseUpEvent, onMouseUp, FB::PluginWindow)
        EVENTTYPE_CASE(FB::MouseMoveEvent, onMouseMove, FB::PluginWindow)
        EVENTTYPE_CASE(FB::MouseMoveEvent, onMouseMove, FB::PluginWindow)
        EVENTTYPE_CASE(FB::AttachedEvent, onWindowAttached, FB::PluginWindow)
        EVENTTYPE_CASE(FB::DetachedEvent, onWindowDetached, FB::PluginWindow)
    END_PLUGIN_EVENT_MAP()

    /** BEGIN EVENTDEF -- DON'T CHANGE THIS LINE **/
    virtual bool onMouseDown(FB::MouseDownEvent *evt, FB::PluginWindow *);
    virtual bool onMouseUp(FB::MouseUpEvent *evt, FB::PluginWindow *);
    virtual bool onMouseMove(FB::MouseMoveEvent *evt, FB::PluginWindow *);
    virtual bool onWindowAttached(FB::AttachedEvent *evt, FB::PluginWindow *);
    virtual bool onWindowDetached(FB::DetachedEvent *evt, FB::PluginWindow *);
    /** END EVENTDEF -- DON'T CHANGE THIS LINE **/
};
typedef boost::shared_ptr<OOCaller> OOCallerPtr;
typedef boost::weak_ptr<OOCaller> OOCallerWeakPtr;


#endif

