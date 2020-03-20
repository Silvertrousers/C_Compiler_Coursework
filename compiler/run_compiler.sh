#!/bin/bash
make clean
make
(./bin/compiler < ./$1.c) > ./$1.s
