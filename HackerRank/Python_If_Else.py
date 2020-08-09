#!/bin/python3

import math
import os
import random
import re
import sys

if __name__ == '__main__':
    n = int(input().strip())

if n % 2 != 0:
    print ("Weird")

if (n % 2 == 0 and 2 <= n and 5 >= n):
    print ("Not Weird")

if (n % 2 == 0 and 6 <= n and 20 >= n):
    print ("Weird")

if (n % 2 == 0 and n > 20):
    print ("Not Weird")
