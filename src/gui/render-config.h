#ifndef RENDER_CONFIG_H
#define RENDER_CONFIG_H

#include <string>

namespace example {

typedef struct {
  // framebuffer
  int width;
  int height;

  // camera
  float eye[3];
  float up[3];
  float look_at[3];
  float fov;  // vertical fov in degree.

  // render pass
  int pass;
  int max_passes;

  // Scene info
  float scene_scale;

} RenderConfig;

/// Loads config from JSON file.
//bool LoadRenderConfig(example::RenderConfig *config, const char *filename);

}  // namespace

#endif  // RENDER_CONFIG_H
