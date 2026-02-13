# 💰 Simple-ATM-Analysis-System 💰

Developed a program to calculate a customer’s  checking account balance at the end of each month.

---

## 🔎 What happened inside the system ?

The system was designed to read a text file that contains all the customer's transactions. <br>
Each customer should have a separate text file to add transactions. 

The first line of the text file shows the account number followed by the account balance at the beginning of the month.

Thereafter, each line has two entries:
- Transaction code
- Transaction amount

Transaction codes:
- W or w means withdrawal
- D or d means deposit
- I or i means interest paid by the bank 

During the month, if at any time the balance goes below $1000.00, a $25.00 service fee is charged.

---

## 📈 Output of the system 

The program prints the following information: 
- Account number
- Balance at the beginning of the month
- Balance at the end of the month
- Interest paid by the bank
- Total amount of deposit
- Number of deposits
- Total amount of withdrawal
- Number of withdrawals
- Service charge

---

## 🚩 How to Run ?
1. Download or clone this repository.
2. Open the project folder in Dev C++ (or any C++ IDE).
3. Compile and run the program.
4. change file names in the code to test different accounts or transactions. 

```
//input file variable

 ifstream infile; 
 infile.open("1002.txt");
```

---

<img src="https://media.giphy.com/media/ObNTw8Uzwy6KQ/giphy.gif" width="30px"> Don't forget to hit the ⭐ if you like this repo. <img src="https://media.giphy.com/media/ObNTw8Uzwy6KQ/giphy.gif" width="30px">


