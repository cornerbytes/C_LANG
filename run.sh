#!/bin/bash

var=$1
var2=${var%.*}

gcc $1 -o ./output/$var2 && ./output/./$var2

