public class Customer {

    private int code;
    private String fullName;
    private String email;
    private String city;
    private boolean status; // isVerified

    // Default constructor
    public Customer() {
        this.code = 0;
        this.fullName = "";
        this.email = "";
        this.city = "";
        this.status = false;
    }

    // Parameterized constructor (uses setters)
    public Customer(int code, String fullName, String email, String city) {
        this.code = code;
        setFullName(fullName);
        setEmail(email);
        this.city = city;
    }

    // Getters
    public int getCode() {
        return code;
    }

    public String getFullName() {
        // Remove spaces, capitalize each word
        if (fullName == null || fullName.isEmpty()) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        for (String word : fullName.split(" ")) {
            if (!word.isEmpty()) {
                sb.append(Character.toUpperCase(word.charAt(0)));
                if (word.length() > 1) {
                    sb.append(word.substring(1));
                }
            }
        }
        return sb.toString();
    }

    public String getEmail() {
        return email;
    }

    public String getCity() {
        // First letter uppercase, remove spaces
        if (city == null || city.isEmpty()) {
            return "";
        }
        StringBuilder sb = new StringBuilder();
        for (String word : city.split(" ")) {
            if (!word.isEmpty()) {
                sb.append(Character.toUpperCase(word.charAt(0)));
                if (word.length() > 1) {
                    sb.append(word.substring(1));
                }
            }
        }
        return sb.toString();
    }

    public boolean getIsVerified() {
        return status;
    }

    // Setters with validation
    public void setFullName(String value) {
        // Valid: only letters and spaces, starts with capital letter
        if (value != null && value.matches("^[A-Z][a-zA-Z ]*$")) {
            this.fullName = value;
            this.status = true;
        } else {
            this.fullName = "Unknown";
            this.status = false;
        }
    }

    public void setEmail(String value) {
        // Valid: contains @ and ends with .com or .org
        if (value != null && value.contains("@") && (value.endsWith(".com") || value.endsWith(".org"))) {
            this.email = value;
        } else {
            this.email = "invalid@email.com";
        }
    }

    public void setCity(String value) {
        this.city = value;
    }

    // toString
    @Override
    public String toString() {
        String verified = status ? "Verified" : "Not Verified";
        return code + "," + fullName + "," + email + "," + getCity() + "," + verified;
    }
}
