#pragma once
#include <pch.h>

#include "../Core/Core.h"

namespace Untitled {
  struct RenderTargetProps {
    int width;
    int height;
  };

  class UT_API RenderTarget {
  public:
    static std::shared_ptr<RenderTarget> create(RenderTargetProps properties);

    virtual void bind() = 0;
    virtual glm::vec2 getSize() = 0;
  };
}