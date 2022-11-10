detik=int(input(""))
h=detik/86400
j=(detik/3600)%24
m=(detik/60)%60
d=detik%60
if(detik<=3600):
    print("%.2d:%.2d:%.2d\n"%(j,m,d))
elif(detik>3600 and detik<86400):
    print("%.2d:%.2d:%.2d\n"%(j,m,d))
elif(detik>=86400):
    print("%d hari %.2d:%.2d:%.2d\n"%(h,j,m,d))