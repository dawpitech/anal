if (PROJECT_IS_TOP_LEVEL)
    add_executable(dummy
        main.cpp
    )
    target_link_libraries(dummy anal)
endif ()
