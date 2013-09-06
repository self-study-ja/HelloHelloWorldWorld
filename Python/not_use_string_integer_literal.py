# -*- coding: utf-8 -*-

# First object create
true = bool(object)
false = bool()

# Number Literal create
zero = int(false)
one = int(true)
two = sum([one, one])
three = sum([two, one])
four = two * two
five = sum([three, two])
six = three * two
seven = sum([four, three])
eight = two * two * two
nine = three * three


# String and Integer lizer
def sz(*args):
    strings = str()
    for x in args:
        strings += str(x)
    return int(strings)


H = sz(seven, two)
e = sz(one, zero, one)
l = sz(one, zero, eight)
o = int(str(one) * three)
comma = int(str(four) * two)
space = sz(three, two)
W = sz(eight, seven)
r = sz(one, one, four)
d = sz(one, zero, zero)
dot = sz(four, six)


def chrize(*args):
    strings = str()
    for x in args:
        strings += chr(x)
    return strings


print chrize(H, e, l, l, o, comma, space, W, o, r, l, d, dot)

# Helo,(space)Wrd.
# >> result
#     H  e    l    l    o    ,
# >> 72, 101, 108, 108, 111, 44,
#   (Space)
# >> 32,
# W     o   r     l    d   .
# 87, 111, 114, 108, 100, 46
