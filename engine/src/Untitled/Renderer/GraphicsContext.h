#pragma once

#include "../Core/Core.h"
#include "Window.h"
#include <pch.h>

namespace Untitled {
  class UT_API GraphicsContext {
  public:
    virtual void init() = 0;
    virtual std::shared_ptr<std::vector<WindowHint>> getWindowHints() = 0;

    static std::unique_ptr<GraphicsContext> create();

  };
}