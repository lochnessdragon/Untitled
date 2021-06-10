#pragma once

#include "Untitled/Renderer/GraphicsContext.h"
#include "Untitled/Renderer/Window.h"

namespace Untitled {
  class VulkanContext : public GraphicsContext {
    public:
    VulkanContext() {}

    virtual void init() override;
    virtual std::shared_ptr<std::vector<WindowHint>> getWindowHints() override;
  };
}