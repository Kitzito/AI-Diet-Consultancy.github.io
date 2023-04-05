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
    $user_email = $_POST['user_email'];
    $user_password = $_POST['user_password'];

    $sql_query = "SELECT user_email, user_password FROM reglogin WHERE user_email = '$user_email'";
    $sql_query_result = mysqli_query($conn, $sql_query);
    if(mysqli_num_rows($sql_query_result) == 1){

        $result = mysqli_fetch_assoc($sql_query_result);

        if($result["user_password"] == $user_password){
            header('location: home.html');
        }else{
            echo "Password incorrect!!";
            header('Refresh:2; url= login.html');
        }

    }else{
        echo "User does not exist, please create an account!";
        header('Refresh:2; url= login.html');
    }

    

    mysqli_close($conn);
}

?>