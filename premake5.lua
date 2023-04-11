-- premake5.lua
workspace "Acoupst"
   architecture "x64"
   configurations { "Debug", "Release", "Dist" }
   startproject "Acoupst"

outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"

include "AcoupstExternal.lua"
include "Acoupst"