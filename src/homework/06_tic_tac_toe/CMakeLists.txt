add_library(hw_tic_tac_toe_library 
    "tic_tac_toe.cpp" 
    "tic_tac_toe.h"
    "tic_tac_toe_3.cpp"
    "tic_tac_toe_3.h"
    "tic_tac_toe_4.cpp"
    "tic_tac_toe_4.h"
    "tic_tac_toe_manager.cpp"
    "tic_tac_toe_manager.h"
)

add_executable(hw_tic_tac_toe_exe "main.cpp")
target_link_libraries(hw_tic_tac_toe_exe hw_tic_tac_toe_library)