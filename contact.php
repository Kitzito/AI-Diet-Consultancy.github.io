<?php

$servername = "localhost";
$username = "root";
$password = "";
$database_name = "dbms_ai_diet_consultancy";

$conn = mysqli_connect($servername, $username, $password, $database_name);

if(!$conn)
{
    die("connection failed:" . mysqli_connect_error());
}

if (isset($_POST['save'])) {
    $first_name = $_POST['first_name'];
    $last_name = $_POST['last_name'];
    $email_address = $_POST['email_address'];
    $phone_number = $_POST['phone_number'];
    $message_content = $_POST['message_content'];

    $sql_query = "INSERT INTO message (first_name, last_name, email_address, phone_number, message_content)
    Values ('$first_name', '$last_name', '$email_address', '$phone_number', '$message_content')";

    if(mysqli_query($conn, $sql_query))
    {
        echo "Your feedback is very much appreciated, our team will contact you shortly!  ";
        header('Refresh:5; url= contact.html');
    }
    else{
        echo "Error: " . $sql . "" . mysqli_error($conn);
    }
    mysqli_close($conn);
}

?>