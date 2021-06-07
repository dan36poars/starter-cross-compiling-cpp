# don´t include implementation file in add_library
# if it is a template class

# if you compile for windows replace SHARED by
# STATIC parameter

add_library(Include 
    STATIC
    Vector.cpp
)