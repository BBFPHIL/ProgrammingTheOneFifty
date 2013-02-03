#!/usr/bin
#Phillip Walker
#Objective(s): Use a string buffer to implement a sentence
#

#String buffer to form sentence
#@param words: list of words
#

def stringBuffer(words):
    
    #String list
    str_list = []
    
    #each word
    for num in xrange(len(words)):
        
        #append to sentence str
        str_list.append(words[num])

    #Join all sentence
    return ' '.join(str_list)

####################
#Testing
###################

stringList = ['hello','my','name','is','Phil']

print stringBuffer(stringList)
