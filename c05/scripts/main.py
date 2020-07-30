#!/usr/bin/python

import test
import sys

argv = sys.argv

argv.pop(0)
print argv
pv = argv.pop()
ev = argv.pop()
path = argv

test.checkOut(path, pv, ev)