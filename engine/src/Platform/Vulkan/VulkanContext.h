#pragma once

#include "Untitled/Renderer/GraphicsContext.h"
#include "Untitled/Renderer/Window.h"

namespace Untitled {
  class VulkanContext : GraphicsContext {
    void init();
    std::shared_ptr<std::vector<WindowHint>> getWindowHints();
  };
}