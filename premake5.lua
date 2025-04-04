workspace "aurora_v"
configurations { "Debug", "Release" }

project "aurora_v"
kind "ConsoleApp"
language "C"
targetdir "./bin/%{cfg.buildcfg}"

files { "./src/**.h", "./src/**.c" }
