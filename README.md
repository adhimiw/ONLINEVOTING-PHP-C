
```markdown
# Online Voting System

This is an online voting system project developed in PHP and MySQL. It allows users to register as voters, view voter details, remove voters, and count votes for candidates.

## Features

- User registration as voters
- Admin view of voter details
- Admin functionality to remove voters
- Counting of votes for candidates

## Setup

### Requirements

- Web server (e.g., Apache)
- PHP
- MySQL

### Installation

1. Clone the repository to your local machine:

```
git clone [<repository-url>](https://github.com/adhimiw/ONLINEVOTING-PHP-C.git)
```

2. Import the SQL file `voting_system.sql` into your MySQL database:

```
mysql -u username -p database_name < voting_system.sql
```

3. Configure the database connection in `config.php`:

```php
<?php
$servername = "localhost";
$username = "root";
$password = "";
$database = "voting_system";

// Create connection
$conn = new mysqli($servername, $username, $password, $database);

// Check connection
if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}
?>
```

4. Upload the PHP files to your web server.

5. Access the project in your web browser.

## Usage

- Users can register as voters by providing their details.
- Admins can view voter details, remove voters, and count votes for candidates.

## Project Structure

- `index.php`: Main page for user registration.
- `admin.php`: Admin panel for viewing voter details, removing voters, and counting votes.
- `config.php`: Configuration file for database connection.
- `voting_system.sql`: SQL file for database setup.

## Contributing

Contributions are welcome! Please fork the repository and create a pull request with your changes.

## Issues

If you encounter any issues or bugs, please [open an issue](https://github.com/adhimiw/ONLINEVOTING-PHP-C.git/issues) on GitHub.

## License
GPL-3.0 license
```


