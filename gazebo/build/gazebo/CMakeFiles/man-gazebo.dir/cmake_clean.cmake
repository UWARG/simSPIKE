FILE(REMOVE_RECURSE
  "CMakeFiles/man-gazebo"
  "gazebo.1.gz"
  "gazebo.1"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/man-gazebo.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
