#include "rendering_interface.hpp"
#include <SDL3/SDL_gpu.h>
#include <SDL3/SDL_video.h>


// https://wiki.libsdl.org/SDL3/CategoryGPU
void RenderInterface::Init()
{
    SDL_GPUDevice* gpuDevice = SDL_CreateGPUDevice(SDL_GPU_SHADERFORMAT_SPIRV, false, "vulkan");
    SDL_Window* window = SDL_CreateWindow("Test", 100, 100, SDL_WINDOW_VULKAN);

    SDL_ClaimWindowForGPUDevice(gpuDevice, window);

    // SDL_GPUShader* gpuShader = SDL_CreateGPUShader(gpuDevice, )
    // SDL_CreateGPUBuffer(SDL_GPUDevice *device, const SDL_GPUBufferCreateInfo *createinfo)
}