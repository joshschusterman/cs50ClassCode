from PIL import Image, ImageFilter

before = Image.open("Adi.bmp")
after = before.filter(ImageFilter.BoxBlur(10)) # Number is pixel radius
after.save("out.bmp")

# Showing how we can complete pset4 in 4 lines of code with Python