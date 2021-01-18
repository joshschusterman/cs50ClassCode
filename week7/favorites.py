# This program looks at a csv file that contains responses about favorite TV shows, determines how many "votes"
# each show got, and prints them out in order of most popular to least.

import csv

titles = {}

with open("Favorite TV Shows - Form Responses 1.csv", "r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        title = row["title"].strip().upper()
        if title in titles:
            titles[title] += 1
        else:
            titles[title] = 1

# We COULD pass this function as the key argument below, instead of using lambda.
#def f(title):
#    return titles[title]

for title in sorted(titles, key=lambda title: titles[title], reverse=True):
    print(title, titles[title])



# NEW THINGS LEARNED
# 1. DictReader always looks at the first row in the file, split it by the commas, and assumes the first word is
# the first column. Great for (properly formatted) spreadsheets/csv files.
# 2. next(reader) - next skips to the next row (in this case skipping our headers). Don't need with DictReader though.
# 3. print(row["title"]) # can use "title" (or any header) because we're using DictReader (see #1 above).
# 4. Reminder - strip to get rid of white space on either side of the text.
# 5. If you want to index into a dictionary using a key that doesn't exist yet, you can do it IF you give it a value right then.
# It's not enough to just name it, and of course you can't increment it (until it exists).
# 6. ANOTHER way to do line 9-10 is this...
# if title not in titles:
#       titles[title] = 0
# titles[title] += 1
# 7. With Python, you can pass a function as an argument for another function. E.G. sorted(titles, key=f).
# 9. NOTE: when passing a function as an argument, only pass in the name, don't try to call the function, such as f().
# 10. lambda tells Python "give me an anonymous function (no name)". And lambda just requires an argument (in this
# case it's 'title'), a colon, and a return value (in this case titles[title]). DO NOT need to include 'return'.
# This is useful if the function would want to pass as an argument is super short and therefore a waste of typing.