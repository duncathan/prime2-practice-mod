#pragma once

#include "imgui.h"

#define BITFIELD_CHECKBOX(label, bf, ...)                                                                              \
  {                                                                                                                    \
    bool b = (bf);                                                                                                     \
    if (ImGui::Checkbox(label, &b)) {                                                                                  \
      (bf) = b;                                                                                                        \
      __VA_ARGS__                                                                                                      \
    }                                                                                                                  \
  }


namespace ImHelpers {
  void ClampCurrentWindowToScreen();
  bool TreeNodeNavLeft(const char *label);
  bool TreeNodeNavLeft(const char *str_id, const char *fmt, ...);
}
