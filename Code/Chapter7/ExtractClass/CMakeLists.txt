file(GLOB MAIN_SRCS
 "*.[hH]"
 "*.[cC]"
 "*.[hc]pp"
 "*.[hc]xx"
 "*.cc")

add_executable(ExtractClass ${MAIN_SRCS})
set_target_properties(ExtractClass PROPERTIES FOLDER "Chapter7")