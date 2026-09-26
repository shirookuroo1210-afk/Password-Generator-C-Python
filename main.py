import random
import string

kolam_karakter = string.ascii_lowercase + string.ascii_uppercase + string.digits + string.punctuation
panjang_password = 12
password = ""

for i in range(panjang_password):
    karakter_acak = random.choice(kolam_karakter)
    password = password + karakter_acak

print(password)