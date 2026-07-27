package testing;

import static org.junit.jupiter.api.Assertions.*;

import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.Test;

class UserRegistrationTest {

    private UserRegistration registration;
    private User user;

    @BeforeEach
    void setUp() {
        registration = new UserRegistration();
        user = new User("Tahmid", "tahmid@gmail.com", "12345");
    }

    // Adding a valid user
    @Test
    void testAddValidUser() {
        assertTrue(registration.addUser(user));
    }

    // Adding null user
    @Test
    void testAddNullUser() {
        assertThrows(IllegalArgumentException.class,
                () -> registration.addUser(null));
    }

    // Empty name
    @Test
    void testAddUserWithEmptyName() {
        User u = new User("", "abc@gmail.com", "12345");

        assertThrows(IllegalArgumentException.class,
                () -> registration.addUser(u));
    }

    // Empty email
    @Test
    void testAddUserWithEmptyEmail() {
        User u = new User("Rahim", "", "12345");

        assertThrows(IllegalArgumentException.class,
                () -> registration.addUser(u));
    }

    // Empty password
    @Test
    void testAddUserWithEmptyPassword() {
        User u = new User("Rahim", "rahim@gmail.com", "");

        assertThrows(IllegalArgumentException.class,
                () -> registration.addUser(u));
    }

    // Find existing user
    @Test
    void testFindExistingUser() {
        registration.addUser(user);

        User found = registration.findUser("tahmid@gmail.com");

        assertNotNull(found);
        assertEquals("Tahmid", found.getName());
    }

    // Find non-existing user
    @Test
    void testFindNonExistingUser() {
        assertNull(registration.findUser("abc@gmail.com"));
    }

    // Empty email while searching
    @Test
    void testFindUserWithEmptyEmail() {
        assertThrows(IllegalArgumentException.class,
                () -> registration.findUser(""));
    }

    // Successful login
    @Test
    void testLoginSuccess() {
        registration.addUser(user);

        assertTrue(registration.login("tahmid@gmail.com", "12345"));
    }

    // Wrong password
    @Test
    void testLoginWrongPassword() {
        registration.addUser(user);

        assertFalse(registration.login("tahmid@gmail.com", "11111"));
    }

    // Wrong email
    @Test
    void testLoginWrongEmail() {
        registration.addUser(user);

        assertFalse(registration.login("abc@gmail.com", "12345"));
    }

    // Empty email during login
    @Test
    void testLoginEmptyEmail() {
        assertThrows(IllegalArgumentException.class,
                () -> registration.login("", "12345"));
    }

    // Empty password during login
    @Test
    void testLoginEmptyPassword() {
        assertThrows(IllegalArgumentException.class,
                () -> registration.login("tahmid@gmail.com", ""));
    }
}





 // Handling invalid user information
    @Test
    void testInvalidUser() {

        User user = new User("","","");

        assertThrows(IllegalArgumentException.class,()->
        registration.addUser(user)

        );

    }

