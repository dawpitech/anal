find_package(Doxygen)
if (DOXYGEN_FOUND)
    doxygen_add_docs(doc
        ./imp_examples.md
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    )
else()
    message(WARNING "Doxygen not found, documentation will not be generated")
endif()
