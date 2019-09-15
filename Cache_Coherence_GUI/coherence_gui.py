from tkinter import *

file1 = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/core_1_log.txt", "r")
log_1 = file1.readline()
file1.close()

file2 = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/core_2_log.txt", "r")
log_2 = file2.readline()
file2.close()

file3 = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/core_3_log.txt", "r")
log_3 = file3.readline()
file3.close()

file4 = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/core_4_log.txt", "r")
log_4 = file4.readline()
file4.close()

def update():
    #print ('Send')/Users/danicast/Desktop/coherence_gui.py
    window.after(500, update)
    cache1d.delete(0, END)
    cache1d.insert(END,2)

    # ACTUALIZA MEMORIA
    filem = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/memory_file.txt", "r")
    linem = filem.readline()
    memory.delete(0, END)
    while linem:
        #print(line)
        memory.insert(END, linem)
        linem = filem.readline()
    filem.close()

    # ACTUALIZA CACHE1
    file = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/cache_1_file.txt", "r")
    line = file.readline()
    cache1d.delete(0, END)
    cache1t.delete(0, END)
    cache1s.delete(0, END)
    i=0
    while i < 8:
        # print(line)
        if line == "-1\n":
            cache1d.insert(END, "-")
        else:
            cache1d.insert(END, line)
        line = file.readline()
        i+=1
    while i < 16:
        # print(line)
        if line == "-1\n":
            cache1t.insert(END, "-")
        else:
            cache1t.insert(END, line)
        line = file.readline()
        i += 1
    while i < 24:
        if line == "0\n":
            cache1s.insert(END, "I")
        elif line == "1\n":
            cache1s.insert(END, "M")
        elif line == "2\n":
            cache1s.insert(END, "S")
        else:
            cache1s.insert(END, "-")
        line = file.readline()
        i += 1
    file.close()

    # ACTUALIZA CACHE2
    file = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/cache_2_file.txt",
                "r")
    line = file.readline()
    cache2d.delete(0, END)
    cache2t.delete(0, END)
    cache2s.delete(0, END)
    i = 0
    while i < 8:
        # print(line)
        if line == "-1\n":
            cache2d.insert(END, "-")
        else:
            cache2d.insert(END, line)
        line = file.readline()
        i += 1
    while i < 16:
        # print(line)
        if line == "-1\n":
            cache2t.insert(END, "-")
        else:
            cache2t.insert(END, line)
        line = file.readline()
        i += 1
    while i < 24:
        # print(line)
        if line == "0\n":
            cache2s.insert(END, "I")
        elif line == "1\n":
            cache2s.insert(END, "M")
        elif line == "2\n":
            cache2s.insert(END, "S")
        else:
            cache2s.insert(END, "-")
        line = file.readline()
        i += 1
    file.close()
    # ACTUALIZA CACHE3
    file = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/cache_3_file.txt", "r")
    line = file.readline()
    cache3d.delete(0, END)
    cache3t.delete(0, END)
    cache3s.delete(0, END)
    i=0
    while i<8:
        # print(line)
        if line == "-1\n":
            cache3d.insert(END, "-")
        else:
            cache3d.insert(END, line)
        line = file.readline()
        i+=1
    while i < 16:
        # print(line)
        if line == "-1\n":
            cache3t.insert(END, "-")
        else:
            cache3t.insert(END, line)
        line = file.readline()
        i += 1
    while i < 24:
        # print(line)
        if line == "0\n":
            cache3s.insert(END, "I")
        elif line == "1\n":
            cache3s.insert(END, "M")
        elif line == "2\n":
            cache3s.insert(END, "S")
        else:
            cache3s.insert(END, "-")
        line = file.readline()
        i += 1
    file.close()
    # ACTUALIZA CACHE1
    file = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/cache_4_file.txt", "r")
    line = file.readline()
    cache4d.delete(0, END)
    cache4s.delete(0, END)
    cache4t.delete(0, END)
    i=0
    while i<8:
        # print(line)
        if line == "-1\n":
            cache4d.insert(END, "-")
        else:
            cache4d.insert(END, line)
        line = file.readline()
        i+=1
    while i < 16:

        if line == "-1\n":
            cache4t.insert(END, "-")
        else:
            cache4t.insert(END, line)
        line = file.readline()
        i += 1
    while i < 24:
        # print(line)
        if line == "0\n":
            cache4s.insert(END, "I")
        elif line == "1\n":
            cache4s.insert(END, "M")
        elif line == "2\n":
            cache4s.insert(END, "S")
        else:
            cache4s.insert(END, "-")
        line = file.readline()
        i += 1
    file.close()
    # ACTUALIZA LOS CORES
    # Core1
    global log_1
    file = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/core_1_log.txt", "r")
    line = file.readline()
    if line != log_1:
        core1.insert(END, line)
        core1.see(END)
        log_1 = line
    file.close()

    # Core2
    global log_2
    file = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/core_2_log.txt", "r")
    line = file.readline()
    if line != log_2:
        core2.insert(END, line)
        core2.see(END)
        log_2 = line
    file.close()

    # Core3
    global log_3
    file = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/core_3_log.txt", "r")
    line = file.readline()
    if line != log_3:
        core3.insert(END, line)
        core3.see(END)
        log_3 = line
    file.close()

    # Core4
    global log_4
    file = open("/Users/danicast/Desktop/Proyecto I Arqui II/Cache_Coherence/cmake-build-debug/core_4_log.txt", "r")
    line = file.readline()
    if line != log_4:
        core4.insert(END, line)
        core4.see(END)
        log_4 = line
    file.close()





