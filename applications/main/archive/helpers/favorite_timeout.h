#pragma once

#include <furi.h>
#include <gui/scene_manager.h>
#include <gui/view_dispatcher.h>

bool process_favorite_launch(char** p);

typedef struct {
    ViewDispatcher* view_dispatcher;
    SceneManager* scene_manager;
} FavoriteTImeoutCtx;

void favorite_timeout_callback(void* _ctx);

void favorite_timeout_run(ViewDispatcher* view_dispatcher, SceneManager* scene_manager);
