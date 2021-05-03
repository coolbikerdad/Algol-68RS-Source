''' reformat ato68c error messages into something that Emacs likes '''
import re, sys
for line in sys.stdin.readlines():
    line = re.sub(r'"(.+?)", line ([0-9]+): (.*) [(]at character ([0-9]+)[)]', r'\1:\2:\4: \3', line)
    print(line, end='')

    
