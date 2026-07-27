package testing;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class BankAccountTest {

    BankAccount account;
    @BeforeEach
    void setUP() {
    	account=new BankAccount(1001);
    }

    // Creating a valid account
    @Test
   void CreateValidAccount() {
    	assertEquals(1001,account.getAccount());
    }

    // Creating an invalid account
    @Test
    void CreateInvalidAccount() {
    	assertThrows(IllegalArgumentException.class,() ->
    	   new BankAccount(0)
    	);
    }

    // Checking the initial balance
    @Test
    void testInitialBalance() {
    	assertEquals(0, account.getBalance());
    }
    // Retrieving account number
    @Test
    void testGetAccount() {
    	assertEquals(1001,account.getAccount());
    }

    // Updating account number
    @Test
    void testSetAccount() {
    	account.setAccount(2002);
    	assertEquals(2002,account.getAccount());
    }

    // Invalid account number
    @Test
    void testInvalidAccount() {
    	assertThrows(IllegalArgumentException.class ,()->
    	    account.setAccount(-100)
    	);
    	
    }

    // Depositing valid amount
    @Test
     void testDeposit() {
    	account.deposit(500);
    	assertEquals(500 ,account.getBalance());
    }
    // Depositing invalid amount
    @Test
    void testInvalidDeposit() {
    	assertThrows(IllegalArgumentException.class ,()->
    	account.deposit(0)
    	);
    }
    
    // Withdrawing valid amount
    @Test
    void testValidWithdraw () {
    	account.deposit(1000);
    	account.withdraw(300);
    	assertEquals(700 ,account.getBalance());
    }
    // Withdrawing more than balance
    @Test
    void testInsufficientBalance() {
    	account.deposit(200);
    	assertThrows(IllegalStateException.class, () ->
    	account.withdraw(500)
    	);
    }
    	
    

    // Withdrawing invalid amount
    @Test
    void testInvalidWithDraw() {
    	assertThrows(IllegalArgumentException.class, () ->
 	   account.withdraw(-100)
 	);
    }
    
 }

    
