import random
coin=int(random.randint(25,100))
print("coin=",coin)
o=int(input("How many players will play?:"))
z=coin
while True:
    if o==2:
        if z==coin:
            x=int(input("player1:"))
            if(x<coin and x>0):
                coin=coin-x
                print("coin=",coin)
            else:
                while (x>=coin or x<=0):
                   print ("Please enter right number")
                   x=int(input("player1:"))
                coin=coin-x
                print("coin=",coin)
        else:
            x=int(input("player1:"))
            if(x<=(2*y))and (x<=coin)and(x>0):
                coin=coin-x
                print("coin=",coin)
                if(coin==0):
                    print("player 1 wins!")
                    break
            else:
                while (x>(2*y))or(x>coin)or(x<=0):
                  print("Please enter right number")
                  x=int(input("player1:"))
                coin=coin-x
                print("coin=",coin)
                if(coin==0):
                   print("player 1 wins!")
                   break
        y=int(input("player2:"))
        if(y<=(2*x))and (y<=coin)and(y>0):
            coin=coin-y
            print("coin=",coin)
            if(coin==0):
                print("player 2 wins!")
                break
        else:
            while (y>(2*x))or (y>coin)or(y<=0):
                print("Please enter right number")
                y=int(input("player2:"))
            coin=coin-y
            print("coin=",coin)
            if(coin==0):
                print("player 2 wins!")
                break


    elif o==1:
       if z==coin:
           x=int(input("play:"))
           if(x<coin and x>0):
              coin=coin-x
           #   print("coin=",coin)                                              
           else:
              while (x>=coin or x<=0):
                  print ("Please enter right number")
                  x=int(input("play:"))
              coin=coin-x
         #     print("coin=",coin)
       else:
            x=int(input("play:"))
            if(x<=(2*y))and (x<=coin)and(x>0):
                coin=coin-x
            #    print("coin=",coin)
                if(coin==0):
                    print("you win!")
                    break
            else:
                while (x>(2*y))or(x>coin)or(x<=0):
                  print("Please enter right number")
                  x=int(input("play:"))
                coin=coin-x
            #    print("coin=",coin)
                if(coin==0):
                   print("you win!")
                   break

       y=random.randint(1,(x*2))
       while(y>coin):
          y=random.randint(1,(x*2))
       print("computer=",y)
       coin=coin-y
       print("coin=",coin)
       if(coin==0):
             print("GAME OVER!")
             break
          
    else:
       print("Error")
       break

