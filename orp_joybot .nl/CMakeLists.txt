cmake_minimum_required(VERSION 3.25.1)
project(orp_joybot.eng)

add_executable(dctest1 src/dctest1.cpp) # Code om de dc motor en directie te testen.

add_executable(main src/main.cpp) # main code.
add_executable(joytest src/testjoy.cpp) # code om de joystick controller te testen.
target_link_libraries(main -lwiringPi) # link main aan wiringPi.
target_link_libraries(dctest1 -lwiringPi) #link main aan dctest1.
