import pyttsx3
import PyPDF2

book = open('Fault in our Stars.pdf','rb')
pdfReader = PyPDF2.PdfFileReader(book)

pages = pdfReader.numPages
speaker = pyttsx3.init()

for num in range(2,pages):
  page=pdfReader.getPage(num)
  text=page.extractText()
  
  tsg="Welcome to AUDIOBOOK, PYTHON, TSG"
  speaker.say(tsg)
  
  speaker.say(text)
  
  speaker.runAndWait()
