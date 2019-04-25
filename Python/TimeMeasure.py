import random
import time as t

# CAN ALSO BE USED TO MEASURE SOME CODE RUNTIME IF DESIRED
# COMPATIBLE WITH ALL PYTHON VERSIONS
# use as wish :) @xtealer

number = []
random.seed()

# STARTS TIMER
start = t.time()
# ---------------------------your-code-here------------------------------

Count = 25000000
for x in range(Count):
    number.append(random.randrange(1000000000, 9999999999))
    print('NUMBER[%lu] = %lu' % (x + 1, number[x]))

# ------------------------------------------------------------------------
stop = t.time()
# STOPS TIMER

finalTime = stop - start
print('\n>>> %.2f SECONDS TAKEN! ' % (finalTime))
