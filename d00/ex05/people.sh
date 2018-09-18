#!/bin/sh
ldapsearch -x -LLL "uid=z*" | grep "^cn:" | sort -r -f | cut -d " " -f2-
