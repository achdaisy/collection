#!/bin/bash

max_pid=$(cat /proc/sys/kernel/pid_max)
echo "Maximum value of the process ID is: $max_pid"
