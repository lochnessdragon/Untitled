#pragma once

#include "Untitled/Renderer/GraphicsContext.h"
#include "Untitled/Renderer/Window.h"

namespace Untitled {
  class VulkanContext : public GraphicsContext {
    public:
    VulkanContext() {}

    void init() override;
    std::shared_ptr<std::vector<WindowHint>> getWindowHints() override;
  };
}