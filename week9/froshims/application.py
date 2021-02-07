from cs50 import SQL
from flask import Flask, redirect, render_template, request

app = Flask(__name__)

db = SQL("sqlite:///froshims.db")

SPORTS = [
    "Dodgeball",
    "Flag Football",
    "Soccer",
    "Volleyball",
    "Ultimate Frisbee"
]

@app.route("/")
def index():
    return render_template("index.html", sports=SPORTS) # Flask requires a name, not just a single arg.

@app.route("/register", methods=["POST"])
def register():
    name = request.form.get("name")
    if not name:
        return render_template("error.html", message="Missing name")
    sport = request.form.get("sport")
    if not sport:
        return render_template("error.html", message="Missing sport")
    if sport not in SPORTS:
        return render_template("error.html", message="Invalid sport")

    db.execute("INSERT INTO registrants (name, sport) VALUES(?, ?)", name, sport)

    return redirect("/registrants")

@app.route("/registrants")
def registrants():
    registrants = db.execute("SELECT * FROM registrants")
    return render_template("registrants.html", registrants=registrants)


# SOME NOTES HERE:
# 1. Rather than putting all the sports as options in the html, we're using a list.
# 2. The list gets distributed via the render_template function, as the second argument.
# 3. THEN we can use is in the register function to make sure what is selected is in the list.
# 4. Otherwise, as David Malan demonstrated, we could hack the html with inspect, change a sport name,
# and that is what would get sent to our database.
#
#
#