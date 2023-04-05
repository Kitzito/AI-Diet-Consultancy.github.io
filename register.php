
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
    $user_name = $_POST['user_name'];
    $user_email = $_POST['user_email'];
    $user_password = $_POST['user_password'];

    $sql_query = "INSERT INTO reglogin (user_name, user_email, user_password)
    Values ('$user_name', '$user_email', '$user_password')";

    if(mysqli_query($conn, $sql_query))
    {
        echo "Registration Successful";
        header('Refresh:5; url= login.html');
    }
    else{
        echo "Error: " . $sql . "" . mysqli_error($conn);
    }
    mysqli_close($conn);
}

?>