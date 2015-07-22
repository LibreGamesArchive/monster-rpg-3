#ifndef DLL_H
#define DLL_H

#ifdef MONSTERRPG3_WINDOWS
#define MONSTERRPG3_EXPORT __declspec(dllexport)
#else
#define MONSTERRPG3_EXPORT __attribute__((visibility("default")))
#endif

#include <Nooskewl_Engine/brain.h>
#include <Nooskewl_Engine/map_logic.h>

using namespace Nooskewl_Engine;

extern "C" {
	MONSTERRPG3_EXPORT Map_Logic *dll_get_map_logic(std::string map_name);
	MONSTERRPG3_EXPORT Brain *dll_get_brain(std::string options);
}

#endif // DLL_H
