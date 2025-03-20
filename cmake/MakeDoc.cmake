find_package(Doxygen)
if (DOXYGEN_FOUND)
    set(DOXYGEN_GENERATE_TREEVIEW YES)
    set(DOXYGEN_DISABLE_INDEX NO)
    set(DOXYGEN_FULL_SIDEBAR NO)
    set(DOXYGEN_HTML_EXTRA_STYLESHEET
            doxygen-awesome-css/doxygen-awesome.css
            doxygen-awesome-css/doxygen-awesome-sidebar-only.css
            doxygen-awesome-css/doxygen-awesome-sidebar-only-darkmode-toggle.css
    )
    set(DOXYGEN_HTML_EXTRA_FILES
            doxygen-awesome-css/doxygen-awesome-darkmode-toggle.js
    )
    set(DOXYGEN_HTML_HEADER
            header.html
    )
    set(DOXYGEN_HTML_COLORSTYLE LIGHT)
    doxygen_add_docs(doc
        ./imp_examples.md
        ${CMAKE_CURRENT_SOURCE_DIR}/include
    )
else()
    message(WARNING "Doxygen not found, documentation will not be generated")
endif()
