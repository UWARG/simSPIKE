         N   M      .���������YReb���N�B�p��7+            u#!/bin/sh

find . -name "*.cc" -exec cppcheck --enable=all -q -I ./src {} \;
