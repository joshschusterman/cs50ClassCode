people = {
    "Brian": "617-495-1000",
    "David": "949-468-2750"
}

name = input("Name: ")
if name in people:
    print(f"Number: {people[name]}")