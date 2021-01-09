# We are translating this (speller) from what we did in pset5.

def check(word):
    if word.lower() in words:
        return True
    else:
        return False

words = set()
def load(dictionary):
    file = open(dictionary, "r")
    for line in file:
        words.add(line.rstrip()) # Reminder - rstrip removes white space after word
    file.close()
    return True

def size():
    return len(words)

def unload():
    return True
    # So this function is unnecessary because we don't deal with
    # memory management in Python!