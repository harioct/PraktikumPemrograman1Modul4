a=int(input("Masukkan Bilangan: "))
if a>=100:
    print("Anda Menginput Melebihi Limit Bilangan")
elif a>=20 and a<100:
    print("Puluhan")
elif a>=10 and a<20:
    print("Belasan")
elif a>0 and a<10:
    print("Satuan")
elif a==0:
    print("Nol")