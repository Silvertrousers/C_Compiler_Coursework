#!/bin/bash
#make clean
#make
(./translator/bin/c_translator < ./$1) > ./$2
