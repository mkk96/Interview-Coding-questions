import socket
import sys
import threading

def readSocketAndOutput(s):
    global byeFlag
    print("Enter 'q' to quit")
    while True:
        if byeFlag:
            try:
                str = s.recv(100).decode()
                
                #split the string from \n
                str = str.split('\r\n')[1]
                
                print("\rMSG RCVD: >> " + str + "\nMSG SENT: << ", end="", flush=True)
            except:
                print("Connection closed")
                break

            if str == "q":
                byeFlag = 0
                break
        
    print("Client Detached...")
    s.close()
    sys.exit()
    
def readSTDINandWriteSocket(s):
    global byeFlag
    while True:
        if byeFlag:
            str = input("MSG SENT: << ")
            str = 'HTTP/1.0 200 OK\r\n'+str
            s.send(str.encode())
            if str == "q":
                print("Quiting...")
                byeFlag = 0
                s.close()
                sys.exit()
        




# os.system('start cmd /K python3 chat.py')

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
byeFlag = 1;
ch = input("Enter\n1 for server\n2 for client\n>>: ")

if ch == "2":
    # host = input("Enter peer IP:")
    host = "127.0.0.1"
    port = 54321
    s.connect((host, port))
    threading.Thread(target=readSocketAndOutput, args=(s,)).start()
    threading.Thread(target=readSTDINandWriteSocket, args=(s,)).start()
    
elif ch == "1":
    host = ''
    port = 54321
    s.bind((host, port))
    s.listen(2)              # Now wait for client connection.
    print("Waiting for connection...")
    while True:
        c, addr = s.accept()     # Establish connection with client.
        threading.Thread(target=readSocketAndOutput, args=(c,)).start()
        threading.Thread(target=readSTDINandWriteSocket, args=(c,)).start()

else:
    print("Incorrect choice")
    sys.exit()