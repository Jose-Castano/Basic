#pragma once
#include <Mem/Allocator.hpp>
#include <input/input.h>


namespace Basic
{

struct SpriteBatch;
struct FrameInfo;

struct SceneRenderer
{
    const FrameInfo& frame_info;
    SpriteBatch& sprite_batch;
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
