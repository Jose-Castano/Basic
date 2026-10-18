#pragma once
#include <Mem/Allocator.hpp>
#include <input/input.h>


namespace Basic
{

struct SpriteBatch;
struct FrameInfo;

struct SceneRenderer
{
    SpriteBatch& sprite_batch;
    const FrameInfo& frame_info;
};

struct Scene
{
    DisableCopy(Scene);
    DisableMove(Scene);

    Scene(Mem::Allocator&) {}
    virtual ~Scene() {}

    virtual void update(f32) {}
    virtual void render(SceneRenderer&) {}

    virtual void event(const Event&) {}
};

}