window=Tk()
# add widgets here

window.title('Hello Python')
window.geometry("1350x830+10+20")

#w = Text ( window,width=15, height=2 )
#w.pos(x=-30,y=30)

#contenedor_principal = Canvas(ventana_principal , width= 800, height = 700)
#contenedor_principal.place(x=0,y=0)


#____________________________________________________CORE1
core1 = Listbox(window,width=40, height = 20)
core1.place(x=50,y=50)

core1.see(END)

cache1d = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache1d.place(x=470,y=50)

cache1t = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache1t.place(x=500,y=50)

cache1s = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache1s.place(x=530,y=50)

w = Label(window, text="CORE #1", font=("Helvetica", 20))
w.place(x=50,y=10)

w = Label(window, text="D", font=("Helvetica", 16))
w.place(x=470,y=20)
w = Label(window, text="T", font=("Helvetica", 16))
w.place(x=500,y=20)
w = Label(window, text="S", font=("Helvetica", 16))
w.place(x=530,y=20)

for i in range(8):
    w = Label(window, text=str(i)+" =", font=("Helvetica", 16))
    w.place(x=440,y=50+20*i-2)
#__________________________________________________________
plusx = 570
#____________________________________________________CORE2
core2 = Listbox(window,width=40, height = 20)
core2.place(x=50+plusx,y=50)

cache2d = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache2d.place(x=470+plusx,y=50)

cache2t = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache2t.place(x=500+plusx,y=50)

cache2s = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache2s.place(x=530+plusx,y=50)

w = Label(window, text="CORE #2", font=("Helvetica", 20))
w.place(x=50+plusx,y=10)

w = Label(window, text="D", font=("Helvetica", 16))
w.place(x=470+plusx,y=20)
w = Label(window, text="T", font=("Helvetica", 16))
w.place(x=500+plusx,y=20)
w = Label(window, text="S", font=("Helvetica", 16))
w.place(x=530+plusx,y=20)

for i in range(8):
    w = Label(window, text=str(i)+" =", font=("Helvetica", 16))
    w.place(x=440+plusx,y=50+20*i-2)
#__________________________________________________________
plusy = 400

#____________________________________________________CORE3
core3 = Listbox(window,width=40, height = 20)
core3.place(x=50,y=50+plusy)

cache3d = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache3d.place(x=470,y=50+plusy)

cache3t = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache3t.place(x=500,y=50+plusy)

cache3s = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache3s.place(x=530,y=50+plusy)

w = Label(window, text="CORE #3", font=("Helvetica", 20))
w.place(x=50,y=10+plusy)

w = Label(window, text="D", font=("Helvetica", 16))
w.place(x=470,y=20+plusy)
w = Label(window, text="T", font=("Helvetica", 16))
w.place(x=500,y=20+plusy)
w = Label(window, text="S", font=("Helvetica", 16))
w.place(x=530,y=20+plusy)

for i in range(8):
    w = Label(window, text=str(i)+" =", font=("Helvetica", 16))
    w.place(x=440,y=50+20*i+plusy-2)
#__________________________________________________________

#____________________________________________________CORE4
core4 = Listbox(window,width=40, height = 20)
core4.place(x=50+plusx,y=50+plusy)

cache4d = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache4d.place(x=470+plusx,y=50+plusy)

cache4t = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache4t.place(x=500+plusx,y=50+plusy)

cache4s = Listbox(window,width= 2, height = 8,font=("Helvetica", 16))
cache4s.place(x=530+plusx,y=50+plusy)

w = Label(window, text="CORE #4", font=("Helvetica", 20))
w.place(x=50+plusx,y=10+plusy)

w = Label(window, text="D", font=("Helvetica", 16))
w.place(x=470+plusx,y=20+plusy)
w = Label(window, text="T", font=("Helvetica", 16))
w.place(x=500+plusx,y=20+plusy)
w = Label(window, text="S", font=("Helvetica", 16))
w.place(x=530+plusx,y=20+plusy)

for i in range(8):
    w = Label(window, text=str(i)+" =", font=("Helvetica", 16))
    w.place(x=440+plusx,y=50+20*i+plusy-2)
#__________________________________________________________
plusx = 755
#____________________________________________________MEMORY
w = Label(window, text="MEMORY", font=("Helvetica", 20))
w.place(x=440 + plusx,y=10)
for i in range(16):
    w = Label(window, text=str(i)+" =", font=("Helvetica", 16))
    w.place(x=450+plusx,y=50+20*i-2)
memory = Listbox(window, width=2, height=16, font=("Helvetica", 16))
memory.place(x=490 + plusx, y=50)



#listbox_entries = ["Entry 1", "Entry 2",
  #                 "Entry 3", "Entry 4","Entry 4","Entry 4","Entry 4","Entry 4"]
#for entry in listbox_entries:
  #  cache1d.insert(END, entry)


update()
window.mainloop()
