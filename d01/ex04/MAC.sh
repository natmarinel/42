#!/bin/sh
ifconfig -a | grep "ether" | cut -d r -f2- | tr -d " "
