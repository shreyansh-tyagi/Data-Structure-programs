#class UserMainCode(object):
  #  @classmethod
def armstrong(input1):
      #  @classmethod=input1
    sum=0

    b=len(input1)
    for i in range(len(input1)):
        sum+=pow(int(input1[i]),b)
    if(int(input1)==sum):
        print('Yes') 
    else:
        print('No')        


e=input('enter the number: ')
armstrong(e)        