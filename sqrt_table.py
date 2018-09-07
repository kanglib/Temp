# -*- coding: euc-kr -*-

from __future__ import division, print_function
from math import sqrt


def print_header():
    print('\n ', end='')
    for i in xrange(10):
        print('     {}'.format(i), end='')
    print()


print('제곱근표')

print_header()
for i in xrange(100, 1000, 10):
    print(i/100, end='')
    for j in xrange(10):
        f = sqrt((i+j) / 100)
        print(' {:.3f}'.format(f), end='')
    print()

print_header()
for i in xrange(10, 100):
    print('', i, end='')
    for j in xrange(10):
        f = sqrt((i*10+j) / 10)
        print(' {:.3f}'.format(f), end='')
    print()
