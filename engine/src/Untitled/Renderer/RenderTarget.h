#pragma once
#include <pch.h>

#include "../Core/Core.h"

namespace Untitled {
  class UT_API RenderTarget {
  public:
    static std::shared_ptr<RenderTarget> create(int width, int height);

    virtual void bind();
    virtual glm::vec2 getSize();
  };
}