#pragma once

#include "../Core/Core.h"
#include "Window.h"
#include <pch.h>

namespace Untitled {
  class UT_API GraphicsContext {
  public:
    virtual void init();
    virtual std::shared_ptr<std::vector<WindowHint>> getWindowHints();

    static std::unique_ptr<GraphicsContext> create();

  };
}