#pragma once

#include "Untitled/Renderer/GraphicsContext.h"
#include "Untitled/Renderer/Window.h"

namespace Untitled {
  class OpenGLContext : public GraphicsContext {
    public:
    OpenGLContext() {}

    void init() override;
    std::shared_ptr<std::vector<WindowHint>> getWindowHints() override;
  };
}