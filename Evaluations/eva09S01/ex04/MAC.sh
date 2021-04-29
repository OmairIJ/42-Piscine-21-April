#! /bin/sh
ifconfig -a | grep -o -E -i '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'
