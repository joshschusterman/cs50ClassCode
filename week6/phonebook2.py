import csv

# "with" function will automatically close "file" for you.
with open("phonebook.csv", "a") as file:

    name = input("Name: ")
    number = input("Number: ")

    writer = csv.writer(file)

    writer.writerow([name, number])