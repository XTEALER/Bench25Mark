import random
import time as t

# CAN ALSO BE USED TO MEASURE SOME CODE RUNTIME IF DESIRED
# COMPATIBLE WITH ALL PYTHON VERSIONS
# use as wish :) @xtealer

Count = 25000000
number = 0
random.seed()

# STARTS TIMER
start = t.time()
# ---------------------------your-code-here------------------------------

for x in range(Count):
    number = random.randrange(1000000000, 9999999999)
    print('NUMBER[%lu] = %lu' % (x + 1, number))

# ------------------------------------------------------------------------
stop = t.time()
# STOPS TIMER

finalTime = stop - start
print('\n>>> %.2f SECONDS TAKEN (PYTHON)! ' % (finalTime))
