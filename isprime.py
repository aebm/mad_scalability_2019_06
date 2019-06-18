#!/usr/bin/env python

import sys

def print_factors(number):
    for factor in xrange(1, number + 1):
        if is_divisible(number, factor):
            print ' %d' % factor,
    print ''


def  is_divisible(x, y):
    return x % y == 0

def is_prime(number):
    for factor in xrange(2, number):
        if is_divisible(number, factor):
            return False
    return True

def main():
    number = int(sys.argv[1])
    if is_prime(number):
        print '%d is prime. Factors: 1 %d' % (number, number)
        return
    print '%d is composite. Factors:' % number,
    print_factors(number)

if __name__ == '__main__':
    main()
