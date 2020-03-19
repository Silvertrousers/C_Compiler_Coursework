#!/bin/bash
make clean
make
(./compiler/bin/compiler < ./$1) > ./$2
