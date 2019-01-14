workspace "Cards"
   configurations { "Debug", "Release" }
   language "C++"
   cppdialect "C++14"

   filter "configurations:Debug"
      defines { "DEBUG" }
      symbols "On"

   filter "configurations:Release"
      defines { "NDEBUG" }
      optimize "On"

project "Cards"
   kind "StaticLib"

   files { "src/**.hpp", "src/**.cpp" }

project "CardsUnitTests"
   kind "ConsoleApp"
   includedirs { "src",
                 "../GUnit/include",
                 "../GUnit/libs/googletest/googletest/include",
                 "../GUnit/libs/googletest/googlemock/include" }
   libdirs { "../GUnit/libs/googletest/googletest",
             "../GUnit/libs/googletest/googlemock" }
   links { "Cards",
           "gmock",
           "gtest" }
   files { "tests/**.hpp", "tests/**.cpp" }
